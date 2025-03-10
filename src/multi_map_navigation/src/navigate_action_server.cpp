#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "multi_map_navigation/action/navigate.hpp"
#include "multi_map_navigation/srv/get_wormhole.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "std_srvs/srv/empty.hpp"
#include "nav2_msgs/action/navigate_to_pose.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"

class MultiMapNavigator : public rclcpp::Node {
public:
    using Navigate = multi_map_navigation::action::Navigate;
    using GoalHandleNavigate = rclcpp_action::ServerGoalHandle<Navigate>;
    using NavigateToPose = nav2_msgs::action::NavigateToPose;

    MultiMapNavigator() : Node("multi_map_navigator") {
        // Initialize parameters
        this->declare_parameter("initial_map", "hall");
        current_map_ = this->get_parameter("initial_map").as_string();
        
        // Action server for custom navigation
        this->action_server_ = rclcpp_action::create_server<Navigate>(
            this,
            "navigate",
            std::bind(&MultiMapNavigator::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&MultiMapNavigator::handle_cancel, this, std::placeholders::_1),
            std::bind(&MultiMapNavigator::handle_accepted, this, std::placeholders::_1));

        // Wormhole service client
        wormhole_client_ = this->create_client<multi_map_navigation::srv::GetWormhole>("get_wormhole");
        
        // Navigation client
        nav_client_ = rclcpp_action::create_client<NavigateToPose>(this, "navigate_to_pose");
        
        // Map switching publisher
        map_pub_ = this->create_publisher<std_msgs::msg::String>("map_switch", 10);
        
        // Position feedback subscriber
        odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "odom", 10, std::bind(&MultiMapNavigator::odom_callback, this, std::placeholders::_1));
        
        
        
        // Clear costmaps client
        clear_costmaps_client_ = this->create_client<std_srvs::srv::Empty>("clear_costmaps");

        RCLCPP_INFO(this->get_logger(), "MultiMapNavigator initialized with map: %s", current_map_.c_str());
    }

private:
    rclcpp_action::Server<Navigate>::SharedPtr action_server_;
    rclcpp::Client<multi_map_navigation::srv::GetWormhole>::SharedPtr wormhole_client_;
    rclcpp_action::Client<NavigateToPose>::SharedPtr nav_client_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr map_pub_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
    rclcpp::Client<std_srvs::srv::Empty>::SharedPtr clear_costmaps_client_;
    
    std::string current_map_;
    double current_x_ = 0.0;
    double current_y_ = 0.0;
    double current_theta_ = 0.0;

    void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg) {
        current_x_ = msg->pose.pose.position.x;
        current_y_ = msg->pose.pose.position.y;
        
        // Extract yaw/theta from quaternion
        double qx = msg->pose.pose.orientation.x;
        double qy = msg->pose.pose.orientation.y;
        double qz = msg->pose.pose.orientation.z;
        double qw = msg->pose.pose.orientation.w;
        current_theta_ = std::atan2(2.0 * (qw * qz + qx * qy), 1.0 - 2.0 * (qy * qy + qz * qz));
    }

    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID &uuid, 
        std::shared_ptr<const Navigate::Goal> goal) 
    {
        RCLCPP_INFO(this->get_logger(), "Received goal to navigate to (%.2f, %.2f) in %s", 
                    goal->x, goal->y, goal->target_map.c_str());
        
        // Check if target map exists (could verify against a list of known maps)
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandleNavigate> goal_handle) 
    {
        RCLCPP_INFO(this->get_logger(), "Goal canceled.");
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(const std::shared_ptr<GoalHandleNavigate> goal_handle) {
        std::thread(std::bind(&MultiMapNavigator::execute, this, goal_handle)).detach();
    }

    void switch_map(const std::string& new_map) {
        // Publish map switch command
        auto msg = std::make_shared<std_msgs::msg::String>();
        msg->data = new_map;
        map_pub_->publish(*msg);
        
        // Update current map
        current_map_ = new_map;
        
        // Clear costmaps after map switch
        auto request = std::make_shared<std_srvs::srv::Empty::Request>();

        auto future = clear_costmaps_client_->async_send_request(request);
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), future) != 
            rclcpp::FutureReturnCode::SUCCESS) {
            RCLCPP_WARN(this->get_logger(), "Failed to clear costmaps");
        }
        
        RCLCPP_INFO(this->get_logger(), "Switched to map: %s", current_map_.c_str());
        
        // Sleep to allow map to load
        std::this_thread::sleep_for(std::chrono::seconds(2));

        std::future_status status = navigation_future.wait_for(std::chrono::seconds(30));
        if (status == std::future_status::timeout) {
            RCLCPP_ERROR(this->get_logger(), "Navigation timed out");
            nav_client_->async_cancel_goal(goal_handle);
            return false;
            }
            
    }

    bool send_navigation_goal(double x, double y, double theta) {
        if (!nav_client_->wait_for_action_server(std::chrono::seconds(5))) {
            RCLCPP_ERROR(this->get_logger(), "Navigation action server not available");
            return false;
        }
        
        auto goal_msg = NavigateToPose::Goal();
        goal_msg.pose.header.frame_id = "map";
        goal_msg.pose.header.stamp = this->now();
        goal_msg.pose.pose.position.x = x;
        goal_msg.pose.pose.position.y = y;
        
        // Convert theta to quaternion
        double cy = cos(theta * 0.5);
        double sy = sin(theta * 0.5);
        double cp = cos(0.0);
        double sp = sin(0.0);
        double cr = cos(0.0);
        double sr = sin(0.0);
        
        goal_msg.pose.pose.orientation.w = cy * cp * cr + sy * sp * sr;
        goal_msg.pose.pose.orientation.x = cy * cp * sr - sy * sp * cr;
        goal_msg.pose.pose.orientation.y = sy * cp * sr + cy * sp * cr;
        goal_msg.pose.pose.orientation.z = sy * cp * cr - cy * sp * sr;
        
        auto send_goal_options = rclcpp_action::Client<NavigateToPose>::SendGoalOptions();
        
        RCLCPP_INFO(this->get_logger(), "Sending navigation goal to (%.2f, %.2f, %.2f)", x, y, theta);
        
        auto goal_handle_future = nav_client_->async_send_goal(goal_msg, send_goal_options);
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), goal_handle_future) !=
            rclcpp::FutureReturnCode::SUCCESS) {
            RCLCPP_ERROR(this->get_logger(), "Failed to send navigation goal");
            return false;
        }
        
        auto goal_handle = goal_handle_future.get();
        if (!goal_handle) {
            RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
            return false;
        }
        
        // Waiting for result
        auto result_future = nav_client_->async_get_result(goal_handle);
        
        // Provide feedback while waiting
        while (rclcpp::ok() && 
               rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_future, std::chrono::milliseconds(100)) 
               != rclcpp::FutureReturnCode::SUCCESS) {
            // Send feedback
            auto feedback = std::make_shared<Navigate::Feedback>();
            feedback->current_x = current_x_;
            feedback->current_y = current_y_;
            feedback->current_theta = current_theta_;
            goal_handle_->publish_feedback(feedback);
        }
        
    
        auto result = result_future.get();
        if (result.code != rclcpp_action::ResultCode::SUCCEEDED) {
            RCLCPP_ERROR(this->get_logger(), "Navigation failed");
            return false;
        }
        
        return true;
    }

    std::shared_ptr<GoalHandleNavigate> goal_handle_;
    
    void execute(const std::shared_ptr<GoalHandleNavigate> goal_handle) {
        goal_handle_ = goal_handle;
        auto result = std::make_shared<Navigate::Result>();
        auto goal = goal_handle->get_goal();
        
        // Publish initial feedback
        auto feedback = std::make_shared<Navigate::Feedback>();
        feedback->current_x = current_x_;
        feedback->current_y = current_y_;
        feedback->current_theta = current_theta_;
        goal_handle->publish_feedback(feedback);

        if (goal->target_map == current_map_) {
           // Directly navigate to the goal in the same map
            RCLCPP_INFO(this->get_logger(), "Navigating directly within the same map.");
            
            bool nav_success = send_navigation_goal(goal->x, goal->y, goal->theta);
            
            if (nav_success) {
                result->success = true;
                result->message = "Reached target in the same map.";
                goal_handle->succeed(result);
            } else {
                result->success = false;
                result->message = "Failed to navigate to target in the same map.";
                goal_handle->abort(result);
            }
        } else {
            // Switch maps using a wormhole
            if (!wormhole_client_->wait_for_service(std::chrono::seconds(5))) {
                RCLCPP_ERROR(this->get_logger(), "Wormhole service unavailable.");
                result->success = false;
                result->message = "Wormhole service unavailable.";
                goal_handle->abort(result);
                return;
            }

            // Query wormhole information
            auto request = std::make_shared<multi_map_navigation::srv::GetWormhole::Request>();
            request->map_from = current_map_;
            request->map_to = goal->target_map;

            auto future = wormhole_client_->async_send_request(request);
            if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), future) != 
                rclcpp::FutureReturnCode::SUCCESS) {
                RCLCPP_ERROR(this->get_logger(), "Failed to get wormhole.");
                result->success = false;
                result->message = "Wormhole lookup failed.";
                goal_handle->abort(result);
                return;
            }

            auto response = future.get();
            if (!response->success) {
                RCLCPP_WARN(this->get_logger(), "No wormhole found.");
                result->success = false;
                result->message = "No wormhole found.";
                goal_handle->abort(result);
                return;
            }

            // Step 1: Navigate to wormhole in current map
            RCLCPP_INFO(this->get_logger(), "Navigating to wormhole at (%.2f, %.2f, %.2f)",
                response->x_from, response->y_from, response->theta_from);
            
            bool nav_to_wormhole = send_navigation_goal(
                response->x_from, response->y_from, response->theta_from);
            
            if (!nav_to_wormhole) {
                result->success = false;
                result->message = "Failed to navigate to wormhole.";
                goal_handle->abort(result);
                return;
            }
            
            // Step 2: Switch map
            RCLCPP_INFO(this->get_logger(), "Switching from %s to %s", 
                current_map_.c_str(), goal->target_map.c_str());
            switch_map(goal->target_map);
            
            // Step 3: Initialize position in new map (we're now at wormhole exit)
            // Reinitialize robot pose at the wormhole exit point
            // This would typically be handled by a map server or localization system
            
            // Step 4: Navigate to final destination in new map
            RCLCPP_INFO(this->get_logger(), "Navigating to final goal (%.2f, %.2f, %.2f)",
                goal->x, goal->y, goal->theta);
            
            bool nav_to_goal = send_navigation_goal(goal->x, goal->y, goal->theta);
            
            if (nav_to_goal) {
                result->success = true;
                result->message = "Successfully reached target in " + goal->target_map + ".";
                goal_handle->succeed(result);
            } else {
                result->success = false;
                result->message = "Failed to navigate to target after map switch.";
                goal_handle->abort(result);
            }
        }
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MultiMapNavigator>());
    rclcpp::shutdown();
    return 0;
}

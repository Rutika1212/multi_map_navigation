#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/occupancy_grid.hpp"
#include "std_msgs/msg/string.hpp"
#include "nav2_map_server/map_server.hpp"
#include "nav2_map_server/map_io.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <map>

class MultiMapServer : public rclcpp::Node {
public:
    MultiMapServer() : Node("multi_map_server") {
        // Parameters
        this->declare_parameter("map_directory", "maps");
        this->declare_parameter("known_maps", std::vector<std::string>{"hall", "room1"});
        this->declare_parameter("initial_map", "hall");
        
        std::string map_directory = ament_index_cpp::get_package_share_directory("multi_map_navigation") + "/" + this->get_parameter("map_directory").as_string();
        std::vector<std::string> known_maps = this->get_parameter("known_maps").as_string_array();
        std::string initial_map = this->get_parameter("initial_map").as_string();
        
        // Initialize map paths
        for (const auto& map_name : known_maps) {
            std::string yaml_path = map_directory + "/" + map_name + ".yaml";
            map_paths_[map_name] = yaml_path;
            RCLCPP_INFO(this->get_logger(), "Registered map: %s at %s", 
                        map_name.c_str(), yaml_path.c_str());
        }
        
        // Map publisher
        map_pub_ = this->create_publisher<nav_msgs::msg::OccupancyGrid>("map", 10);
        
        // Map switch subscriber
        map_switch_sub_ = this->create_subscription<std_msgs::msg::String>(
            "map_switch", 10, std::bind(&MultiMapServer::handle_map_switch, this, std::placeholders::_1));
        
        // Load initial map
        if (!load_and_publish_map(initial_map)) {
            RCLCPP_ERROR(this->get_logger(), "Failed to load initial map: %s", initial_map.c_str());
        }
        
        current_map_ = initial_map;
        RCLCPP_INFO(this->get_logger(), "MultiMapServer initialized with map: %s", current_map_.c_str());
    }

private:
    rclcpp::Publisher<nav_msgs::msg::OccupancyGrid>::SharedPtr map_pub_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr map_switch_sub_;
    std::map<std::string, std::string> map_paths_;
    std::string current_map_;
    
    void handle_map_switch(const std_msgs::msg::String::SharedPtr msg) {
        std::string requested_map = msg->data;
        RCLCPP_INFO(this->get_logger(), "Map switch request received for: %s", requested_map.c_str());
        
        if (map_paths_.find(requested_map) == map_paths_.end()) {
            RCLCPP_ERROR(this->get_logger(), "Unknown map: %s", requested_map.c_str());
            return;
        }
        
        if (requested_map == current_map_) {
            RCLCPP_INFO(this->get_logger(), "Already using map: %s", requested_map.c_str());
            return;
        }
        
        if (load_and_publish_map(requested_map)) {
            current_map_ = requested_map;
            RCLCPP_INFO(this->get_logger(), "Switched to map: %s", current_map_.c_str());
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to switch to map: %s", requested_map.c_str());
        }
    }
    
    bool load_and_publish_map(const std::string& map_name) {
        if (map_paths_.find(map_name) == map_paths_.end()) {
            RCLCPP_ERROR(this->get_logger(), "Map not found: %s", map_name.c_str());
            return false;
        }
        
        std::string yaml_path = map_paths_[map_name];
        
        try {
            nav2_map_server::LoadParameters load_parameters;
            load_parameters.yaml_filename = yaml_path;
            nav2_map_server::OccGridLoader map_loader;
            auto map = map_loader.loadMapFromYaml(load_parameters);
            
            // Set map metadata
            map->header.stamp = this->now();
            map->header.frame_id = "map";
            
            // Publish map
            map_pub_->publish(*map);
            RCLCPP_INFO(this->get_logger(), "Published map: %s", map_name.c_str());
            return true;
        } catch (const std::exception& e) {
            RCLCPP_ERROR(this->get_logger(), "Failed to load map %s: %s", 
                        map_name.c_str(), e.what());
            return false;
        }
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MultiMapServer>());
    rclcpp::shutdown();
    return 0;
}
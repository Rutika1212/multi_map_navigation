#include "ament_index_cpp/get_package_share_directory.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sqlite3.h"
#include "multi_map_navigation/srv/get_wormhole.hpp"


class WormholeDB : public rclcpp::Node {
public:
    WormholeDB() : Node("wormhole_db_node") {
        connectToDB();
        service_ = this->create_service<multi_map_navigation::srv::GetWormhole>(
            "get_wormhole",
            std::bind(&WormholeDB::handle_get_wormhole, this, std::placeholders::_1, std::placeholders::_2)
        );
        RCLCPP_INFO(this->get_logger(), "WormholeDB service ready.");
    }

    ~WormholeDB() {
        sqlite3_close(db);
    }

private:
    sqlite3 *db;
    rclcpp::Service<multi_map_navigation::srv::GetWormhole>::SharedPtr service_;

    void connectToDB() {
        
        std::string db_path = ament_index_cpp::get_package_share_directory("multi_map_navigation") + "/wormhole_db.sqlite";
        RCLCPP_INFO(this->get_logger(), "Using database file: %s", db_path.c_str());
        if (sqlite3_open(db_path.c_str(), &db)) {
            RCLCPP_ERROR(this->get_logger(), "Failed to open database: %s", sqlite3_errmsg(db));
        } else {
            RCLCPP_INFO(this->get_logger(), "Connected to Wormhole DB.");
        }
    }

    void handle_get_wormhole(
        const std::shared_ptr<multi_map_navigation::srv::GetWormhole::Request> request,
        std::shared_ptr<multi_map_navigation::srv::GetWormhole::Response> response) 
    {
        std::string query = "SELECT x_from, y_from, theta_from, x_to, y_to, theta_to FROM wormholes WHERE map_from='" 
                            + request->map_from + "' AND map_to='" + request->map_to + "';";
        sqlite3_stmt *stmt;
        int rc = sqlite3_prepare_v2(db, query.c_str(), -1, &stmt, nullptr);

        if (rc == SQLITE_OK) {
            if (sqlite3_step(stmt) == SQLITE_ROW) {
                response->x_from = sqlite3_column_double(stmt, 0);
                response->y_from = sqlite3_column_double(stmt, 1);
                response->theta_from = sqlite3_column_double(stmt, 2);
                response->x_to = sqlite3_column_double(stmt, 3);
                response->y_to = sqlite3_column_double(stmt, 4);
                response->theta_to = sqlite3_column_double(stmt, 5);
                response->success = true;
                response->message = "Wormhole found!";
                RCLCPP_INFO(this->get_logger(), "Wormhole found between %s and %s.", 
                            request->map_from.c_str(), request->map_to.c_str());
            } else {
                response->success = false;
                response->message = "No wormhole found.";
                RCLCPP_WARN(this->get_logger(), "No wormhole found between %s and %s.", 
                            request->map_from.c_str(), request->map_to.c_str());
            }
            sqlite3_finalize(stmt);
        } else {
            response->success = false;
            response->message = "Database query failed.";
            RCLCPP_ERROR(this->get_logger(), "Database query failed: %s", sqlite3_errmsg(db));
        }
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<WormholeDB>());
    rclcpp::shutdown();
    return 0;
}

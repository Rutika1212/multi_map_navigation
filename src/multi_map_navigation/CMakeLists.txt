cmake_minimum_required(VERSION 3.8)
project(multi_map_navigation)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ✅ Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(action_msgs REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(PkgConfig REQUIRED)
find_package(nav2_map_server REQUIRED)
find_package(std_srvs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

pkg_check_modules(SQLITE3 REQUIRED sqlite3)

# ✅ Generate service headers
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/GetWormhole.srv"
  "action/Navigate.action"
  DEPENDENCIES action_msgs std_msgs
)

# ✅ Ensure generated headers are available
include_directories(${CMAKE_BINARY_DIR}/rosidl_generator_cpp)

# ✅ Add Executables
add_executable(wormhole_db_node src/wormhole_db.cpp)
#add_executable(navigate_action_server src/navigate_action_server.cpp)
add_executable(multi_map_navigator src/navigate_action_server.cpp)

add_executable(map_server_node src/map_server.cpp)
target_link_libraries(map_server_node ${cpp_typesupport_target})
ament_target_dependencies(map_server_node rclcpp nav_msgs std_msgs nav2_map_server)

# ✅ Link against generated ROSIDL interfaces
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} rosidl_typesupport_cpp)

# ✅ Ensure message/service generation before building the executable
#add_dependencies(navigate_action_server ${PROJECT_NAME}__rosidl_generator_cpp)
add_dependencies(multi_map_navigator ${PROJECT_NAME}__rosidl_generator_cpp)

add_dependencies(wormhole_db_node ${PROJECT_NAME}__rosidl_generator_cpp)

# ✅ Link ROS packages and generated types
#target_link_libraries(navigate_action_server  ${cpp_typesupport_target} ${PROJECT_NAME}__rosidl_typesupport_cpp)

target_link_libraries(multi_map_navigator 
  ${cpp_typesupport_target} 
  ${PROJECT_NAME}__rosidl_typesupport_cpp
)


target_link_libraries(wormhole_db_node 
  ${cpp_typesupport_target} 
  ${PROJECT_NAME}__rosidl_typesupport_cpp 
  ${SQLITE3_LIBRARIES}
)

# ✅ Define dependencies for each target
ament_target_dependencies(wormhole_db_node 
  rclcpp 
  ament_index_cpp 
  nav_msgs 
  action_msgs 
  rosidl_default_runtime
)

#ament_target_dependencies(navigate_action_server   rclcpp  rclcpp_action  nav_msgs  action_msgs)

ament_target_dependencies(multi_map_navigator rclcpp rclcpp_action nav_msgs action_msgs std_msgs)


# ✅ Export runtime dependencies
ament_export_dependencies(rosidl_default_runtime)

# ✅ Install target
install(TARGETS wormhole_db_node multi_map_navigator map_server_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  rviz
  config
  maps
  DESTINATION share/${PROJECT_NAME}/
)

install(FILES
  wormhole_db.sqlite
  DESTINATION share/${PROJECT_NAME}/
)

# ✅ Linting and Testing
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

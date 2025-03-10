// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from multi_map_navigation:srv/GetWormhole.idl
// generated code does not contain a copyright notice

#ifndef MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "multi_map_navigation/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "multi_map_navigation/srv/detail/get_wormhole__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace multi_map_navigation
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_map_navigation
cdr_serialize(
  const multi_map_navigation::srv::GetWormhole_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_map_navigation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  multi_map_navigation::srv::GetWormhole_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_map_navigation
get_serialized_size(
  const multi_map_navigation::srv::GetWormhole_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_map_navigation
max_serialized_size_GetWormhole_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace multi_map_navigation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_map_navigation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_map_navigation, srv, GetWormhole_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "multi_map_navigation/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "multi_map_navigation/srv/detail/get_wormhole__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace multi_map_navigation
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_map_navigation
cdr_serialize(
  const multi_map_navigation::srv::GetWormhole_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_map_navigation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  multi_map_navigation::srv::GetWormhole_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_map_navigation
get_serialized_size(
  const multi_map_navigation::srv::GetWormhole_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_map_navigation
max_serialized_size_GetWormhole_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace multi_map_navigation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_map_navigation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_map_navigation, srv, GetWormhole_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "multi_map_navigation/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_map_navigation
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_map_navigation, srv, GetWormhole)();

#ifdef __cplusplus
}
#endif

#endif  // MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

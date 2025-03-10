// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multi_map_navigation:srv/GetWormhole.idl
// generated code does not contain a copyright notice

#ifndef MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__STRUCT_H_
#define MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_from'
// Member 'map_to'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetWormhole in the package multi_map_navigation.
typedef struct multi_map_navigation__srv__GetWormhole_Request
{
  rosidl_runtime_c__String map_from;
  rosidl_runtime_c__String map_to;
} multi_map_navigation__srv__GetWormhole_Request;

// Struct for a sequence of multi_map_navigation__srv__GetWormhole_Request.
typedef struct multi_map_navigation__srv__GetWormhole_Request__Sequence
{
  multi_map_navigation__srv__GetWormhole_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_map_navigation__srv__GetWormhole_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetWormhole in the package multi_map_navigation.
typedef struct multi_map_navigation__srv__GetWormhole_Response
{
  double x_from;
  double y_from;
  double theta_from;
  double x_to;
  double y_to;
  double theta_to;
  bool success;
  rosidl_runtime_c__String message;
} multi_map_navigation__srv__GetWormhole_Response;

// Struct for a sequence of multi_map_navigation__srv__GetWormhole_Response.
typedef struct multi_map_navigation__srv__GetWormhole_Response__Sequence
{
  multi_map_navigation__srv__GetWormhole_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_map_navigation__srv__GetWormhole_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__STRUCT_H_

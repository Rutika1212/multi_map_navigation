// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from multi_map_navigation:srv/GetWormhole.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "multi_map_navigation/srv/detail/get_wormhole__rosidl_typesupport_introspection_c.h"
#include "multi_map_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "multi_map_navigation/srv/detail/get_wormhole__functions.h"
#include "multi_map_navigation/srv/detail/get_wormhole__struct.h"


// Include directives for member types
// Member `map_from`
// Member `map_to`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multi_map_navigation__srv__GetWormhole_Request__init(message_memory);
}

void multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_fini_function(void * message_memory)
{
  multi_map_navigation__srv__GetWormhole_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_message_member_array[2] = {
  {
    "map_from",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_map_navigation__srv__GetWormhole_Request, map_from),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_map_navigation__srv__GetWormhole_Request, map_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_message_members = {
  "multi_map_navigation__srv",  // message namespace
  "GetWormhole_Request",  // message name
  2,  // number of fields
  sizeof(multi_map_navigation__srv__GetWormhole_Request),
  multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_message_member_array,  // message members
  multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_message_type_support_handle = {
  0,
  &multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_map_navigation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_map_navigation, srv, GetWormhole_Request)() {
  if (!multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_message_type_support_handle.typesupport_identifier) {
    multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multi_map_navigation__srv__GetWormhole_Request__rosidl_typesupport_introspection_c__GetWormhole_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "multi_map_navigation/srv/detail/get_wormhole__rosidl_typesupport_introspection_c.h"
// already included above
// #include "multi_map_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "multi_map_navigation/srv/detail/get_wormhole__functions.h"
// already included above
// #include "multi_map_navigation/srv/detail/get_wormhole__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multi_map_navigation__srv__GetWormhole_Response__init(message_memory);
}

void multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_fini_function(void * message_memory)
{
  multi_map_navigation__srv__GetWormhole_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_message_member_array[8] = {
  {
    "x_from",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_map_navigation__srv__GetWormhole_Response, x_from),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_from",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_map_navigation__srv__GetWormhole_Response, y_from),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_from",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_map_navigation__srv__GetWormhole_Response, theta_from),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_map_navigation__srv__GetWormhole_Response, x_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_map_navigation__srv__GetWormhole_Response, y_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_map_navigation__srv__GetWormhole_Response, theta_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_map_navigation__srv__GetWormhole_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_map_navigation__srv__GetWormhole_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_message_members = {
  "multi_map_navigation__srv",  // message namespace
  "GetWormhole_Response",  // message name
  8,  // number of fields
  sizeof(multi_map_navigation__srv__GetWormhole_Response),
  multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_message_member_array,  // message members
  multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_message_type_support_handle = {
  0,
  &multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_map_navigation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_map_navigation, srv, GetWormhole_Response)() {
  if (!multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_message_type_support_handle.typesupport_identifier) {
    multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multi_map_navigation__srv__GetWormhole_Response__rosidl_typesupport_introspection_c__GetWormhole_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "multi_map_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "multi_map_navigation/srv/detail/get_wormhole__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers multi_map_navigation__srv__detail__get_wormhole__rosidl_typesupport_introspection_c__GetWormhole_service_members = {
  "multi_map_navigation__srv",  // service namespace
  "GetWormhole",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // multi_map_navigation__srv__detail__get_wormhole__rosidl_typesupport_introspection_c__GetWormhole_Request_message_type_support_handle,
  NULL  // response message
  // multi_map_navigation__srv__detail__get_wormhole__rosidl_typesupport_introspection_c__GetWormhole_Response_message_type_support_handle
};

static rosidl_service_type_support_t multi_map_navigation__srv__detail__get_wormhole__rosidl_typesupport_introspection_c__GetWormhole_service_type_support_handle = {
  0,
  &multi_map_navigation__srv__detail__get_wormhole__rosidl_typesupport_introspection_c__GetWormhole_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_map_navigation, srv, GetWormhole_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_map_navigation, srv, GetWormhole_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_map_navigation
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_map_navigation, srv, GetWormhole)() {
  if (!multi_map_navigation__srv__detail__get_wormhole__rosidl_typesupport_introspection_c__GetWormhole_service_type_support_handle.typesupport_identifier) {
    multi_map_navigation__srv__detail__get_wormhole__rosidl_typesupport_introspection_c__GetWormhole_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)multi_map_navigation__srv__detail__get_wormhole__rosidl_typesupport_introspection_c__GetWormhole_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_map_navigation, srv, GetWormhole_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_map_navigation, srv, GetWormhole_Response)()->data;
  }

  return &multi_map_navigation__srv__detail__get_wormhole__rosidl_typesupport_introspection_c__GetWormhole_service_type_support_handle;
}

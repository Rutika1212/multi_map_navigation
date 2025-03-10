// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multi_map_navigation:action/Navigate.idl
// generated code does not contain a copyright notice

#ifndef MULTI_MAP_NAVIGATION__ACTION__DETAIL__NAVIGATE__STRUCT_H_
#define MULTI_MAP_NAVIGATION__ACTION__DETAIL__NAVIGATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_map'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Navigate in the package multi_map_navigation.
typedef struct multi_map_navigation__action__Navigate_Goal
{
  double x;
  double y;
  double theta;
  rosidl_runtime_c__String target_map;
} multi_map_navigation__action__Navigate_Goal;

// Struct for a sequence of multi_map_navigation__action__Navigate_Goal.
typedef struct multi_map_navigation__action__Navigate_Goal__Sequence
{
  multi_map_navigation__action__Navigate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_map_navigation__action__Navigate_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Navigate in the package multi_map_navigation.
typedef struct multi_map_navigation__action__Navigate_Result
{
  /// Result (response)
  bool success;
  rosidl_runtime_c__String message;
} multi_map_navigation__action__Navigate_Result;

// Struct for a sequence of multi_map_navigation__action__Navigate_Result.
typedef struct multi_map_navigation__action__Navigate_Result__Sequence
{
  multi_map_navigation__action__Navigate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_map_navigation__action__Navigate_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Navigate in the package multi_map_navigation.
typedef struct multi_map_navigation__action__Navigate_Feedback
{
  /// Feedback (status updates)
  double current_x;
  double current_y;
  double current_theta;
} multi_map_navigation__action__Navigate_Feedback;

// Struct for a sequence of multi_map_navigation__action__Navigate_Feedback.
typedef struct multi_map_navigation__action__Navigate_Feedback__Sequence
{
  multi_map_navigation__action__Navigate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_map_navigation__action__Navigate_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "multi_map_navigation/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package multi_map_navigation.
typedef struct multi_map_navigation__action__Navigate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  multi_map_navigation__action__Navigate_Goal goal;
} multi_map_navigation__action__Navigate_SendGoal_Request;

// Struct for a sequence of multi_map_navigation__action__Navigate_SendGoal_Request.
typedef struct multi_map_navigation__action__Navigate_SendGoal_Request__Sequence
{
  multi_map_navigation__action__Navigate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_map_navigation__action__Navigate_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Navigate in the package multi_map_navigation.
typedef struct multi_map_navigation__action__Navigate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} multi_map_navigation__action__Navigate_SendGoal_Response;

// Struct for a sequence of multi_map_navigation__action__Navigate_SendGoal_Response.
typedef struct multi_map_navigation__action__Navigate_SendGoal_Response__Sequence
{
  multi_map_navigation__action__Navigate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_map_navigation__action__Navigate_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Navigate in the package multi_map_navigation.
typedef struct multi_map_navigation__action__Navigate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} multi_map_navigation__action__Navigate_GetResult_Request;

// Struct for a sequence of multi_map_navigation__action__Navigate_GetResult_Request.
typedef struct multi_map_navigation__action__Navigate_GetResult_Request__Sequence
{
  multi_map_navigation__action__Navigate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_map_navigation__action__Navigate_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "multi_map_navigation/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package multi_map_navigation.
typedef struct multi_map_navigation__action__Navigate_GetResult_Response
{
  int8_t status;
  multi_map_navigation__action__Navigate_Result result;
} multi_map_navigation__action__Navigate_GetResult_Response;

// Struct for a sequence of multi_map_navigation__action__Navigate_GetResult_Response.
typedef struct multi_map_navigation__action__Navigate_GetResult_Response__Sequence
{
  multi_map_navigation__action__Navigate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_map_navigation__action__Navigate_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "multi_map_navigation/action/detail/navigate__struct.h"

/// Struct defined in action/Navigate in the package multi_map_navigation.
typedef struct multi_map_navigation__action__Navigate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  multi_map_navigation__action__Navigate_Feedback feedback;
} multi_map_navigation__action__Navigate_FeedbackMessage;

// Struct for a sequence of multi_map_navigation__action__Navigate_FeedbackMessage.
typedef struct multi_map_navigation__action__Navigate_FeedbackMessage__Sequence
{
  multi_map_navigation__action__Navigate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_map_navigation__action__Navigate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTI_MAP_NAVIGATION__ACTION__DETAIL__NAVIGATE__STRUCT_H_

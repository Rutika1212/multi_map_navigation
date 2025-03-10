// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multi_map_navigation:action/Navigate.idl
// generated code does not contain a copyright notice

#ifndef MULTI_MAP_NAVIGATION__ACTION__DETAIL__NAVIGATE__STRUCT_HPP_
#define MULTI_MAP_NAVIGATION__ACTION__DETAIL__NAVIGATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__multi_map_navigation__action__Navigate_Goal __attribute__((deprecated))
#else
# define DEPRECATED__multi_map_navigation__action__Navigate_Goal __declspec(deprecated)
#endif

namespace multi_map_navigation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_Goal_
{
  using Type = Navigate_Goal_<ContainerAllocator>;

  explicit Navigate_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
      this->target_map = "";
    }
  }

  explicit Navigate_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_map(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
      this->target_map = "";
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _theta_type =
    double;
  _theta_type theta;
  using _target_map_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_map_type target_map;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__target_map(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_map_navigation::action::Navigate_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_map_navigation::action::Navigate_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_map_navigation__action__Navigate_Goal
    std::shared_ptr<multi_map_navigation::action::Navigate_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_map_navigation__action__Navigate_Goal
    std::shared_ptr<multi_map_navigation::action::Navigate_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_Goal_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->target_map != other.target_map) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_Goal_

// alias to use template instance with default allocator
using Navigate_Goal =
  multi_map_navigation::action::Navigate_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace multi_map_navigation


#ifndef _WIN32
# define DEPRECATED__multi_map_navigation__action__Navigate_Result __attribute__((deprecated))
#else
# define DEPRECATED__multi_map_navigation__action__Navigate_Result __declspec(deprecated)
#endif

namespace multi_map_navigation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_Result_
{
  using Type = Navigate_Result_<ContainerAllocator>;

  explicit Navigate_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Navigate_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_map_navigation::action::Navigate_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_map_navigation::action::Navigate_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_map_navigation__action__Navigate_Result
    std::shared_ptr<multi_map_navigation::action::Navigate_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_map_navigation__action__Navigate_Result
    std::shared_ptr<multi_map_navigation::action::Navigate_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_Result_

// alias to use template instance with default allocator
using Navigate_Result =
  multi_map_navigation::action::Navigate_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace multi_map_navigation


#ifndef _WIN32
# define DEPRECATED__multi_map_navigation__action__Navigate_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__multi_map_navigation__action__Navigate_Feedback __declspec(deprecated)
#endif

namespace multi_map_navigation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_Feedback_
{
  using Type = Navigate_Feedback_<ContainerAllocator>;

  explicit Navigate_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0;
      this->current_y = 0.0;
      this->current_theta = 0.0;
    }
  }

  explicit Navigate_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0;
      this->current_y = 0.0;
      this->current_theta = 0.0;
    }
  }

  // field types and members
  using _current_x_type =
    double;
  _current_x_type current_x;
  using _current_y_type =
    double;
  _current_y_type current_y;
  using _current_theta_type =
    double;
  _current_theta_type current_theta;

  // setters for named parameter idiom
  Type & set__current_x(
    const double & _arg)
  {
    this->current_x = _arg;
    return *this;
  }
  Type & set__current_y(
    const double & _arg)
  {
    this->current_y = _arg;
    return *this;
  }
  Type & set__current_theta(
    const double & _arg)
  {
    this->current_theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_map_navigation__action__Navigate_Feedback
    std::shared_ptr<multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_map_navigation__action__Navigate_Feedback
    std::shared_ptr<multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_Feedback_ & other) const
  {
    if (this->current_x != other.current_x) {
      return false;
    }
    if (this->current_y != other.current_y) {
      return false;
    }
    if (this->current_theta != other.current_theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_Feedback_

// alias to use template instance with default allocator
using Navigate_Feedback =
  multi_map_navigation::action::Navigate_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace multi_map_navigation


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "multi_map_navigation/action/detail/navigate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multi_map_navigation__action__Navigate_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__multi_map_navigation__action__Navigate_SendGoal_Request __declspec(deprecated)
#endif

namespace multi_map_navigation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_SendGoal_Request_
{
  using Type = Navigate_SendGoal_Request_<ContainerAllocator>;

  explicit Navigate_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Navigate_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    multi_map_navigation::action::Navigate_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const multi_map_navigation::action::Navigate_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_map_navigation__action__Navigate_SendGoal_Request
    std::shared_ptr<multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_map_navigation__action__Navigate_SendGoal_Request
    std::shared_ptr<multi_map_navigation::action::Navigate_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_SendGoal_Request_

// alias to use template instance with default allocator
using Navigate_SendGoal_Request =
  multi_map_navigation::action::Navigate_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace multi_map_navigation


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multi_map_navigation__action__Navigate_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__multi_map_navigation__action__Navigate_SendGoal_Response __declspec(deprecated)
#endif

namespace multi_map_navigation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_SendGoal_Response_
{
  using Type = Navigate_SendGoal_Response_<ContainerAllocator>;

  explicit Navigate_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Navigate_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_map_navigation__action__Navigate_SendGoal_Response
    std::shared_ptr<multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_map_navigation__action__Navigate_SendGoal_Response
    std::shared_ptr<multi_map_navigation::action::Navigate_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_SendGoal_Response_

// alias to use template instance with default allocator
using Navigate_SendGoal_Response =
  multi_map_navigation::action::Navigate_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace multi_map_navigation

namespace multi_map_navigation
{

namespace action
{

struct Navigate_SendGoal
{
  using Request = multi_map_navigation::action::Navigate_SendGoal_Request;
  using Response = multi_map_navigation::action::Navigate_SendGoal_Response;
};

}  // namespace action

}  // namespace multi_map_navigation


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multi_map_navigation__action__Navigate_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__multi_map_navigation__action__Navigate_GetResult_Request __declspec(deprecated)
#endif

namespace multi_map_navigation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_GetResult_Request_
{
  using Type = Navigate_GetResult_Request_<ContainerAllocator>;

  explicit Navigate_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Navigate_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_map_navigation__action__Navigate_GetResult_Request
    std::shared_ptr<multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_map_navigation__action__Navigate_GetResult_Request
    std::shared_ptr<multi_map_navigation::action::Navigate_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_GetResult_Request_

// alias to use template instance with default allocator
using Navigate_GetResult_Request =
  multi_map_navigation::action::Navigate_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace multi_map_navigation


// Include directives for member types
// Member 'result'
// already included above
// #include "multi_map_navigation/action/detail/navigate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multi_map_navigation__action__Navigate_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__multi_map_navigation__action__Navigate_GetResult_Response __declspec(deprecated)
#endif

namespace multi_map_navigation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_GetResult_Response_
{
  using Type = Navigate_GetResult_Response_<ContainerAllocator>;

  explicit Navigate_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Navigate_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    multi_map_navigation::action::Navigate_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const multi_map_navigation::action::Navigate_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_map_navigation__action__Navigate_GetResult_Response
    std::shared_ptr<multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_map_navigation__action__Navigate_GetResult_Response
    std::shared_ptr<multi_map_navigation::action::Navigate_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_GetResult_Response_

// alias to use template instance with default allocator
using Navigate_GetResult_Response =
  multi_map_navigation::action::Navigate_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace multi_map_navigation

namespace multi_map_navigation
{

namespace action
{

struct Navigate_GetResult
{
  using Request = multi_map_navigation::action::Navigate_GetResult_Request;
  using Response = multi_map_navigation::action::Navigate_GetResult_Response;
};

}  // namespace action

}  // namespace multi_map_navigation


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "multi_map_navigation/action/detail/navigate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multi_map_navigation__action__Navigate_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__multi_map_navigation__action__Navigate_FeedbackMessage __declspec(deprecated)
#endif

namespace multi_map_navigation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigate_FeedbackMessage_
{
  using Type = Navigate_FeedbackMessage_<ContainerAllocator>;

  explicit Navigate_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Navigate_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const multi_map_navigation::action::Navigate_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_map_navigation__action__Navigate_FeedbackMessage
    std::shared_ptr<multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_map_navigation__action__Navigate_FeedbackMessage
    std::shared_ptr<multi_map_navigation::action::Navigate_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigate_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigate_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigate_FeedbackMessage_

// alias to use template instance with default allocator
using Navigate_FeedbackMessage =
  multi_map_navigation::action::Navigate_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace multi_map_navigation

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace multi_map_navigation
{

namespace action
{

struct Navigate
{
  /// The goal message defined in the action definition.
  using Goal = multi_map_navigation::action::Navigate_Goal;
  /// The result message defined in the action definition.
  using Result = multi_map_navigation::action::Navigate_Result;
  /// The feedback message defined in the action definition.
  using Feedback = multi_map_navigation::action::Navigate_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = multi_map_navigation::action::Navigate_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = multi_map_navigation::action::Navigate_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = multi_map_navigation::action::Navigate_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Navigate Navigate;

}  // namespace action

}  // namespace multi_map_navigation

#endif  // MULTI_MAP_NAVIGATION__ACTION__DETAIL__NAVIGATE__STRUCT_HPP_

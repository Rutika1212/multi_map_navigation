// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multi_map_navigation:srv/GetWormhole.idl
// generated code does not contain a copyright notice

#ifndef MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__STRUCT_HPP_
#define MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__multi_map_navigation__srv__GetWormhole_Request __attribute__((deprecated))
#else
# define DEPRECATED__multi_map_navigation__srv__GetWormhole_Request __declspec(deprecated)
#endif

namespace multi_map_navigation
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWormhole_Request_
{
  using Type = GetWormhole_Request_<ContainerAllocator>;

  explicit GetWormhole_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_from = "";
      this->map_to = "";
    }
  }

  explicit GetWormhole_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_from(_alloc),
    map_to(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_from = "";
      this->map_to = "";
    }
  }

  // field types and members
  using _map_from_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_from_type map_from;
  using _map_to_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_to_type map_to;

  // setters for named parameter idiom
  Type & set__map_from(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_from = _arg;
    return *this;
  }
  Type & set__map_to(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_to = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_map_navigation__srv__GetWormhole_Request
    std::shared_ptr<multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_map_navigation__srv__GetWormhole_Request
    std::shared_ptr<multi_map_navigation::srv::GetWormhole_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWormhole_Request_ & other) const
  {
    if (this->map_from != other.map_from) {
      return false;
    }
    if (this->map_to != other.map_to) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWormhole_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWormhole_Request_

// alias to use template instance with default allocator
using GetWormhole_Request =
  multi_map_navigation::srv::GetWormhole_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace multi_map_navigation


#ifndef _WIN32
# define DEPRECATED__multi_map_navigation__srv__GetWormhole_Response __attribute__((deprecated))
#else
# define DEPRECATED__multi_map_navigation__srv__GetWormhole_Response __declspec(deprecated)
#endif

namespace multi_map_navigation
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWormhole_Response_
{
  using Type = GetWormhole_Response_<ContainerAllocator>;

  explicit GetWormhole_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_from = 0.0;
      this->y_from = 0.0;
      this->theta_from = 0.0;
      this->x_to = 0.0;
      this->y_to = 0.0;
      this->theta_to = 0.0;
      this->success = false;
      this->message = "";
    }
  }

  explicit GetWormhole_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_from = 0.0;
      this->y_from = 0.0;
      this->theta_from = 0.0;
      this->x_to = 0.0;
      this->y_to = 0.0;
      this->theta_to = 0.0;
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _x_from_type =
    double;
  _x_from_type x_from;
  using _y_from_type =
    double;
  _y_from_type y_from;
  using _theta_from_type =
    double;
  _theta_from_type theta_from;
  using _x_to_type =
    double;
  _x_to_type x_to;
  using _y_to_type =
    double;
  _y_to_type y_to;
  using _theta_to_type =
    double;
  _theta_to_type theta_to;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__x_from(
    const double & _arg)
  {
    this->x_from = _arg;
    return *this;
  }
  Type & set__y_from(
    const double & _arg)
  {
    this->y_from = _arg;
    return *this;
  }
  Type & set__theta_from(
    const double & _arg)
  {
    this->theta_from = _arg;
    return *this;
  }
  Type & set__x_to(
    const double & _arg)
  {
    this->x_to = _arg;
    return *this;
  }
  Type & set__y_to(
    const double & _arg)
  {
    this->y_to = _arg;
    return *this;
  }
  Type & set__theta_to(
    const double & _arg)
  {
    this->theta_to = _arg;
    return *this;
  }
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
    multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_map_navigation__srv__GetWormhole_Response
    std::shared_ptr<multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_map_navigation__srv__GetWormhole_Response
    std::shared_ptr<multi_map_navigation::srv::GetWormhole_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWormhole_Response_ & other) const
  {
    if (this->x_from != other.x_from) {
      return false;
    }
    if (this->y_from != other.y_from) {
      return false;
    }
    if (this->theta_from != other.theta_from) {
      return false;
    }
    if (this->x_to != other.x_to) {
      return false;
    }
    if (this->y_to != other.y_to) {
      return false;
    }
    if (this->theta_to != other.theta_to) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWormhole_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWormhole_Response_

// alias to use template instance with default allocator
using GetWormhole_Response =
  multi_map_navigation::srv::GetWormhole_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace multi_map_navigation

namespace multi_map_navigation
{

namespace srv
{

struct GetWormhole
{
  using Request = multi_map_navigation::srv::GetWormhole_Request;
  using Response = multi_map_navigation::srv::GetWormhole_Response;
};

}  // namespace srv

}  // namespace multi_map_navigation

#endif  // MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__STRUCT_HPP_

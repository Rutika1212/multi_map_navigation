// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multi_map_navigation:srv/GetWormhole.idl
// generated code does not contain a copyright notice

#ifndef MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__BUILDER_HPP_
#define MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multi_map_navigation/srv/detail/get_wormhole__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multi_map_navigation
{

namespace srv
{

namespace builder
{

class Init_GetWormhole_Request_map_to
{
public:
  explicit Init_GetWormhole_Request_map_to(::multi_map_navigation::srv::GetWormhole_Request & msg)
  : msg_(msg)
  {}
  ::multi_map_navigation::srv::GetWormhole_Request map_to(::multi_map_navigation::srv::GetWormhole_Request::_map_to_type arg)
  {
    msg_.map_to = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_map_navigation::srv::GetWormhole_Request msg_;
};

class Init_GetWormhole_Request_map_from
{
public:
  Init_GetWormhole_Request_map_from()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetWormhole_Request_map_to map_from(::multi_map_navigation::srv::GetWormhole_Request::_map_from_type arg)
  {
    msg_.map_from = std::move(arg);
    return Init_GetWormhole_Request_map_to(msg_);
  }

private:
  ::multi_map_navigation::srv::GetWormhole_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_map_navigation::srv::GetWormhole_Request>()
{
  return multi_map_navigation::srv::builder::Init_GetWormhole_Request_map_from();
}

}  // namespace multi_map_navigation


namespace multi_map_navigation
{

namespace srv
{

namespace builder
{

class Init_GetWormhole_Response_message
{
public:
  explicit Init_GetWormhole_Response_message(::multi_map_navigation::srv::GetWormhole_Response & msg)
  : msg_(msg)
  {}
  ::multi_map_navigation::srv::GetWormhole_Response message(::multi_map_navigation::srv::GetWormhole_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_map_navigation::srv::GetWormhole_Response msg_;
};

class Init_GetWormhole_Response_success
{
public:
  explicit Init_GetWormhole_Response_success(::multi_map_navigation::srv::GetWormhole_Response & msg)
  : msg_(msg)
  {}
  Init_GetWormhole_Response_message success(::multi_map_navigation::srv::GetWormhole_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetWormhole_Response_message(msg_);
  }

private:
  ::multi_map_navigation::srv::GetWormhole_Response msg_;
};

class Init_GetWormhole_Response_theta_to
{
public:
  explicit Init_GetWormhole_Response_theta_to(::multi_map_navigation::srv::GetWormhole_Response & msg)
  : msg_(msg)
  {}
  Init_GetWormhole_Response_success theta_to(::multi_map_navigation::srv::GetWormhole_Response::_theta_to_type arg)
  {
    msg_.theta_to = std::move(arg);
    return Init_GetWormhole_Response_success(msg_);
  }

private:
  ::multi_map_navigation::srv::GetWormhole_Response msg_;
};

class Init_GetWormhole_Response_y_to
{
public:
  explicit Init_GetWormhole_Response_y_to(::multi_map_navigation::srv::GetWormhole_Response & msg)
  : msg_(msg)
  {}
  Init_GetWormhole_Response_theta_to y_to(::multi_map_navigation::srv::GetWormhole_Response::_y_to_type arg)
  {
    msg_.y_to = std::move(arg);
    return Init_GetWormhole_Response_theta_to(msg_);
  }

private:
  ::multi_map_navigation::srv::GetWormhole_Response msg_;
};

class Init_GetWormhole_Response_x_to
{
public:
  explicit Init_GetWormhole_Response_x_to(::multi_map_navigation::srv::GetWormhole_Response & msg)
  : msg_(msg)
  {}
  Init_GetWormhole_Response_y_to x_to(::multi_map_navigation::srv::GetWormhole_Response::_x_to_type arg)
  {
    msg_.x_to = std::move(arg);
    return Init_GetWormhole_Response_y_to(msg_);
  }

private:
  ::multi_map_navigation::srv::GetWormhole_Response msg_;
};

class Init_GetWormhole_Response_theta_from
{
public:
  explicit Init_GetWormhole_Response_theta_from(::multi_map_navigation::srv::GetWormhole_Response & msg)
  : msg_(msg)
  {}
  Init_GetWormhole_Response_x_to theta_from(::multi_map_navigation::srv::GetWormhole_Response::_theta_from_type arg)
  {
    msg_.theta_from = std::move(arg);
    return Init_GetWormhole_Response_x_to(msg_);
  }

private:
  ::multi_map_navigation::srv::GetWormhole_Response msg_;
};

class Init_GetWormhole_Response_y_from
{
public:
  explicit Init_GetWormhole_Response_y_from(::multi_map_navigation::srv::GetWormhole_Response & msg)
  : msg_(msg)
  {}
  Init_GetWormhole_Response_theta_from y_from(::multi_map_navigation::srv::GetWormhole_Response::_y_from_type arg)
  {
    msg_.y_from = std::move(arg);
    return Init_GetWormhole_Response_theta_from(msg_);
  }

private:
  ::multi_map_navigation::srv::GetWormhole_Response msg_;
};

class Init_GetWormhole_Response_x_from
{
public:
  Init_GetWormhole_Response_x_from()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetWormhole_Response_y_from x_from(::multi_map_navigation::srv::GetWormhole_Response::_x_from_type arg)
  {
    msg_.x_from = std::move(arg);
    return Init_GetWormhole_Response_y_from(msg_);
  }

private:
  ::multi_map_navigation::srv::GetWormhole_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_map_navigation::srv::GetWormhole_Response>()
{
  return multi_map_navigation::srv::builder::Init_GetWormhole_Response_x_from();
}

}  // namespace multi_map_navigation

#endif  // MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__BUILDER_HPP_

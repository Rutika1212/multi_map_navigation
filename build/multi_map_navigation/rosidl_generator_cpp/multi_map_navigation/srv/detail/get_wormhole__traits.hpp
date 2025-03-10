// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multi_map_navigation:srv/GetWormhole.idl
// generated code does not contain a copyright notice

#ifndef MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__TRAITS_HPP_
#define MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multi_map_navigation/srv/detail/get_wormhole__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace multi_map_navigation
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWormhole_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_from
  {
    out << "map_from: ";
    rosidl_generator_traits::value_to_yaml(msg.map_from, out);
    out << ", ";
  }

  // member: map_to
  {
    out << "map_to: ";
    rosidl_generator_traits::value_to_yaml(msg.map_to, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWormhole_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_from: ";
    rosidl_generator_traits::value_to_yaml(msg.map_from, out);
    out << "\n";
  }

  // member: map_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_to: ";
    rosidl_generator_traits::value_to_yaml(msg.map_to, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWormhole_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace multi_map_navigation

namespace rosidl_generator_traits
{

[[deprecated("use multi_map_navigation::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_map_navigation::srv::GetWormhole_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_map_navigation::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_map_navigation::srv::to_yaml() instead")]]
inline std::string to_yaml(const multi_map_navigation::srv::GetWormhole_Request & msg)
{
  return multi_map_navigation::srv::to_yaml(msg);
}

template<>
inline const char * data_type<multi_map_navigation::srv::GetWormhole_Request>()
{
  return "multi_map_navigation::srv::GetWormhole_Request";
}

template<>
inline const char * name<multi_map_navigation::srv::GetWormhole_Request>()
{
  return "multi_map_navigation/srv/GetWormhole_Request";
}

template<>
struct has_fixed_size<multi_map_navigation::srv::GetWormhole_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multi_map_navigation::srv::GetWormhole_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multi_map_navigation::srv::GetWormhole_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace multi_map_navigation
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWormhole_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_from
  {
    out << "x_from: ";
    rosidl_generator_traits::value_to_yaml(msg.x_from, out);
    out << ", ";
  }

  // member: y_from
  {
    out << "y_from: ";
    rosidl_generator_traits::value_to_yaml(msg.y_from, out);
    out << ", ";
  }

  // member: theta_from
  {
    out << "theta_from: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_from, out);
    out << ", ";
  }

  // member: x_to
  {
    out << "x_to: ";
    rosidl_generator_traits::value_to_yaml(msg.x_to, out);
    out << ", ";
  }

  // member: y_to
  {
    out << "y_to: ";
    rosidl_generator_traits::value_to_yaml(msg.y_to, out);
    out << ", ";
  }

  // member: theta_to
  {
    out << "theta_to: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_to, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWormhole_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_from: ";
    rosidl_generator_traits::value_to_yaml(msg.x_from, out);
    out << "\n";
  }

  // member: y_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_from: ";
    rosidl_generator_traits::value_to_yaml(msg.y_from, out);
    out << "\n";
  }

  // member: theta_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_from: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_from, out);
    out << "\n";
  }

  // member: x_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_to: ";
    rosidl_generator_traits::value_to_yaml(msg.x_to, out);
    out << "\n";
  }

  // member: y_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_to: ";
    rosidl_generator_traits::value_to_yaml(msg.y_to, out);
    out << "\n";
  }

  // member: theta_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_to: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_to, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWormhole_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace multi_map_navigation

namespace rosidl_generator_traits
{

[[deprecated("use multi_map_navigation::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_map_navigation::srv::GetWormhole_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_map_navigation::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_map_navigation::srv::to_yaml() instead")]]
inline std::string to_yaml(const multi_map_navigation::srv::GetWormhole_Response & msg)
{
  return multi_map_navigation::srv::to_yaml(msg);
}

template<>
inline const char * data_type<multi_map_navigation::srv::GetWormhole_Response>()
{
  return "multi_map_navigation::srv::GetWormhole_Response";
}

template<>
inline const char * name<multi_map_navigation::srv::GetWormhole_Response>()
{
  return "multi_map_navigation/srv/GetWormhole_Response";
}

template<>
struct has_fixed_size<multi_map_navigation::srv::GetWormhole_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multi_map_navigation::srv::GetWormhole_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multi_map_navigation::srv::GetWormhole_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<multi_map_navigation::srv::GetWormhole>()
{
  return "multi_map_navigation::srv::GetWormhole";
}

template<>
inline const char * name<multi_map_navigation::srv::GetWormhole>()
{
  return "multi_map_navigation/srv/GetWormhole";
}

template<>
struct has_fixed_size<multi_map_navigation::srv::GetWormhole>
  : std::integral_constant<
    bool,
    has_fixed_size<multi_map_navigation::srv::GetWormhole_Request>::value &&
    has_fixed_size<multi_map_navigation::srv::GetWormhole_Response>::value
  >
{
};

template<>
struct has_bounded_size<multi_map_navigation::srv::GetWormhole>
  : std::integral_constant<
    bool,
    has_bounded_size<multi_map_navigation::srv::GetWormhole_Request>::value &&
    has_bounded_size<multi_map_navigation::srv::GetWormhole_Response>::value
  >
{
};

template<>
struct is_service<multi_map_navigation::srv::GetWormhole>
  : std::true_type
{
};

template<>
struct is_service_request<multi_map_navigation::srv::GetWormhole_Request>
  : std::true_type
{
};

template<>
struct is_service_response<multi_map_navigation::srv::GetWormhole_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MULTI_MAP_NAVIGATION__SRV__DETAIL__GET_WORMHOLE__TRAITS_HPP_

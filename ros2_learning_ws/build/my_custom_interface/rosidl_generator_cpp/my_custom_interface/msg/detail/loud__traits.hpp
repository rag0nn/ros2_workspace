// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_interface:msg/Loud.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__TRAITS_HPP_
#define MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_interface/msg/detail/loud__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Loud & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: channel
  {
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Loud & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Loud & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_interface::msg::Loud & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::msg::Loud & msg)
{
  return my_custom_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::msg::Loud>()
{
  return "my_custom_interface::msg::Loud";
}

template<>
inline const char * name<my_custom_interface::msg::Loud>()
{
  return "my_custom_interface/msg/Loud";
}

template<>
struct has_fixed_size<my_custom_interface::msg::Loud>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interface::msg::Loud>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_interface::msg::Loud>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__TRAITS_HPP_

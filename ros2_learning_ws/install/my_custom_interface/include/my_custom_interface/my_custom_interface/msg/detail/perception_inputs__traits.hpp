// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_interface:msg/PerceptionInputs.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__TRAITS_HPP_
#define MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_interface/msg/detail/perception_inputs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceptionInputs & msg,
  std::ostream & out)
{
  out << "{";
  // member: inputs
  {
    if (msg.inputs.size() == 0) {
      out << "inputs: []";
    } else {
      out << "inputs: [";
      size_t pending_items = msg.inputs.size();
      for (auto item : msg.inputs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: activation
  {
    out << "activation: ";
    rosidl_generator_traits::value_to_yaml(msg.activation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerceptionInputs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: inputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.inputs.size() == 0) {
      out << "inputs: []\n";
    } else {
      out << "inputs:\n";
      for (auto item : msg.inputs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: activation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activation: ";
    rosidl_generator_traits::value_to_yaml(msg.activation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceptionInputs & msg, bool use_flow_style = false)
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
  const my_custom_interface::msg::PerceptionInputs & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::msg::PerceptionInputs & msg)
{
  return my_custom_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::msg::PerceptionInputs>()
{
  return "my_custom_interface::msg::PerceptionInputs";
}

template<>
inline const char * name<my_custom_interface::msg::PerceptionInputs>()
{
  return "my_custom_interface/msg/PerceptionInputs";
}

template<>
struct has_fixed_size<my_custom_interface::msg::PerceptionInputs>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interface::msg::PerceptionInputs>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_interface::msg::PerceptionInputs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__TRAITS_HPP_

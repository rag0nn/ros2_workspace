// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_interface:srv/PerceptronService.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__PERCEPTRON_SERVICE__TRAITS_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__PERCEPTRON_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_interface/srv/detail/perceptron_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const PerceptronService_Request & msg,
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
  const PerceptronService_Request & msg,
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

inline std::string to_yaml(const PerceptronService_Request & msg, bool use_flow_style = false)
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

}  // namespace my_custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_interface::srv::PerceptronService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::srv::PerceptronService_Request & msg)
{
  return my_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::srv::PerceptronService_Request>()
{
  return "my_custom_interface::srv::PerceptronService_Request";
}

template<>
inline const char * name<my_custom_interface::srv::PerceptronService_Request>()
{
  return "my_custom_interface/srv/PerceptronService_Request";
}

template<>
struct has_fixed_size<my_custom_interface::srv::PerceptronService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interface::srv::PerceptronService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_interface::srv::PerceptronService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const PerceptronService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerceptronService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceptronService_Response & msg, bool use_flow_style = false)
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

}  // namespace my_custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_interface::srv::PerceptronService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interface::srv::PerceptronService_Response & msg)
{
  return my_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interface::srv::PerceptronService_Response>()
{
  return "my_custom_interface::srv::PerceptronService_Response";
}

template<>
inline const char * name<my_custom_interface::srv::PerceptronService_Response>()
{
  return "my_custom_interface/srv/PerceptronService_Response";
}

template<>
struct has_fixed_size<my_custom_interface::srv::PerceptronService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_custom_interface::srv::PerceptronService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_custom_interface::srv::PerceptronService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_custom_interface::srv::PerceptronService>()
{
  return "my_custom_interface::srv::PerceptronService";
}

template<>
inline const char * name<my_custom_interface::srv::PerceptronService>()
{
  return "my_custom_interface/srv/PerceptronService";
}

template<>
struct has_fixed_size<my_custom_interface::srv::PerceptronService>
  : std::integral_constant<
    bool,
    has_fixed_size<my_custom_interface::srv::PerceptronService_Request>::value &&
    has_fixed_size<my_custom_interface::srv::PerceptronService_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_custom_interface::srv::PerceptronService>
  : std::integral_constant<
    bool,
    has_bounded_size<my_custom_interface::srv::PerceptronService_Request>::value &&
    has_bounded_size<my_custom_interface::srv::PerceptronService_Response>::value
  >
{
};

template<>
struct is_service<my_custom_interface::srv::PerceptronService>
  : std::true_type
{
};

template<>
struct is_service_request<my_custom_interface::srv::PerceptronService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_custom_interface::srv::PerceptronService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__PERCEPTRON_SERVICE__TRAITS_HPP_

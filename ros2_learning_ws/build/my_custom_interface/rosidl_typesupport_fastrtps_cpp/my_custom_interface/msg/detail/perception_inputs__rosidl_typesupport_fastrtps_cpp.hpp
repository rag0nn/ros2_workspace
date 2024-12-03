// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from my_custom_interface:msg/PerceptionInputs.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "my_custom_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "my_custom_interface/msg/detail/perception_inputs__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace my_custom_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
cdr_serialize(
  const my_custom_interface::msg::PerceptionInputs & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_custom_interface::msg::PerceptionInputs & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
get_serialized_size(
  const my_custom_interface::msg::PerceptionInputs & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
max_serialized_size_PerceptionInputs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_custom_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_custom_interface, msg, PerceptionInputs)();

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

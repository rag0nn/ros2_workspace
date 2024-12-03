// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interface:msg/PerceptionInputs.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__BUILDER_HPP_
#define MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interface/msg/detail/perception_inputs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interface
{

namespace msg
{

namespace builder
{

class Init_PerceptionInputs_activation
{
public:
  explicit Init_PerceptionInputs_activation(::my_custom_interface::msg::PerceptionInputs & msg)
  : msg_(msg)
  {}
  ::my_custom_interface::msg::PerceptionInputs activation(::my_custom_interface::msg::PerceptionInputs::_activation_type arg)
  {
    msg_.activation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::msg::PerceptionInputs msg_;
};

class Init_PerceptionInputs_inputs
{
public:
  Init_PerceptionInputs_inputs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptionInputs_activation inputs(::my_custom_interface::msg::PerceptionInputs::_inputs_type arg)
  {
    msg_.inputs = std::move(arg);
    return Init_PerceptionInputs_activation(msg_);
  }

private:
  ::my_custom_interface::msg::PerceptionInputs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::msg::PerceptionInputs>()
{
  return my_custom_interface::msg::builder::Init_PerceptionInputs_inputs();
}

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__BUILDER_HPP_

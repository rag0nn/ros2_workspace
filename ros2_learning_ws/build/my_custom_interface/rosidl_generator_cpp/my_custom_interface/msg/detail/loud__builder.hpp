// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interface:msg/Loud.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__BUILDER_HPP_
#define MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interface/msg/detail/loud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interface
{

namespace msg
{

namespace builder
{

class Init_Loud_channel
{
public:
  explicit Init_Loud_channel(::my_custom_interface::msg::Loud & msg)
  : msg_(msg)
  {}
  ::my_custom_interface::msg::Loud channel(::my_custom_interface::msg::Loud::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::msg::Loud msg_;
};

class Init_Loud_height
{
public:
  explicit Init_Loud_height(::my_custom_interface::msg::Loud & msg)
  : msg_(msg)
  {}
  Init_Loud_channel height(::my_custom_interface::msg::Loud::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Loud_channel(msg_);
  }

private:
  ::my_custom_interface::msg::Loud msg_;
};

class Init_Loud_width
{
public:
  explicit Init_Loud_width(::my_custom_interface::msg::Loud & msg)
  : msg_(msg)
  {}
  Init_Loud_height width(::my_custom_interface::msg::Loud::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Loud_height(msg_);
  }

private:
  ::my_custom_interface::msg::Loud msg_;
};

class Init_Loud_data
{
public:
  Init_Loud_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Loud_width data(::my_custom_interface::msg::Loud::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Loud_width(msg_);
  }

private:
  ::my_custom_interface::msg::Loud msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::msg::Loud>()
{
  return my_custom_interface::msg::builder::Init_Loud_data();
}

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__BUILDER_HPP_

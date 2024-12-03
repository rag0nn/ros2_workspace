// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interface:srv/PerceptronService.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__SRV__DETAIL__PERCEPTRON_SERVICE__BUILDER_HPP_
#define MY_CUSTOM_INTERFACE__SRV__DETAIL__PERCEPTRON_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interface/srv/detail/perceptron_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_PerceptronService_Request_activation
{
public:
  explicit Init_PerceptronService_Request_activation(::my_custom_interface::srv::PerceptronService_Request & msg)
  : msg_(msg)
  {}
  ::my_custom_interface::srv::PerceptronService_Request activation(::my_custom_interface::srv::PerceptronService_Request::_activation_type arg)
  {
    msg_.activation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::PerceptronService_Request msg_;
};

class Init_PerceptronService_Request_inputs
{
public:
  Init_PerceptronService_Request_inputs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptronService_Request_activation inputs(::my_custom_interface::srv::PerceptronService_Request::_inputs_type arg)
  {
    msg_.inputs = std::move(arg);
    return Init_PerceptronService_Request_activation(msg_);
  }

private:
  ::my_custom_interface::srv::PerceptronService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::PerceptronService_Request>()
{
  return my_custom_interface::srv::builder::Init_PerceptronService_Request_inputs();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace srv
{

namespace builder
{

class Init_PerceptronService_Response_result
{
public:
  Init_PerceptronService_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interface::srv::PerceptronService_Response result(::my_custom_interface::srv::PerceptronService_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::srv::PerceptronService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::srv::PerceptronService_Response>()
{
  return my_custom_interface::srv::builder::Init_PerceptronService_Response_result();
}

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__SRV__DETAIL__PERCEPTRON_SERVICE__BUILDER_HPP_

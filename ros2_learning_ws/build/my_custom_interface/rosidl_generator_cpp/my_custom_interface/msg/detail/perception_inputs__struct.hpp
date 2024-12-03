// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_interface:msg/PerceptionInputs.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__STRUCT_HPP_
#define MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_interface__msg__PerceptionInputs __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__msg__PerceptionInputs __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerceptionInputs_
{
  using Type = PerceptionInputs_<ContainerAllocator>;

  explicit PerceptionInputs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->activation = "";
    }
  }

  explicit PerceptionInputs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : activation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->activation = "";
    }
  }

  // field types and members
  using _inputs_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _inputs_type inputs;
  using _activation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _activation_type activation;

  // setters for named parameter idiom
  Type & set__inputs(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->inputs = _arg;
    return *this;
  }
  Type & set__activation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->activation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::msg::PerceptionInputs_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::msg::PerceptionInputs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::msg::PerceptionInputs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::msg::PerceptionInputs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::msg::PerceptionInputs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::msg::PerceptionInputs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::msg::PerceptionInputs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::msg::PerceptionInputs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::msg::PerceptionInputs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::msg::PerceptionInputs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__msg__PerceptionInputs
    std::shared_ptr<my_custom_interface::msg::PerceptionInputs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__msg__PerceptionInputs
    std::shared_ptr<my_custom_interface::msg::PerceptionInputs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerceptionInputs_ & other) const
  {
    if (this->inputs != other.inputs) {
      return false;
    }
    if (this->activation != other.activation) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerceptionInputs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerceptionInputs_

// alias to use template instance with default allocator
using PerceptionInputs =
  my_custom_interface::msg::PerceptionInputs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__MSG__DETAIL__PERCEPTION_INPUTS__STRUCT_HPP_

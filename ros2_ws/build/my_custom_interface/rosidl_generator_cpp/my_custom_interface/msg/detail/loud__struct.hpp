// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_interface:msg/Loud.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__STRUCT_HPP_
#define MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_interface__msg__Loud __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__msg__Loud __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Loud_
{
  using Type = Loud_<ContainerAllocator>;

  explicit Loud_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0;
      this->height = 0;
      this->channel = 0;
    }
  }

  explicit Loud_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0;
      this->height = 0;
      this->channel = 0;
    }
  }

  // field types and members
  using _data_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _data_type data;
  using _width_type =
    int16_t;
  _width_type width;
  using _height_type =
    int16_t;
  _height_type height;
  using _channel_type =
    int16_t;
  _channel_type channel;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__width(
    const int16_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int16_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__channel(
    const int16_t & _arg)
  {
    this->channel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::msg::Loud_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::msg::Loud_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::msg::Loud_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::msg::Loud_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::msg::Loud_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::msg::Loud_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::msg::Loud_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::msg::Loud_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::msg::Loud_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::msg::Loud_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__msg__Loud
    std::shared_ptr<my_custom_interface::msg::Loud_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__msg__Loud
    std::shared_ptr<my_custom_interface::msg::Loud_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Loud_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->channel != other.channel) {
      return false;
    }
    return true;
  }
  bool operator!=(const Loud_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Loud_

// alias to use template instance with default allocator
using Loud =
  my_custom_interface::msg::Loud_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__MSG__DETAIL__LOUD__STRUCT_HPP_

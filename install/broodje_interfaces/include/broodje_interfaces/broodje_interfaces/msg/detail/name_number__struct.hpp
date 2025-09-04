// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from broodje_interfaces:msg/NameNumber.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "broodje_interfaces/msg/name_number.hpp"


#ifndef BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__STRUCT_HPP_
#define BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__broodje_interfaces__msg__NameNumber __attribute__((deprecated))
#else
# define DEPRECATED__broodje_interfaces__msg__NameNumber __declspec(deprecated)
#endif

namespace broodje_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NameNumber_
{
  using Type = NameNumber_<ContainerAllocator>;

  explicit NameNumber_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->number = 0l;
    }
  }

  explicit NameNumber_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->number = 0l;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _number_type =
    int32_t;
  _number_type number;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__number(
    const int32_t & _arg)
  {
    this->number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    broodje_interfaces::msg::NameNumber_<ContainerAllocator> *;
  using ConstRawPtr =
    const broodje_interfaces::msg::NameNumber_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<broodje_interfaces::msg::NameNumber_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<broodje_interfaces::msg::NameNumber_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      broodje_interfaces::msg::NameNumber_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<broodje_interfaces::msg::NameNumber_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      broodje_interfaces::msg::NameNumber_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<broodje_interfaces::msg::NameNumber_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<broodje_interfaces::msg::NameNumber_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<broodje_interfaces::msg::NameNumber_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__broodje_interfaces__msg__NameNumber
    std::shared_ptr<broodje_interfaces::msg::NameNumber_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__broodje_interfaces__msg__NameNumber
    std::shared_ptr<broodje_interfaces::msg::NameNumber_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NameNumber_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->number != other.number) {
      return false;
    }
    return true;
  }
  bool operator!=(const NameNumber_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NameNumber_

// alias to use template instance with default allocator
using NameNumber =
  broodje_interfaces::msg::NameNumber_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace broodje_interfaces

#endif  // BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from broodje_interfaces:msg/NameNumber.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "broodje_interfaces/msg/name_number.hpp"


#ifndef BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__BUILDER_HPP_
#define BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "broodje_interfaces/msg/detail/name_number__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace broodje_interfaces
{

namespace msg
{

namespace builder
{

class Init_NameNumber_number
{
public:
  explicit Init_NameNumber_number(::broodje_interfaces::msg::NameNumber & msg)
  : msg_(msg)
  {}
  ::broodje_interfaces::msg::NameNumber number(::broodje_interfaces::msg::NameNumber::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::broodje_interfaces::msg::NameNumber msg_;
};

class Init_NameNumber_name
{
public:
  Init_NameNumber_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NameNumber_number name(::broodje_interfaces::msg::NameNumber::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_NameNumber_number(msg_);
  }

private:
  ::broodje_interfaces::msg::NameNumber msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::broodje_interfaces::msg::NameNumber>()
{
  return broodje_interfaces::msg::builder::Init_NameNumber_name();
}

}  // namespace broodje_interfaces

#endif  // BROODJE_INTERFACES__MSG__DETAIL__NAME_NUMBER__BUILDER_HPP_

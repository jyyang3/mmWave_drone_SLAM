// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleMocapOdometry.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/vehicle_mocap_odometry__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VehicleMocapOdometry_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::VehicleMocapOdometry(_init);
}

void VehicleMocapOdometry_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::VehicleMocapOdometry *>(message_memory);
  typed_message->~VehicleMocapOdometry();
}

size_t size_function__VehicleMocapOdometry__position(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VehicleMocapOdometry__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleMocapOdometry__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__VehicleMocapOdometry__q(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__VehicleMocapOdometry__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleMocapOdometry__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__VehicleMocapOdometry__velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VehicleMocapOdometry__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleMocapOdometry__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__VehicleMocapOdometry__angular_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VehicleMocapOdometry__angular_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleMocapOdometry__angular_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__VehicleMocapOdometry__position_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VehicleMocapOdometry__position_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleMocapOdometry__position_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__VehicleMocapOdometry__orientation_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VehicleMocapOdometry__orientation_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleMocapOdometry__orientation_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__VehicleMocapOdometry__velocity_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VehicleMocapOdometry__velocity_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleMocapOdometry__velocity_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VehicleMocapOdometry_message_member_array[13] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, pose_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleMocapOdometry__position,  // size() function pointer
    get_const_function__VehicleMocapOdometry__position,  // get_const(index) function pointer
    get_function__VehicleMocapOdometry__position,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleMocapOdometry__q,  // size() function pointer
    get_const_function__VehicleMocapOdometry__q,  // get_const(index) function pointer
    get_function__VehicleMocapOdometry__q,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, velocity_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleMocapOdometry__velocity,  // size() function pointer
    get_const_function__VehicleMocapOdometry__velocity,  // get_const(index) function pointer
    get_function__VehicleMocapOdometry__velocity,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleMocapOdometry__angular_velocity,  // size() function pointer
    get_const_function__VehicleMocapOdometry__angular_velocity,  // get_const(index) function pointer
    get_function__VehicleMocapOdometry__angular_velocity,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, position_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleMocapOdometry__position_variance,  // size() function pointer
    get_const_function__VehicleMocapOdometry__position_variance,  // get_const(index) function pointer
    get_function__VehicleMocapOdometry__position_variance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, orientation_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleMocapOdometry__orientation_variance,  // size() function pointer
    get_const_function__VehicleMocapOdometry__orientation_variance,  // get_const(index) function pointer
    get_function__VehicleMocapOdometry__orientation_variance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, velocity_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleMocapOdometry__velocity_variance,  // size() function pointer
    get_const_function__VehicleMocapOdometry__velocity_variance,  // get_const(index) function pointer
    get_function__VehicleMocapOdometry__velocity_variance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reset_counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, reset_counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quality",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleMocapOdometry, quality),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VehicleMocapOdometry_message_members = {
  "px4_msgs::msg",  // message namespace
  "VehicleMocapOdometry",  // message name
  13,  // number of fields
  sizeof(px4_msgs::msg::VehicleMocapOdometry),
  VehicleMocapOdometry_message_member_array,  // message members
  VehicleMocapOdometry_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleMocapOdometry_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VehicleMocapOdometry_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VehicleMocapOdometry_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::VehicleMocapOdometry>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleMocapOdometry_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, VehicleMocapOdometry)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleMocapOdometry_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

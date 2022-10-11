// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleVisualOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_VISUAL_ODOMETRY__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_VISUAL_ODOMETRY__BUILDER_HPP_

#include "px4_msgs/msg/detail/vehicle_visual_odometry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleVisualOdometry_quality
{
public:
  explicit Init_VehicleVisualOdometry_quality(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleVisualOdometry quality(::px4_msgs::msg::VehicleVisualOdometry::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_reset_counter
{
public:
  explicit Init_VehicleVisualOdometry_reset_counter(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleVisualOdometry_quality reset_counter(::px4_msgs::msg::VehicleVisualOdometry::_reset_counter_type arg)
  {
    msg_.reset_counter = std::move(arg);
    return Init_VehicleVisualOdometry_quality(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_velocity_variance
{
public:
  explicit Init_VehicleVisualOdometry_velocity_variance(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleVisualOdometry_reset_counter velocity_variance(::px4_msgs::msg::VehicleVisualOdometry::_velocity_variance_type arg)
  {
    msg_.velocity_variance = std::move(arg);
    return Init_VehicleVisualOdometry_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_orientation_variance
{
public:
  explicit Init_VehicleVisualOdometry_orientation_variance(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleVisualOdometry_velocity_variance orientation_variance(::px4_msgs::msg::VehicleVisualOdometry::_orientation_variance_type arg)
  {
    msg_.orientation_variance = std::move(arg);
    return Init_VehicleVisualOdometry_velocity_variance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_position_variance
{
public:
  explicit Init_VehicleVisualOdometry_position_variance(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleVisualOdometry_orientation_variance position_variance(::px4_msgs::msg::VehicleVisualOdometry::_position_variance_type arg)
  {
    msg_.position_variance = std::move(arg);
    return Init_VehicleVisualOdometry_orientation_variance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_angular_velocity
{
public:
  explicit Init_VehicleVisualOdometry_angular_velocity(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleVisualOdometry_position_variance angular_velocity(::px4_msgs::msg::VehicleVisualOdometry::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_VehicleVisualOdometry_position_variance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_velocity
{
public:
  explicit Init_VehicleVisualOdometry_velocity(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleVisualOdometry_angular_velocity velocity(::px4_msgs::msg::VehicleVisualOdometry::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_VehicleVisualOdometry_angular_velocity(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_velocity_frame
{
public:
  explicit Init_VehicleVisualOdometry_velocity_frame(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleVisualOdometry_velocity velocity_frame(::px4_msgs::msg::VehicleVisualOdometry::_velocity_frame_type arg)
  {
    msg_.velocity_frame = std::move(arg);
    return Init_VehicleVisualOdometry_velocity(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_q
{
public:
  explicit Init_VehicleVisualOdometry_q(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleVisualOdometry_velocity_frame q(::px4_msgs::msg::VehicleVisualOdometry::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_VehicleVisualOdometry_velocity_frame(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_position
{
public:
  explicit Init_VehicleVisualOdometry_position(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleVisualOdometry_q position(::px4_msgs::msg::VehicleVisualOdometry::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_VehicleVisualOdometry_q(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_pose_frame
{
public:
  explicit Init_VehicleVisualOdometry_pose_frame(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleVisualOdometry_position pose_frame(::px4_msgs::msg::VehicleVisualOdometry::_pose_frame_type arg)
  {
    msg_.pose_frame = std::move(arg);
    return Init_VehicleVisualOdometry_position(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_timestamp_sample
{
public:
  explicit Init_VehicleVisualOdometry_timestamp_sample(::px4_msgs::msg::VehicleVisualOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleVisualOdometry_pose_frame timestamp_sample(::px4_msgs::msg::VehicleVisualOdometry::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleVisualOdometry_pose_frame(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

class Init_VehicleVisualOdometry_timestamp
{
public:
  Init_VehicleVisualOdometry_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleVisualOdometry_timestamp_sample timestamp(::px4_msgs::msg::VehicleVisualOdometry::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleVisualOdometry_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleVisualOdometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleVisualOdometry>()
{
  return px4_msgs::msg::builder::Init_VehicleVisualOdometry_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_VISUAL_ODOMETRY__BUILDER_HPP_

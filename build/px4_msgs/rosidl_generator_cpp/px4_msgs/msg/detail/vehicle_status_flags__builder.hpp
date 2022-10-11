// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__BUILDER_HPP_

#include "px4_msgs/msg/detail/vehicle_status_flags__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStatusFlags_battery_warning
{
public:
  explicit Init_VehicleStatusFlags_battery_warning(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleStatusFlags battery_warning(::px4_msgs::msg::VehicleStatusFlags::_battery_warning_type arg)
  {
    msg_.battery_warning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_battery_unhealthy
{
public:
  explicit Init_VehicleStatusFlags_battery_unhealthy(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_battery_warning battery_unhealthy(::px4_msgs::msg::VehicleStatusFlags::_battery_unhealthy_type arg)
  {
    msg_.battery_unhealthy = std::move(arg);
    return Init_VehicleStatusFlags_battery_warning(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_battery_low_remaining_time
{
public:
  explicit Init_VehicleStatusFlags_battery_low_remaining_time(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_battery_unhealthy battery_low_remaining_time(::px4_msgs::msg::VehicleStatusFlags::_battery_low_remaining_time_type arg)
  {
    msg_.battery_low_remaining_time = std::move(arg);
    return Init_VehicleStatusFlags_battery_unhealthy(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_vtol_transition_failure
{
public:
  explicit Init_VehicleStatusFlags_vtol_transition_failure(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_battery_low_remaining_time vtol_transition_failure(::px4_msgs::msg::VehicleStatusFlags::_vtol_transition_failure_type arg)
  {
    msg_.vtol_transition_failure = std::move(arg);
    return Init_VehicleStatusFlags_battery_low_remaining_time(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_rc_calibration_in_progress
{
public:
  explicit Init_VehicleStatusFlags_rc_calibration_in_progress(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_vtol_transition_failure rc_calibration_in_progress(::px4_msgs::msg::VehicleStatusFlags::_rc_calibration_in_progress_type arg)
  {
    msg_.rc_calibration_in_progress = std::move(arg);
    return Init_VehicleStatusFlags_vtol_transition_failure(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_rc_signal_found_once
{
public:
  explicit Init_VehicleStatusFlags_rc_signal_found_once(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_rc_calibration_in_progress rc_signal_found_once(::px4_msgs::msg::VehicleStatusFlags::_rc_signal_found_once_type arg)
  {
    msg_.rc_signal_found_once = std::move(arg);
    return Init_VehicleStatusFlags_rc_calibration_in_progress(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_offboard_control_signal_lost
{
public:
  explicit Init_VehicleStatusFlags_offboard_control_signal_lost(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_rc_signal_found_once offboard_control_signal_lost(::px4_msgs::msg::VehicleStatusFlags::_offboard_control_signal_lost_type arg)
  {
    msg_.offboard_control_signal_lost = std::move(arg);
    return Init_VehicleStatusFlags_rc_signal_found_once(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_home_position_valid
{
public:
  explicit Init_VehicleStatusFlags_home_position_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_offboard_control_signal_lost home_position_valid(::px4_msgs::msg::VehicleStatusFlags::_home_position_valid_type arg)
  {
    msg_.home_position_valid = std::move(arg);
    return Init_VehicleStatusFlags_offboard_control_signal_lost(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_gps_position_valid
{
public:
  explicit Init_VehicleStatusFlags_gps_position_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_home_position_valid gps_position_valid(::px4_msgs::msg::VehicleStatusFlags::_gps_position_valid_type arg)
  {
    msg_.gps_position_valid = std::move(arg);
    return Init_VehicleStatusFlags_home_position_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_global_position_valid
{
public:
  explicit Init_VehicleStatusFlags_global_position_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_gps_position_valid global_position_valid(::px4_msgs::msg::VehicleStatusFlags::_global_position_valid_type arg)
  {
    msg_.global_position_valid = std::move(arg);
    return Init_VehicleStatusFlags_gps_position_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_local_velocity_valid
{
public:
  explicit Init_VehicleStatusFlags_local_velocity_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_global_position_valid local_velocity_valid(::px4_msgs::msg::VehicleStatusFlags::_local_velocity_valid_type arg)
  {
    msg_.local_velocity_valid = std::move(arg);
    return Init_VehicleStatusFlags_global_position_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_local_position_valid_relaxed
{
public:
  explicit Init_VehicleStatusFlags_local_position_valid_relaxed(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_local_velocity_valid local_position_valid_relaxed(::px4_msgs::msg::VehicleStatusFlags::_local_position_valid_relaxed_type arg)
  {
    msg_.local_position_valid_relaxed = std::move(arg);
    return Init_VehicleStatusFlags_local_velocity_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_local_position_valid
{
public:
  explicit Init_VehicleStatusFlags_local_position_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_local_position_valid_relaxed local_position_valid(::px4_msgs::msg::VehicleStatusFlags::_local_position_valid_type arg)
  {
    msg_.local_position_valid = std::move(arg);
    return Init_VehicleStatusFlags_local_position_valid_relaxed(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_local_altitude_valid
{
public:
  explicit Init_VehicleStatusFlags_local_altitude_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_local_position_valid local_altitude_valid(::px4_msgs::msg::VehicleStatusFlags::_local_altitude_valid_type arg)
  {
    msg_.local_altitude_valid = std::move(arg);
    return Init_VehicleStatusFlags_local_position_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_attitude_valid
{
public:
  explicit Init_VehicleStatusFlags_attitude_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_local_altitude_valid attitude_valid(::px4_msgs::msg::VehicleStatusFlags::_attitude_valid_type arg)
  {
    msg_.attitude_valid = std::move(arg);
    return Init_VehicleStatusFlags_local_altitude_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_angular_velocity_valid
{
public:
  explicit Init_VehicleStatusFlags_angular_velocity_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_attitude_valid angular_velocity_valid(::px4_msgs::msg::VehicleStatusFlags::_angular_velocity_valid_type arg)
  {
    msg_.angular_velocity_valid = std::move(arg);
    return Init_VehicleStatusFlags_attitude_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_auto_mission_available
{
public:
  explicit Init_VehicleStatusFlags_auto_mission_available(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_angular_velocity_valid auto_mission_available(::px4_msgs::msg::VehicleStatusFlags::_auto_mission_available_type arg)
  {
    msg_.auto_mission_available = std::move(arg);
    return Init_VehicleStatusFlags_angular_velocity_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_pre_flight_checks_pass
{
public:
  explicit Init_VehicleStatusFlags_pre_flight_checks_pass(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_auto_mission_available pre_flight_checks_pass(::px4_msgs::msg::VehicleStatusFlags::_pre_flight_checks_pass_type arg)
  {
    msg_.pre_flight_checks_pass = std::move(arg);
    return Init_VehicleStatusFlags_auto_mission_available(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_calibration_enabled
{
public:
  explicit Init_VehicleStatusFlags_calibration_enabled(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_pre_flight_checks_pass calibration_enabled(::px4_msgs::msg::VehicleStatusFlags::_calibration_enabled_type arg)
  {
    msg_.calibration_enabled = std::move(arg);
    return Init_VehicleStatusFlags_pre_flight_checks_pass(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_mode_req_other
{
public:
  explicit Init_VehicleStatusFlags_mode_req_other(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_calibration_enabled mode_req_other(::px4_msgs::msg::VehicleStatusFlags::_mode_req_other_type arg)
  {
    msg_.mode_req_other = std::move(arg);
    return Init_VehicleStatusFlags_calibration_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_mode_req_prevent_arming
{
public:
  explicit Init_VehicleStatusFlags_mode_req_prevent_arming(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_mode_req_other mode_req_prevent_arming(::px4_msgs::msg::VehicleStatusFlags::_mode_req_prevent_arming_type arg)
  {
    msg_.mode_req_prevent_arming = std::move(arg);
    return Init_VehicleStatusFlags_mode_req_other(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_mode_req_home_position
{
public:
  explicit Init_VehicleStatusFlags_mode_req_home_position(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_mode_req_prevent_arming mode_req_home_position(::px4_msgs::msg::VehicleStatusFlags::_mode_req_home_position_type arg)
  {
    msg_.mode_req_home_position = std::move(arg);
    return Init_VehicleStatusFlags_mode_req_prevent_arming(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_mode_req_offboard_signal
{
public:
  explicit Init_VehicleStatusFlags_mode_req_offboard_signal(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_mode_req_home_position mode_req_offboard_signal(::px4_msgs::msg::VehicleStatusFlags::_mode_req_offboard_signal_type arg)
  {
    msg_.mode_req_offboard_signal = std::move(arg);
    return Init_VehicleStatusFlags_mode_req_home_position(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_mode_req_mission
{
public:
  explicit Init_VehicleStatusFlags_mode_req_mission(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_mode_req_offboard_signal mode_req_mission(::px4_msgs::msg::VehicleStatusFlags::_mode_req_mission_type arg)
  {
    msg_.mode_req_mission = std::move(arg);
    return Init_VehicleStatusFlags_mode_req_offboard_signal(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_mode_req_local_alt
{
public:
  explicit Init_VehicleStatusFlags_mode_req_local_alt(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_mode_req_mission mode_req_local_alt(::px4_msgs::msg::VehicleStatusFlags::_mode_req_local_alt_type arg)
  {
    msg_.mode_req_local_alt = std::move(arg);
    return Init_VehicleStatusFlags_mode_req_mission(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_mode_req_global_position
{
public:
  explicit Init_VehicleStatusFlags_mode_req_global_position(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_mode_req_local_alt mode_req_global_position(::px4_msgs::msg::VehicleStatusFlags::_mode_req_global_position_type arg)
  {
    msg_.mode_req_global_position = std::move(arg);
    return Init_VehicleStatusFlags_mode_req_local_alt(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_mode_req_local_position_relaxed
{
public:
  explicit Init_VehicleStatusFlags_mode_req_local_position_relaxed(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_mode_req_global_position mode_req_local_position_relaxed(::px4_msgs::msg::VehicleStatusFlags::_mode_req_local_position_relaxed_type arg)
  {
    msg_.mode_req_local_position_relaxed = std::move(arg);
    return Init_VehicleStatusFlags_mode_req_global_position(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_mode_req_local_position
{
public:
  explicit Init_VehicleStatusFlags_mode_req_local_position(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_mode_req_local_position_relaxed mode_req_local_position(::px4_msgs::msg::VehicleStatusFlags::_mode_req_local_position_type arg)
  {
    msg_.mode_req_local_position = std::move(arg);
    return Init_VehicleStatusFlags_mode_req_local_position_relaxed(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_mode_req_attitude
{
public:
  explicit Init_VehicleStatusFlags_mode_req_attitude(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_mode_req_local_position mode_req_attitude(::px4_msgs::msg::VehicleStatusFlags::_mode_req_attitude_type arg)
  {
    msg_.mode_req_attitude = std::move(arg);
    return Init_VehicleStatusFlags_mode_req_local_position(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_mode_req_angular_velocity
{
public:
  explicit Init_VehicleStatusFlags_mode_req_angular_velocity(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_mode_req_attitude mode_req_angular_velocity(::px4_msgs::msg::VehicleStatusFlags::_mode_req_angular_velocity_type arg)
  {
    msg_.mode_req_angular_velocity = std::move(arg);
    return Init_VehicleStatusFlags_mode_req_attitude(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_timestamp
{
public:
  Init_VehicleStatusFlags_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatusFlags_mode_req_angular_velocity timestamp(::px4_msgs::msg::VehicleStatusFlags::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleStatusFlags_mode_req_angular_velocity(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleStatusFlags>()
{
  return px4_msgs::msg::builder::Init_VehicleStatusFlags_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__BUILDER_HPP_

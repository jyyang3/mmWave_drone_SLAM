// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleStatusFlags __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleStatusFlags __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStatusFlags_
{
  using Type = VehicleStatusFlags_<ContainerAllocator>;

  explicit VehicleStatusFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->mode_req_angular_velocity = 0ul;
      this->mode_req_attitude = 0ul;
      this->mode_req_local_position = 0ul;
      this->mode_req_local_position_relaxed = 0ul;
      this->mode_req_global_position = 0ul;
      this->mode_req_local_alt = 0ul;
      this->mode_req_mission = 0ul;
      this->mode_req_offboard_signal = 0ul;
      this->mode_req_home_position = 0ul;
      this->mode_req_prevent_arming = 0ul;
      this->mode_req_other = 0ul;
      this->calibration_enabled = false;
      this->pre_flight_checks_pass = false;
      this->auto_mission_available = false;
      this->angular_velocity_valid = false;
      this->attitude_valid = false;
      this->local_altitude_valid = false;
      this->local_position_valid = false;
      this->local_position_valid_relaxed = false;
      this->local_velocity_valid = false;
      this->global_position_valid = false;
      this->gps_position_valid = false;
      this->home_position_valid = false;
      this->offboard_control_signal_lost = false;
      this->rc_signal_found_once = false;
      this->rc_calibration_in_progress = false;
      this->vtol_transition_failure = false;
      this->battery_low_remaining_time = false;
      this->battery_unhealthy = false;
      this->battery_warning = 0;
    }
  }

  explicit VehicleStatusFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->mode_req_angular_velocity = 0ul;
      this->mode_req_attitude = 0ul;
      this->mode_req_local_position = 0ul;
      this->mode_req_local_position_relaxed = 0ul;
      this->mode_req_global_position = 0ul;
      this->mode_req_local_alt = 0ul;
      this->mode_req_mission = 0ul;
      this->mode_req_offboard_signal = 0ul;
      this->mode_req_home_position = 0ul;
      this->mode_req_prevent_arming = 0ul;
      this->mode_req_other = 0ul;
      this->calibration_enabled = false;
      this->pre_flight_checks_pass = false;
      this->auto_mission_available = false;
      this->angular_velocity_valid = false;
      this->attitude_valid = false;
      this->local_altitude_valid = false;
      this->local_position_valid = false;
      this->local_position_valid_relaxed = false;
      this->local_velocity_valid = false;
      this->global_position_valid = false;
      this->gps_position_valid = false;
      this->home_position_valid = false;
      this->offboard_control_signal_lost = false;
      this->rc_signal_found_once = false;
      this->rc_calibration_in_progress = false;
      this->vtol_transition_failure = false;
      this->battery_low_remaining_time = false;
      this->battery_unhealthy = false;
      this->battery_warning = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _mode_req_angular_velocity_type =
    uint32_t;
  _mode_req_angular_velocity_type mode_req_angular_velocity;
  using _mode_req_attitude_type =
    uint32_t;
  _mode_req_attitude_type mode_req_attitude;
  using _mode_req_local_position_type =
    uint32_t;
  _mode_req_local_position_type mode_req_local_position;
  using _mode_req_local_position_relaxed_type =
    uint32_t;
  _mode_req_local_position_relaxed_type mode_req_local_position_relaxed;
  using _mode_req_global_position_type =
    uint32_t;
  _mode_req_global_position_type mode_req_global_position;
  using _mode_req_local_alt_type =
    uint32_t;
  _mode_req_local_alt_type mode_req_local_alt;
  using _mode_req_mission_type =
    uint32_t;
  _mode_req_mission_type mode_req_mission;
  using _mode_req_offboard_signal_type =
    uint32_t;
  _mode_req_offboard_signal_type mode_req_offboard_signal;
  using _mode_req_home_position_type =
    uint32_t;
  _mode_req_home_position_type mode_req_home_position;
  using _mode_req_prevent_arming_type =
    uint32_t;
  _mode_req_prevent_arming_type mode_req_prevent_arming;
  using _mode_req_other_type =
    uint32_t;
  _mode_req_other_type mode_req_other;
  using _calibration_enabled_type =
    bool;
  _calibration_enabled_type calibration_enabled;
  using _pre_flight_checks_pass_type =
    bool;
  _pre_flight_checks_pass_type pre_flight_checks_pass;
  using _auto_mission_available_type =
    bool;
  _auto_mission_available_type auto_mission_available;
  using _angular_velocity_valid_type =
    bool;
  _angular_velocity_valid_type angular_velocity_valid;
  using _attitude_valid_type =
    bool;
  _attitude_valid_type attitude_valid;
  using _local_altitude_valid_type =
    bool;
  _local_altitude_valid_type local_altitude_valid;
  using _local_position_valid_type =
    bool;
  _local_position_valid_type local_position_valid;
  using _local_position_valid_relaxed_type =
    bool;
  _local_position_valid_relaxed_type local_position_valid_relaxed;
  using _local_velocity_valid_type =
    bool;
  _local_velocity_valid_type local_velocity_valid;
  using _global_position_valid_type =
    bool;
  _global_position_valid_type global_position_valid;
  using _gps_position_valid_type =
    bool;
  _gps_position_valid_type gps_position_valid;
  using _home_position_valid_type =
    bool;
  _home_position_valid_type home_position_valid;
  using _offboard_control_signal_lost_type =
    bool;
  _offboard_control_signal_lost_type offboard_control_signal_lost;
  using _rc_signal_found_once_type =
    bool;
  _rc_signal_found_once_type rc_signal_found_once;
  using _rc_calibration_in_progress_type =
    bool;
  _rc_calibration_in_progress_type rc_calibration_in_progress;
  using _vtol_transition_failure_type =
    bool;
  _vtol_transition_failure_type vtol_transition_failure;
  using _battery_low_remaining_time_type =
    bool;
  _battery_low_remaining_time_type battery_low_remaining_time;
  using _battery_unhealthy_type =
    bool;
  _battery_unhealthy_type battery_unhealthy;
  using _battery_warning_type =
    uint8_t;
  _battery_warning_type battery_warning;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__mode_req_angular_velocity(
    const uint32_t & _arg)
  {
    this->mode_req_angular_velocity = _arg;
    return *this;
  }
  Type & set__mode_req_attitude(
    const uint32_t & _arg)
  {
    this->mode_req_attitude = _arg;
    return *this;
  }
  Type & set__mode_req_local_position(
    const uint32_t & _arg)
  {
    this->mode_req_local_position = _arg;
    return *this;
  }
  Type & set__mode_req_local_position_relaxed(
    const uint32_t & _arg)
  {
    this->mode_req_local_position_relaxed = _arg;
    return *this;
  }
  Type & set__mode_req_global_position(
    const uint32_t & _arg)
  {
    this->mode_req_global_position = _arg;
    return *this;
  }
  Type & set__mode_req_local_alt(
    const uint32_t & _arg)
  {
    this->mode_req_local_alt = _arg;
    return *this;
  }
  Type & set__mode_req_mission(
    const uint32_t & _arg)
  {
    this->mode_req_mission = _arg;
    return *this;
  }
  Type & set__mode_req_offboard_signal(
    const uint32_t & _arg)
  {
    this->mode_req_offboard_signal = _arg;
    return *this;
  }
  Type & set__mode_req_home_position(
    const uint32_t & _arg)
  {
    this->mode_req_home_position = _arg;
    return *this;
  }
  Type & set__mode_req_prevent_arming(
    const uint32_t & _arg)
  {
    this->mode_req_prevent_arming = _arg;
    return *this;
  }
  Type & set__mode_req_other(
    const uint32_t & _arg)
  {
    this->mode_req_other = _arg;
    return *this;
  }
  Type & set__calibration_enabled(
    const bool & _arg)
  {
    this->calibration_enabled = _arg;
    return *this;
  }
  Type & set__pre_flight_checks_pass(
    const bool & _arg)
  {
    this->pre_flight_checks_pass = _arg;
    return *this;
  }
  Type & set__auto_mission_available(
    const bool & _arg)
  {
    this->auto_mission_available = _arg;
    return *this;
  }
  Type & set__angular_velocity_valid(
    const bool & _arg)
  {
    this->angular_velocity_valid = _arg;
    return *this;
  }
  Type & set__attitude_valid(
    const bool & _arg)
  {
    this->attitude_valid = _arg;
    return *this;
  }
  Type & set__local_altitude_valid(
    const bool & _arg)
  {
    this->local_altitude_valid = _arg;
    return *this;
  }
  Type & set__local_position_valid(
    const bool & _arg)
  {
    this->local_position_valid = _arg;
    return *this;
  }
  Type & set__local_position_valid_relaxed(
    const bool & _arg)
  {
    this->local_position_valid_relaxed = _arg;
    return *this;
  }
  Type & set__local_velocity_valid(
    const bool & _arg)
  {
    this->local_velocity_valid = _arg;
    return *this;
  }
  Type & set__global_position_valid(
    const bool & _arg)
  {
    this->global_position_valid = _arg;
    return *this;
  }
  Type & set__gps_position_valid(
    const bool & _arg)
  {
    this->gps_position_valid = _arg;
    return *this;
  }
  Type & set__home_position_valid(
    const bool & _arg)
  {
    this->home_position_valid = _arg;
    return *this;
  }
  Type & set__offboard_control_signal_lost(
    const bool & _arg)
  {
    this->offboard_control_signal_lost = _arg;
    return *this;
  }
  Type & set__rc_signal_found_once(
    const bool & _arg)
  {
    this->rc_signal_found_once = _arg;
    return *this;
  }
  Type & set__rc_calibration_in_progress(
    const bool & _arg)
  {
    this->rc_calibration_in_progress = _arg;
    return *this;
  }
  Type & set__vtol_transition_failure(
    const bool & _arg)
  {
    this->vtol_transition_failure = _arg;
    return *this;
  }
  Type & set__battery_low_remaining_time(
    const bool & _arg)
  {
    this->battery_low_remaining_time = _arg;
    return *this;
  }
  Type & set__battery_unhealthy(
    const bool & _arg)
  {
    this->battery_unhealthy = _arg;
    return *this;
  }
  Type & set__battery_warning(
    const uint8_t & _arg)
  {
    this->battery_warning = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleStatusFlags
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleStatusFlags
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStatusFlags_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->mode_req_angular_velocity != other.mode_req_angular_velocity) {
      return false;
    }
    if (this->mode_req_attitude != other.mode_req_attitude) {
      return false;
    }
    if (this->mode_req_local_position != other.mode_req_local_position) {
      return false;
    }
    if (this->mode_req_local_position_relaxed != other.mode_req_local_position_relaxed) {
      return false;
    }
    if (this->mode_req_global_position != other.mode_req_global_position) {
      return false;
    }
    if (this->mode_req_local_alt != other.mode_req_local_alt) {
      return false;
    }
    if (this->mode_req_mission != other.mode_req_mission) {
      return false;
    }
    if (this->mode_req_offboard_signal != other.mode_req_offboard_signal) {
      return false;
    }
    if (this->mode_req_home_position != other.mode_req_home_position) {
      return false;
    }
    if (this->mode_req_prevent_arming != other.mode_req_prevent_arming) {
      return false;
    }
    if (this->mode_req_other != other.mode_req_other) {
      return false;
    }
    if (this->calibration_enabled != other.calibration_enabled) {
      return false;
    }
    if (this->pre_flight_checks_pass != other.pre_flight_checks_pass) {
      return false;
    }
    if (this->auto_mission_available != other.auto_mission_available) {
      return false;
    }
    if (this->angular_velocity_valid != other.angular_velocity_valid) {
      return false;
    }
    if (this->attitude_valid != other.attitude_valid) {
      return false;
    }
    if (this->local_altitude_valid != other.local_altitude_valid) {
      return false;
    }
    if (this->local_position_valid != other.local_position_valid) {
      return false;
    }
    if (this->local_position_valid_relaxed != other.local_position_valid_relaxed) {
      return false;
    }
    if (this->local_velocity_valid != other.local_velocity_valid) {
      return false;
    }
    if (this->global_position_valid != other.global_position_valid) {
      return false;
    }
    if (this->gps_position_valid != other.gps_position_valid) {
      return false;
    }
    if (this->home_position_valid != other.home_position_valid) {
      return false;
    }
    if (this->offboard_control_signal_lost != other.offboard_control_signal_lost) {
      return false;
    }
    if (this->rc_signal_found_once != other.rc_signal_found_once) {
      return false;
    }
    if (this->rc_calibration_in_progress != other.rc_calibration_in_progress) {
      return false;
    }
    if (this->vtol_transition_failure != other.vtol_transition_failure) {
      return false;
    }
    if (this->battery_low_remaining_time != other.battery_low_remaining_time) {
      return false;
    }
    if (this->battery_unhealthy != other.battery_unhealthy) {
      return false;
    }
    if (this->battery_warning != other.battery_warning) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStatusFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStatusFlags_

// alias to use template instance with default allocator
using VehicleStatusFlags =
  px4_msgs::msg::VehicleStatusFlags_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_HPP_

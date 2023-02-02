// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VehicleStatusFlags in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleStatusFlags
{
  uint64_t timestamp;
  uint32_t mode_req_angular_velocity;
  uint32_t mode_req_attitude;
  uint32_t mode_req_local_position;
  uint32_t mode_req_local_position_relaxed;
  uint32_t mode_req_global_position;
  uint32_t mode_req_local_alt;
  uint32_t mode_req_mission;
  uint32_t mode_req_offboard_signal;
  uint32_t mode_req_home_position;
  uint32_t mode_req_prevent_arming;
  uint32_t mode_req_other;
  bool calibration_enabled;
  bool pre_flight_checks_pass;
  bool auto_mission_available;
  bool angular_velocity_valid;
  bool attitude_valid;
  bool local_altitude_valid;
  bool local_position_valid;
  bool local_position_valid_relaxed;
  bool local_velocity_valid;
  bool global_position_valid;
  bool gps_position_valid;
  bool home_position_valid;
  bool offboard_control_signal_lost;
  bool rc_signal_found_once;
  bool rc_calibration_in_progress;
  bool vtol_transition_failure;
  bool battery_low_remaining_time;
  bool battery_unhealthy;
  uint8_t battery_warning;
} px4_msgs__msg__VehicleStatusFlags;

// Struct for a sequence of px4_msgs__msg__VehicleStatusFlags.
typedef struct px4_msgs__msg__VehicleStatusFlags__Sequence
{
  px4_msgs__msg__VehicleStatusFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleStatusFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_H_

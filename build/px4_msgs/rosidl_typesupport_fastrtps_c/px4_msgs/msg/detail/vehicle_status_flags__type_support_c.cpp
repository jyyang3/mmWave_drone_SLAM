// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_status_flags__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_status_flags__struct.h"
#include "px4_msgs/msg/detail/vehicle_status_flags__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VehicleStatusFlags__ros_msg_type = px4_msgs__msg__VehicleStatusFlags;

static bool _VehicleStatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleStatusFlags__ros_msg_type * ros_message = static_cast<const _VehicleStatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: mode_req_angular_velocity
  {
    cdr << ros_message->mode_req_angular_velocity;
  }

  // Field name: mode_req_attitude
  {
    cdr << ros_message->mode_req_attitude;
  }

  // Field name: mode_req_local_position
  {
    cdr << ros_message->mode_req_local_position;
  }

  // Field name: mode_req_local_position_relaxed
  {
    cdr << ros_message->mode_req_local_position_relaxed;
  }

  // Field name: mode_req_global_position
  {
    cdr << ros_message->mode_req_global_position;
  }

  // Field name: mode_req_local_alt
  {
    cdr << ros_message->mode_req_local_alt;
  }

  // Field name: mode_req_mission
  {
    cdr << ros_message->mode_req_mission;
  }

  // Field name: mode_req_offboard_signal
  {
    cdr << ros_message->mode_req_offboard_signal;
  }

  // Field name: mode_req_home_position
  {
    cdr << ros_message->mode_req_home_position;
  }

  // Field name: mode_req_prevent_arming
  {
    cdr << ros_message->mode_req_prevent_arming;
  }

  // Field name: mode_req_other
  {
    cdr << ros_message->mode_req_other;
  }

  // Field name: calibration_enabled
  {
    cdr << (ros_message->calibration_enabled ? true : false);
  }

  // Field name: pre_flight_checks_pass
  {
    cdr << (ros_message->pre_flight_checks_pass ? true : false);
  }

  // Field name: auto_mission_available
  {
    cdr << (ros_message->auto_mission_available ? true : false);
  }

  // Field name: angular_velocity_valid
  {
    cdr << (ros_message->angular_velocity_valid ? true : false);
  }

  // Field name: attitude_valid
  {
    cdr << (ros_message->attitude_valid ? true : false);
  }

  // Field name: local_altitude_valid
  {
    cdr << (ros_message->local_altitude_valid ? true : false);
  }

  // Field name: local_position_valid
  {
    cdr << (ros_message->local_position_valid ? true : false);
  }

  // Field name: local_position_valid_relaxed
  {
    cdr << (ros_message->local_position_valid_relaxed ? true : false);
  }

  // Field name: local_velocity_valid
  {
    cdr << (ros_message->local_velocity_valid ? true : false);
  }

  // Field name: global_position_valid
  {
    cdr << (ros_message->global_position_valid ? true : false);
  }

  // Field name: gps_position_valid
  {
    cdr << (ros_message->gps_position_valid ? true : false);
  }

  // Field name: home_position_valid
  {
    cdr << (ros_message->home_position_valid ? true : false);
  }

  // Field name: offboard_control_signal_lost
  {
    cdr << (ros_message->offboard_control_signal_lost ? true : false);
  }

  // Field name: rc_signal_found_once
  {
    cdr << (ros_message->rc_signal_found_once ? true : false);
  }

  // Field name: rc_calibration_in_progress
  {
    cdr << (ros_message->rc_calibration_in_progress ? true : false);
  }

  // Field name: vtol_transition_failure
  {
    cdr << (ros_message->vtol_transition_failure ? true : false);
  }

  // Field name: battery_low_remaining_time
  {
    cdr << (ros_message->battery_low_remaining_time ? true : false);
  }

  // Field name: battery_unhealthy
  {
    cdr << (ros_message->battery_unhealthy ? true : false);
  }

  // Field name: battery_warning
  {
    cdr << ros_message->battery_warning;
  }

  return true;
}

static bool _VehicleStatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleStatusFlags__ros_msg_type * ros_message = static_cast<_VehicleStatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: mode_req_angular_velocity
  {
    cdr >> ros_message->mode_req_angular_velocity;
  }

  // Field name: mode_req_attitude
  {
    cdr >> ros_message->mode_req_attitude;
  }

  // Field name: mode_req_local_position
  {
    cdr >> ros_message->mode_req_local_position;
  }

  // Field name: mode_req_local_position_relaxed
  {
    cdr >> ros_message->mode_req_local_position_relaxed;
  }

  // Field name: mode_req_global_position
  {
    cdr >> ros_message->mode_req_global_position;
  }

  // Field name: mode_req_local_alt
  {
    cdr >> ros_message->mode_req_local_alt;
  }

  // Field name: mode_req_mission
  {
    cdr >> ros_message->mode_req_mission;
  }

  // Field name: mode_req_offboard_signal
  {
    cdr >> ros_message->mode_req_offboard_signal;
  }

  // Field name: mode_req_home_position
  {
    cdr >> ros_message->mode_req_home_position;
  }

  // Field name: mode_req_prevent_arming
  {
    cdr >> ros_message->mode_req_prevent_arming;
  }

  // Field name: mode_req_other
  {
    cdr >> ros_message->mode_req_other;
  }

  // Field name: calibration_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->calibration_enabled = tmp ? true : false;
  }

  // Field name: pre_flight_checks_pass
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pre_flight_checks_pass = tmp ? true : false;
  }

  // Field name: auto_mission_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_mission_available = tmp ? true : false;
  }

  // Field name: angular_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->angular_velocity_valid = tmp ? true : false;
  }

  // Field name: attitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->attitude_valid = tmp ? true : false;
  }

  // Field name: local_altitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_altitude_valid = tmp ? true : false;
  }

  // Field name: local_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_position_valid = tmp ? true : false;
  }

  // Field name: local_position_valid_relaxed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_position_valid_relaxed = tmp ? true : false;
  }

  // Field name: local_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_velocity_valid = tmp ? true : false;
  }

  // Field name: global_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->global_position_valid = tmp ? true : false;
  }

  // Field name: gps_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_position_valid = tmp ? true : false;
  }

  // Field name: home_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->home_position_valid = tmp ? true : false;
  }

  // Field name: offboard_control_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->offboard_control_signal_lost = tmp ? true : false;
  }

  // Field name: rc_signal_found_once
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_signal_found_once = tmp ? true : false;
  }

  // Field name: rc_calibration_in_progress
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_calibration_in_progress = tmp ? true : false;
  }

  // Field name: vtol_transition_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vtol_transition_failure = tmp ? true : false;
  }

  // Field name: battery_low_remaining_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->battery_low_remaining_time = tmp ? true : false;
  }

  // Field name: battery_unhealthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->battery_unhealthy = tmp ? true : false;
  }

  // Field name: battery_warning
  {
    cdr >> ros_message->battery_warning;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleStatusFlags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleStatusFlags__ros_msg_type * ros_message = static_cast<const _VehicleStatusFlags__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_angular_velocity
  {
    size_t item_size = sizeof(ros_message->mode_req_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_attitude
  {
    size_t item_size = sizeof(ros_message->mode_req_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_local_position
  {
    size_t item_size = sizeof(ros_message->mode_req_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_local_position_relaxed
  {
    size_t item_size = sizeof(ros_message->mode_req_local_position_relaxed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_global_position
  {
    size_t item_size = sizeof(ros_message->mode_req_global_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_local_alt
  {
    size_t item_size = sizeof(ros_message->mode_req_local_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_mission
  {
    size_t item_size = sizeof(ros_message->mode_req_mission);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_offboard_signal
  {
    size_t item_size = sizeof(ros_message->mode_req_offboard_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_home_position
  {
    size_t item_size = sizeof(ros_message->mode_req_home_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_prevent_arming
  {
    size_t item_size = sizeof(ros_message->mode_req_prevent_arming);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_other
  {
    size_t item_size = sizeof(ros_message->mode_req_other);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name calibration_enabled
  {
    size_t item_size = sizeof(ros_message->calibration_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pre_flight_checks_pass
  {
    size_t item_size = sizeof(ros_message->pre_flight_checks_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_mission_available
  {
    size_t item_size = sizeof(ros_message->auto_mission_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_velocity_valid
  {
    size_t item_size = sizeof(ros_message->angular_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attitude_valid
  {
    size_t item_size = sizeof(ros_message->attitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_altitude_valid
  {
    size_t item_size = sizeof(ros_message->local_altitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_position_valid
  {
    size_t item_size = sizeof(ros_message->local_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_position_valid_relaxed
  {
    size_t item_size = sizeof(ros_message->local_position_valid_relaxed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_velocity_valid
  {
    size_t item_size = sizeof(ros_message->local_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_position_valid
  {
    size_t item_size = sizeof(ros_message->global_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_position_valid
  {
    size_t item_size = sizeof(ros_message->gps_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name home_position_valid
  {
    size_t item_size = sizeof(ros_message->home_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offboard_control_signal_lost
  {
    size_t item_size = sizeof(ros_message->offboard_control_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_signal_found_once
  {
    size_t item_size = sizeof(ros_message->rc_signal_found_once);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_calibration_in_progress
  {
    size_t item_size = sizeof(ros_message->rc_calibration_in_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vtol_transition_failure
  {
    size_t item_size = sizeof(ros_message->vtol_transition_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_low_remaining_time
  {
    size_t item_size = sizeof(ros_message->battery_low_remaining_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_unhealthy
  {
    size_t item_size = sizeof(ros_message->battery_unhealthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_warning
  {
    size_t item_size = sizeof(ros_message->battery_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleStatusFlags__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VehicleStatusFlags(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleStatusFlags(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mode_req_angular_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_attitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_local_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_local_position_relaxed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_global_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_local_alt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_mission
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_offboard_signal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_home_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_prevent_arming
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_other
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: calibration_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pre_flight_checks_pass
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_mission_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: angular_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: attitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_altitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_position_valid_relaxed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: global_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: home_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: offboard_control_signal_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_signal_found_once
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_calibration_in_progress
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vtol_transition_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_low_remaining_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_unhealthy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_warning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleStatusFlags__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__VehicleStatusFlags(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleStatusFlags = {
  "px4_msgs::msg",
  "VehicleStatusFlags",
  _VehicleStatusFlags__cdr_serialize,
  _VehicleStatusFlags__cdr_deserialize,
  _VehicleStatusFlags__get_serialized_size,
  _VehicleStatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatusFlags__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleStatusFlags,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleStatusFlags)() {
  return &_VehicleStatusFlags__type_support;
}

#if defined(__cplusplus)
}
#endif

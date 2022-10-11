// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_status_flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleStatusFlags__init(px4_msgs__msg__VehicleStatusFlags * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // mode_req_angular_velocity
  // mode_req_attitude
  // mode_req_local_position
  // mode_req_local_position_relaxed
  // mode_req_global_position
  // mode_req_local_alt
  // mode_req_mission
  // mode_req_offboard_signal
  // mode_req_home_position
  // mode_req_prevent_arming
  // mode_req_other
  // calibration_enabled
  // pre_flight_checks_pass
  // auto_mission_available
  // angular_velocity_valid
  // attitude_valid
  // local_altitude_valid
  // local_position_valid
  // local_position_valid_relaxed
  // local_velocity_valid
  // global_position_valid
  // gps_position_valid
  // home_position_valid
  // offboard_control_signal_lost
  // rc_signal_found_once
  // rc_calibration_in_progress
  // vtol_transition_failure
  // battery_low_remaining_time
  // battery_unhealthy
  // battery_warning
  return true;
}

void
px4_msgs__msg__VehicleStatusFlags__fini(px4_msgs__msg__VehicleStatusFlags * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // mode_req_angular_velocity
  // mode_req_attitude
  // mode_req_local_position
  // mode_req_local_position_relaxed
  // mode_req_global_position
  // mode_req_local_alt
  // mode_req_mission
  // mode_req_offboard_signal
  // mode_req_home_position
  // mode_req_prevent_arming
  // mode_req_other
  // calibration_enabled
  // pre_flight_checks_pass
  // auto_mission_available
  // angular_velocity_valid
  // attitude_valid
  // local_altitude_valid
  // local_position_valid
  // local_position_valid_relaxed
  // local_velocity_valid
  // global_position_valid
  // gps_position_valid
  // home_position_valid
  // offboard_control_signal_lost
  // rc_signal_found_once
  // rc_calibration_in_progress
  // vtol_transition_failure
  // battery_low_remaining_time
  // battery_unhealthy
  // battery_warning
}

bool
px4_msgs__msg__VehicleStatusFlags__are_equal(const px4_msgs__msg__VehicleStatusFlags * lhs, const px4_msgs__msg__VehicleStatusFlags * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // mode_req_angular_velocity
  if (lhs->mode_req_angular_velocity != rhs->mode_req_angular_velocity) {
    return false;
  }
  // mode_req_attitude
  if (lhs->mode_req_attitude != rhs->mode_req_attitude) {
    return false;
  }
  // mode_req_local_position
  if (lhs->mode_req_local_position != rhs->mode_req_local_position) {
    return false;
  }
  // mode_req_local_position_relaxed
  if (lhs->mode_req_local_position_relaxed != rhs->mode_req_local_position_relaxed) {
    return false;
  }
  // mode_req_global_position
  if (lhs->mode_req_global_position != rhs->mode_req_global_position) {
    return false;
  }
  // mode_req_local_alt
  if (lhs->mode_req_local_alt != rhs->mode_req_local_alt) {
    return false;
  }
  // mode_req_mission
  if (lhs->mode_req_mission != rhs->mode_req_mission) {
    return false;
  }
  // mode_req_offboard_signal
  if (lhs->mode_req_offboard_signal != rhs->mode_req_offboard_signal) {
    return false;
  }
  // mode_req_home_position
  if (lhs->mode_req_home_position != rhs->mode_req_home_position) {
    return false;
  }
  // mode_req_prevent_arming
  if (lhs->mode_req_prevent_arming != rhs->mode_req_prevent_arming) {
    return false;
  }
  // mode_req_other
  if (lhs->mode_req_other != rhs->mode_req_other) {
    return false;
  }
  // calibration_enabled
  if (lhs->calibration_enabled != rhs->calibration_enabled) {
    return false;
  }
  // pre_flight_checks_pass
  if (lhs->pre_flight_checks_pass != rhs->pre_flight_checks_pass) {
    return false;
  }
  // auto_mission_available
  if (lhs->auto_mission_available != rhs->auto_mission_available) {
    return false;
  }
  // angular_velocity_valid
  if (lhs->angular_velocity_valid != rhs->angular_velocity_valid) {
    return false;
  }
  // attitude_valid
  if (lhs->attitude_valid != rhs->attitude_valid) {
    return false;
  }
  // local_altitude_valid
  if (lhs->local_altitude_valid != rhs->local_altitude_valid) {
    return false;
  }
  // local_position_valid
  if (lhs->local_position_valid != rhs->local_position_valid) {
    return false;
  }
  // local_position_valid_relaxed
  if (lhs->local_position_valid_relaxed != rhs->local_position_valid_relaxed) {
    return false;
  }
  // local_velocity_valid
  if (lhs->local_velocity_valid != rhs->local_velocity_valid) {
    return false;
  }
  // global_position_valid
  if (lhs->global_position_valid != rhs->global_position_valid) {
    return false;
  }
  // gps_position_valid
  if (lhs->gps_position_valid != rhs->gps_position_valid) {
    return false;
  }
  // home_position_valid
  if (lhs->home_position_valid != rhs->home_position_valid) {
    return false;
  }
  // offboard_control_signal_lost
  if (lhs->offboard_control_signal_lost != rhs->offboard_control_signal_lost) {
    return false;
  }
  // rc_signal_found_once
  if (lhs->rc_signal_found_once != rhs->rc_signal_found_once) {
    return false;
  }
  // rc_calibration_in_progress
  if (lhs->rc_calibration_in_progress != rhs->rc_calibration_in_progress) {
    return false;
  }
  // vtol_transition_failure
  if (lhs->vtol_transition_failure != rhs->vtol_transition_failure) {
    return false;
  }
  // battery_low_remaining_time
  if (lhs->battery_low_remaining_time != rhs->battery_low_remaining_time) {
    return false;
  }
  // battery_unhealthy
  if (lhs->battery_unhealthy != rhs->battery_unhealthy) {
    return false;
  }
  // battery_warning
  if (lhs->battery_warning != rhs->battery_warning) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleStatusFlags__copy(
  const px4_msgs__msg__VehicleStatusFlags * input,
  px4_msgs__msg__VehicleStatusFlags * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // mode_req_angular_velocity
  output->mode_req_angular_velocity = input->mode_req_angular_velocity;
  // mode_req_attitude
  output->mode_req_attitude = input->mode_req_attitude;
  // mode_req_local_position
  output->mode_req_local_position = input->mode_req_local_position;
  // mode_req_local_position_relaxed
  output->mode_req_local_position_relaxed = input->mode_req_local_position_relaxed;
  // mode_req_global_position
  output->mode_req_global_position = input->mode_req_global_position;
  // mode_req_local_alt
  output->mode_req_local_alt = input->mode_req_local_alt;
  // mode_req_mission
  output->mode_req_mission = input->mode_req_mission;
  // mode_req_offboard_signal
  output->mode_req_offboard_signal = input->mode_req_offboard_signal;
  // mode_req_home_position
  output->mode_req_home_position = input->mode_req_home_position;
  // mode_req_prevent_arming
  output->mode_req_prevent_arming = input->mode_req_prevent_arming;
  // mode_req_other
  output->mode_req_other = input->mode_req_other;
  // calibration_enabled
  output->calibration_enabled = input->calibration_enabled;
  // pre_flight_checks_pass
  output->pre_flight_checks_pass = input->pre_flight_checks_pass;
  // auto_mission_available
  output->auto_mission_available = input->auto_mission_available;
  // angular_velocity_valid
  output->angular_velocity_valid = input->angular_velocity_valid;
  // attitude_valid
  output->attitude_valid = input->attitude_valid;
  // local_altitude_valid
  output->local_altitude_valid = input->local_altitude_valid;
  // local_position_valid
  output->local_position_valid = input->local_position_valid;
  // local_position_valid_relaxed
  output->local_position_valid_relaxed = input->local_position_valid_relaxed;
  // local_velocity_valid
  output->local_velocity_valid = input->local_velocity_valid;
  // global_position_valid
  output->global_position_valid = input->global_position_valid;
  // gps_position_valid
  output->gps_position_valid = input->gps_position_valid;
  // home_position_valid
  output->home_position_valid = input->home_position_valid;
  // offboard_control_signal_lost
  output->offboard_control_signal_lost = input->offboard_control_signal_lost;
  // rc_signal_found_once
  output->rc_signal_found_once = input->rc_signal_found_once;
  // rc_calibration_in_progress
  output->rc_calibration_in_progress = input->rc_calibration_in_progress;
  // vtol_transition_failure
  output->vtol_transition_failure = input->vtol_transition_failure;
  // battery_low_remaining_time
  output->battery_low_remaining_time = input->battery_low_remaining_time;
  // battery_unhealthy
  output->battery_unhealthy = input->battery_unhealthy;
  // battery_warning
  output->battery_warning = input->battery_warning;
  return true;
}

px4_msgs__msg__VehicleStatusFlags *
px4_msgs__msg__VehicleStatusFlags__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatusFlags * msg = (px4_msgs__msg__VehicleStatusFlags *)allocator.allocate(sizeof(px4_msgs__msg__VehicleStatusFlags), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleStatusFlags));
  bool success = px4_msgs__msg__VehicleStatusFlags__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleStatusFlags__destroy(px4_msgs__msg__VehicleStatusFlags * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleStatusFlags__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleStatusFlags__Sequence__init(px4_msgs__msg__VehicleStatusFlags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatusFlags * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleStatusFlags *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleStatusFlags), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleStatusFlags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleStatusFlags__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__VehicleStatusFlags__Sequence__fini(px4_msgs__msg__VehicleStatusFlags__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__VehicleStatusFlags__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__VehicleStatusFlags__Sequence *
px4_msgs__msg__VehicleStatusFlags__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatusFlags__Sequence * array = (px4_msgs__msg__VehicleStatusFlags__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleStatusFlags__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleStatusFlags__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleStatusFlags__Sequence__destroy(px4_msgs__msg__VehicleStatusFlags__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleStatusFlags__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleStatusFlags__Sequence__are_equal(const px4_msgs__msg__VehicleStatusFlags__Sequence * lhs, const px4_msgs__msg__VehicleStatusFlags__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleStatusFlags__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleStatusFlags__Sequence__copy(
  const px4_msgs__msg__VehicleStatusFlags__Sequence * input,
  px4_msgs__msg__VehicleStatusFlags__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleStatusFlags);
    px4_msgs__msg__VehicleStatusFlags * data =
      (px4_msgs__msg__VehicleStatusFlags *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleStatusFlags__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleStatusFlags__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleStatusFlags__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

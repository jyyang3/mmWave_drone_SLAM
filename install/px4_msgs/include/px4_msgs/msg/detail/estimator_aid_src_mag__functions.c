// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorAidSrcMag.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_aid_src_mag__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__EstimatorAidSrcMag__init(px4_msgs__msg__EstimatorAidSrcMag * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // estimator_instance
  // device_id
  // time_last_fuse
  // observation
  // observation_variance
  // innovation
  // innovation_variance
  // test_ratio
  // fusion_enabled
  // innovation_rejected
  // fused
  return true;
}

void
px4_msgs__msg__EstimatorAidSrcMag__fini(px4_msgs__msg__EstimatorAidSrcMag * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // estimator_instance
  // device_id
  // time_last_fuse
  // observation
  // observation_variance
  // innovation
  // innovation_variance
  // test_ratio
  // fusion_enabled
  // innovation_rejected
  // fused
}

bool
px4_msgs__msg__EstimatorAidSrcMag__are_equal(const px4_msgs__msg__EstimatorAidSrcMag * lhs, const px4_msgs__msg__EstimatorAidSrcMag * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_sample
  if (lhs->timestamp_sample != rhs->timestamp_sample) {
    return false;
  }
  // estimator_instance
  if (lhs->estimator_instance != rhs->estimator_instance) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // time_last_fuse
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->time_last_fuse[i] != rhs->time_last_fuse[i]) {
      return false;
    }
  }
  // observation
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->observation[i] != rhs->observation[i]) {
      return false;
    }
  }
  // observation_variance
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->observation_variance[i] != rhs->observation_variance[i]) {
      return false;
    }
  }
  // innovation
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->innovation[i] != rhs->innovation[i]) {
      return false;
    }
  }
  // innovation_variance
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->innovation_variance[i] != rhs->innovation_variance[i]) {
      return false;
    }
  }
  // test_ratio
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->test_ratio[i] != rhs->test_ratio[i]) {
      return false;
    }
  }
  // fusion_enabled
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->fusion_enabled[i] != rhs->fusion_enabled[i]) {
      return false;
    }
  }
  // innovation_rejected
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->innovation_rejected[i] != rhs->innovation_rejected[i]) {
      return false;
    }
  }
  // fused
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->fused[i] != rhs->fused[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorAidSrcMag__copy(
  const px4_msgs__msg__EstimatorAidSrcMag * input,
  px4_msgs__msg__EstimatorAidSrcMag * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // estimator_instance
  output->estimator_instance = input->estimator_instance;
  // device_id
  output->device_id = input->device_id;
  // time_last_fuse
  for (size_t i = 0; i < 3; ++i) {
    output->time_last_fuse[i] = input->time_last_fuse[i];
  }
  // observation
  for (size_t i = 0; i < 3; ++i) {
    output->observation[i] = input->observation[i];
  }
  // observation_variance
  for (size_t i = 0; i < 3; ++i) {
    output->observation_variance[i] = input->observation_variance[i];
  }
  // innovation
  for (size_t i = 0; i < 3; ++i) {
    output->innovation[i] = input->innovation[i];
  }
  // innovation_variance
  for (size_t i = 0; i < 3; ++i) {
    output->innovation_variance[i] = input->innovation_variance[i];
  }
  // test_ratio
  for (size_t i = 0; i < 3; ++i) {
    output->test_ratio[i] = input->test_ratio[i];
  }
  // fusion_enabled
  for (size_t i = 0; i < 3; ++i) {
    output->fusion_enabled[i] = input->fusion_enabled[i];
  }
  // innovation_rejected
  for (size_t i = 0; i < 3; ++i) {
    output->innovation_rejected[i] = input->innovation_rejected[i];
  }
  // fused
  for (size_t i = 0; i < 3; ++i) {
    output->fused[i] = input->fused[i];
  }
  return true;
}

px4_msgs__msg__EstimatorAidSrcMag *
px4_msgs__msg__EstimatorAidSrcMag__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorAidSrcMag * msg = (px4_msgs__msg__EstimatorAidSrcMag *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorAidSrcMag), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorAidSrcMag));
  bool success = px4_msgs__msg__EstimatorAidSrcMag__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorAidSrcMag__destroy(px4_msgs__msg__EstimatorAidSrcMag * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EstimatorAidSrcMag__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EstimatorAidSrcMag__Sequence__init(px4_msgs__msg__EstimatorAidSrcMag__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorAidSrcMag * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EstimatorAidSrcMag *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EstimatorAidSrcMag), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorAidSrcMag__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorAidSrcMag__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorAidSrcMag__Sequence__fini(px4_msgs__msg__EstimatorAidSrcMag__Sequence * array)
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
      px4_msgs__msg__EstimatorAidSrcMag__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorAidSrcMag__Sequence *
px4_msgs__msg__EstimatorAidSrcMag__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorAidSrcMag__Sequence * array = (px4_msgs__msg__EstimatorAidSrcMag__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorAidSrcMag__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorAidSrcMag__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorAidSrcMag__Sequence__destroy(px4_msgs__msg__EstimatorAidSrcMag__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EstimatorAidSrcMag__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EstimatorAidSrcMag__Sequence__are_equal(const px4_msgs__msg__EstimatorAidSrcMag__Sequence * lhs, const px4_msgs__msg__EstimatorAidSrcMag__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EstimatorAidSrcMag__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorAidSrcMag__Sequence__copy(
  const px4_msgs__msg__EstimatorAidSrcMag__Sequence * input,
  px4_msgs__msg__EstimatorAidSrcMag__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EstimatorAidSrcMag);
    px4_msgs__msg__EstimatorAidSrcMag * data =
      (px4_msgs__msg__EstimatorAidSrcMag *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EstimatorAidSrcMag__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EstimatorAidSrcMag__fini(&data[i]);
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
    if (!px4_msgs__msg__EstimatorAidSrcMag__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

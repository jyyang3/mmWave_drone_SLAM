// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorAidSrcFakeHgt.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_aid_src_fake_hgt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__EstimatorAidSrcFakeHgt__init(px4_msgs__msg__EstimatorAidSrcFakeHgt * msg)
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
px4_msgs__msg__EstimatorAidSrcFakeHgt__fini(px4_msgs__msg__EstimatorAidSrcFakeHgt * msg)
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
px4_msgs__msg__EstimatorAidSrcFakeHgt__are_equal(const px4_msgs__msg__EstimatorAidSrcFakeHgt * lhs, const px4_msgs__msg__EstimatorAidSrcFakeHgt * rhs)
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
  if (lhs->time_last_fuse != rhs->time_last_fuse) {
    return false;
  }
  // observation
  if (lhs->observation != rhs->observation) {
    return false;
  }
  // observation_variance
  if (lhs->observation_variance != rhs->observation_variance) {
    return false;
  }
  // innovation
  if (lhs->innovation != rhs->innovation) {
    return false;
  }
  // innovation_variance
  if (lhs->innovation_variance != rhs->innovation_variance) {
    return false;
  }
  // test_ratio
  if (lhs->test_ratio != rhs->test_ratio) {
    return false;
  }
  // fusion_enabled
  if (lhs->fusion_enabled != rhs->fusion_enabled) {
    return false;
  }
  // innovation_rejected
  if (lhs->innovation_rejected != rhs->innovation_rejected) {
    return false;
  }
  // fused
  if (lhs->fused != rhs->fused) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__EstimatorAidSrcFakeHgt__copy(
  const px4_msgs__msg__EstimatorAidSrcFakeHgt * input,
  px4_msgs__msg__EstimatorAidSrcFakeHgt * output)
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
  output->time_last_fuse = input->time_last_fuse;
  // observation
  output->observation = input->observation;
  // observation_variance
  output->observation_variance = input->observation_variance;
  // innovation
  output->innovation = input->innovation;
  // innovation_variance
  output->innovation_variance = input->innovation_variance;
  // test_ratio
  output->test_ratio = input->test_ratio;
  // fusion_enabled
  output->fusion_enabled = input->fusion_enabled;
  // innovation_rejected
  output->innovation_rejected = input->innovation_rejected;
  // fused
  output->fused = input->fused;
  return true;
}

px4_msgs__msg__EstimatorAidSrcFakeHgt *
px4_msgs__msg__EstimatorAidSrcFakeHgt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorAidSrcFakeHgt * msg = (px4_msgs__msg__EstimatorAidSrcFakeHgt *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorAidSrcFakeHgt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorAidSrcFakeHgt));
  bool success = px4_msgs__msg__EstimatorAidSrcFakeHgt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorAidSrcFakeHgt__destroy(px4_msgs__msg__EstimatorAidSrcFakeHgt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EstimatorAidSrcFakeHgt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence__init(px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorAidSrcFakeHgt * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EstimatorAidSrcFakeHgt *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EstimatorAidSrcFakeHgt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorAidSrcFakeHgt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorAidSrcFakeHgt__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence__fini(px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence * array)
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
      px4_msgs__msg__EstimatorAidSrcFakeHgt__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence *
px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence * array = (px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence__destroy(px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence__are_equal(const px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence * lhs, const px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EstimatorAidSrcFakeHgt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence__copy(
  const px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence * input,
  px4_msgs__msg__EstimatorAidSrcFakeHgt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EstimatorAidSrcFakeHgt);
    px4_msgs__msg__EstimatorAidSrcFakeHgt * data =
      (px4_msgs__msg__EstimatorAidSrcFakeHgt *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EstimatorAidSrcFakeHgt__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EstimatorAidSrcFakeHgt__fini(&data[i]);
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
    if (!px4_msgs__msg__EstimatorAidSrcFakeHgt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

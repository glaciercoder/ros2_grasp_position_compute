// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from compute_grasp_interface:srv/ComputeGrasp.idl
// generated code does not contain a copyright notice
#include "compute_grasp_interface/srv/detail/compute_grasp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target`
#include "geometry_msgs/msg/detail/point_stamped__functions.h"

bool
compute_grasp_interface__srv__ComputeGrasp_Request__init(compute_grasp_interface__srv__ComputeGrasp_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__PointStamped__init(&msg->target)) {
    compute_grasp_interface__srv__ComputeGrasp_Request__fini(msg);
    return false;
  }
  return true;
}

void
compute_grasp_interface__srv__ComputeGrasp_Request__fini(compute_grasp_interface__srv__ComputeGrasp_Request * msg)
{
  if (!msg) {
    return;
  }
  // target
  geometry_msgs__msg__PointStamped__fini(&msg->target);
}

bool
compute_grasp_interface__srv__ComputeGrasp_Request__are_equal(const compute_grasp_interface__srv__ComputeGrasp_Request * lhs, const compute_grasp_interface__srv__ComputeGrasp_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__PointStamped__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  return true;
}

bool
compute_grasp_interface__srv__ComputeGrasp_Request__copy(
  const compute_grasp_interface__srv__ComputeGrasp_Request * input,
  compute_grasp_interface__srv__ComputeGrasp_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__PointStamped__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  return true;
}

compute_grasp_interface__srv__ComputeGrasp_Request *
compute_grasp_interface__srv__ComputeGrasp_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compute_grasp_interface__srv__ComputeGrasp_Request * msg = (compute_grasp_interface__srv__ComputeGrasp_Request *)allocator.allocate(sizeof(compute_grasp_interface__srv__ComputeGrasp_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(compute_grasp_interface__srv__ComputeGrasp_Request));
  bool success = compute_grasp_interface__srv__ComputeGrasp_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
compute_grasp_interface__srv__ComputeGrasp_Request__destroy(compute_grasp_interface__srv__ComputeGrasp_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    compute_grasp_interface__srv__ComputeGrasp_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__init(compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compute_grasp_interface__srv__ComputeGrasp_Request * data = NULL;

  if (size) {
    data = (compute_grasp_interface__srv__ComputeGrasp_Request *)allocator.zero_allocate(size, sizeof(compute_grasp_interface__srv__ComputeGrasp_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = compute_grasp_interface__srv__ComputeGrasp_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        compute_grasp_interface__srv__ComputeGrasp_Request__fini(&data[i - 1]);
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
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__fini(compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * array)
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
      compute_grasp_interface__srv__ComputeGrasp_Request__fini(&array->data[i]);
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

compute_grasp_interface__srv__ComputeGrasp_Request__Sequence *
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * array = (compute_grasp_interface__srv__ComputeGrasp_Request__Sequence *)allocator.allocate(sizeof(compute_grasp_interface__srv__ComputeGrasp_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__destroy(compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__are_equal(const compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * lhs, const compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!compute_grasp_interface__srv__ComputeGrasp_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__copy(
  const compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * input,
  compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(compute_grasp_interface__srv__ComputeGrasp_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    compute_grasp_interface__srv__ComputeGrasp_Request * data =
      (compute_grasp_interface__srv__ComputeGrasp_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!compute_grasp_interface__srv__ComputeGrasp_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          compute_grasp_interface__srv__ComputeGrasp_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!compute_grasp_interface__srv__ComputeGrasp_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `target`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
compute_grasp_interface__srv__ComputeGrasp_Response__init(compute_grasp_interface__srv__ComputeGrasp_Response * msg)
{
  if (!msg) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target)) {
    compute_grasp_interface__srv__ComputeGrasp_Response__fini(msg);
    return false;
  }
  return true;
}

void
compute_grasp_interface__srv__ComputeGrasp_Response__fini(compute_grasp_interface__srv__ComputeGrasp_Response * msg)
{
  if (!msg) {
    return;
  }
  // target
  geometry_msgs__msg__PoseStamped__fini(&msg->target);
}

bool
compute_grasp_interface__srv__ComputeGrasp_Response__are_equal(const compute_grasp_interface__srv__ComputeGrasp_Response * lhs, const compute_grasp_interface__srv__ComputeGrasp_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  return true;
}

bool
compute_grasp_interface__srv__ComputeGrasp_Response__copy(
  const compute_grasp_interface__srv__ComputeGrasp_Response * input,
  compute_grasp_interface__srv__ComputeGrasp_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  return true;
}

compute_grasp_interface__srv__ComputeGrasp_Response *
compute_grasp_interface__srv__ComputeGrasp_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compute_grasp_interface__srv__ComputeGrasp_Response * msg = (compute_grasp_interface__srv__ComputeGrasp_Response *)allocator.allocate(sizeof(compute_grasp_interface__srv__ComputeGrasp_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(compute_grasp_interface__srv__ComputeGrasp_Response));
  bool success = compute_grasp_interface__srv__ComputeGrasp_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
compute_grasp_interface__srv__ComputeGrasp_Response__destroy(compute_grasp_interface__srv__ComputeGrasp_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    compute_grasp_interface__srv__ComputeGrasp_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__init(compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compute_grasp_interface__srv__ComputeGrasp_Response * data = NULL;

  if (size) {
    data = (compute_grasp_interface__srv__ComputeGrasp_Response *)allocator.zero_allocate(size, sizeof(compute_grasp_interface__srv__ComputeGrasp_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = compute_grasp_interface__srv__ComputeGrasp_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        compute_grasp_interface__srv__ComputeGrasp_Response__fini(&data[i - 1]);
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
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__fini(compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * array)
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
      compute_grasp_interface__srv__ComputeGrasp_Response__fini(&array->data[i]);
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

compute_grasp_interface__srv__ComputeGrasp_Response__Sequence *
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * array = (compute_grasp_interface__srv__ComputeGrasp_Response__Sequence *)allocator.allocate(sizeof(compute_grasp_interface__srv__ComputeGrasp_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__destroy(compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__are_equal(const compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * lhs, const compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!compute_grasp_interface__srv__ComputeGrasp_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__copy(
  const compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * input,
  compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(compute_grasp_interface__srv__ComputeGrasp_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    compute_grasp_interface__srv__ComputeGrasp_Response * data =
      (compute_grasp_interface__srv__ComputeGrasp_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!compute_grasp_interface__srv__ComputeGrasp_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          compute_grasp_interface__srv__ComputeGrasp_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!compute_grasp_interface__srv__ComputeGrasp_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

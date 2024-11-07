// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from compute_grasp_interface:srv/ComputeGrasp.idl
// generated code does not contain a copyright notice

#ifndef COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__FUNCTIONS_H_
#define COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "compute_grasp_interface/msg/rosidl_generator_c__visibility_control.h"

#include "compute_grasp_interface/srv/detail/compute_grasp__struct.h"

/// Initialize srv/ComputeGrasp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * compute_grasp_interface__srv__ComputeGrasp_Request
 * )) before or use
 * compute_grasp_interface__srv__ComputeGrasp_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Request__init(compute_grasp_interface__srv__ComputeGrasp_Request * msg);

/// Finalize srv/ComputeGrasp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
void
compute_grasp_interface__srv__ComputeGrasp_Request__fini(compute_grasp_interface__srv__ComputeGrasp_Request * msg);

/// Create srv/ComputeGrasp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * compute_grasp_interface__srv__ComputeGrasp_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
compute_grasp_interface__srv__ComputeGrasp_Request *
compute_grasp_interface__srv__ComputeGrasp_Request__create();

/// Destroy srv/ComputeGrasp message.
/**
 * It calls
 * compute_grasp_interface__srv__ComputeGrasp_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
void
compute_grasp_interface__srv__ComputeGrasp_Request__destroy(compute_grasp_interface__srv__ComputeGrasp_Request * msg);

/// Check for srv/ComputeGrasp message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Request__are_equal(const compute_grasp_interface__srv__ComputeGrasp_Request * lhs, const compute_grasp_interface__srv__ComputeGrasp_Request * rhs);

/// Copy a srv/ComputeGrasp message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Request__copy(
  const compute_grasp_interface__srv__ComputeGrasp_Request * input,
  compute_grasp_interface__srv__ComputeGrasp_Request * output);

/// Initialize array of srv/ComputeGrasp messages.
/**
 * It allocates the memory for the number of elements and calls
 * compute_grasp_interface__srv__ComputeGrasp_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__init(compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * array, size_t size);

/// Finalize array of srv/ComputeGrasp messages.
/**
 * It calls
 * compute_grasp_interface__srv__ComputeGrasp_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
void
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__fini(compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * array);

/// Create array of srv/ComputeGrasp messages.
/**
 * It allocates the memory for the array and calls
 * compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence *
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__create(size_t size);

/// Destroy array of srv/ComputeGrasp messages.
/**
 * It calls
 * compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
void
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__destroy(compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * array);

/// Check for srv/ComputeGrasp message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__are_equal(const compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * lhs, const compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * rhs);

/// Copy an array of srv/ComputeGrasp messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Request__Sequence__copy(
  const compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * input,
  compute_grasp_interface__srv__ComputeGrasp_Request__Sequence * output);

/// Initialize srv/ComputeGrasp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * compute_grasp_interface__srv__ComputeGrasp_Response
 * )) before or use
 * compute_grasp_interface__srv__ComputeGrasp_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Response__init(compute_grasp_interface__srv__ComputeGrasp_Response * msg);

/// Finalize srv/ComputeGrasp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
void
compute_grasp_interface__srv__ComputeGrasp_Response__fini(compute_grasp_interface__srv__ComputeGrasp_Response * msg);

/// Create srv/ComputeGrasp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * compute_grasp_interface__srv__ComputeGrasp_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
compute_grasp_interface__srv__ComputeGrasp_Response *
compute_grasp_interface__srv__ComputeGrasp_Response__create();

/// Destroy srv/ComputeGrasp message.
/**
 * It calls
 * compute_grasp_interface__srv__ComputeGrasp_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
void
compute_grasp_interface__srv__ComputeGrasp_Response__destroy(compute_grasp_interface__srv__ComputeGrasp_Response * msg);

/// Check for srv/ComputeGrasp message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Response__are_equal(const compute_grasp_interface__srv__ComputeGrasp_Response * lhs, const compute_grasp_interface__srv__ComputeGrasp_Response * rhs);

/// Copy a srv/ComputeGrasp message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Response__copy(
  const compute_grasp_interface__srv__ComputeGrasp_Response * input,
  compute_grasp_interface__srv__ComputeGrasp_Response * output);

/// Initialize array of srv/ComputeGrasp messages.
/**
 * It allocates the memory for the number of elements and calls
 * compute_grasp_interface__srv__ComputeGrasp_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__init(compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * array, size_t size);

/// Finalize array of srv/ComputeGrasp messages.
/**
 * It calls
 * compute_grasp_interface__srv__ComputeGrasp_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
void
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__fini(compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * array);

/// Create array of srv/ComputeGrasp messages.
/**
 * It allocates the memory for the array and calls
 * compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence *
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__create(size_t size);

/// Destroy array of srv/ComputeGrasp messages.
/**
 * It calls
 * compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
void
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__destroy(compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * array);

/// Check for srv/ComputeGrasp message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__are_equal(const compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * lhs, const compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * rhs);

/// Copy an array of srv/ComputeGrasp messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_compute_grasp_interface
bool
compute_grasp_interface__srv__ComputeGrasp_Response__Sequence__copy(
  const compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * input,
  compute_grasp_interface__srv__ComputeGrasp_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMPUTE_GRASP_INTERFACE__SRV__DETAIL__COMPUTE_GRASP__FUNCTIONS_H_

#ifndef __NDS32_CONTROLLER_MATH_H__
#define __NDS32_CONTROLLER_MATH_H__
/***************************************************************************
 * Copyright (C) 2012-2018 Andes Technology Corporation                    *
 * All rights reserved.                                                    *
 ***************************************************************************/

/**
 * @defgroup controller Controller Functions
 */
#ifdef  __cplusplus
extern "C"
{
#endif

#include "nds_controller_math.h"

// Clarke Transform
//
/// Clarke transform of floating-point input.
#define nds32_clarke_f32 nds_clarke_f32

/// Clarke transform of q31 input.
#define nds32_clarke_q31 nds_clarke_q31

/// Inverse Clarke transform of floating-point input.
#define nds32_inv_clarke_f32 nds_inv_clarke_f32

/// Inverse Clarke transform of q31 input.
#define nds32_inv_clarke_q31 nds_inv_clarke_q31

// Park Transform
//
/// Park transform of floating-point input.
#define nds32_park_f32 nds_park_f32

/// Park transform of q31 input.
#define nds32_park_q31 nds_park_q31

/// Inverse Park transform of floating-point input.
#define nds32_inv_park_f32 nds_inv_park_f32

/// Inverse Park transform of q31 input.
#define nds32_inv_park_q31 nds_inv_park_q31

// PID Control
//
/// Structure for the floating-point PID Control.
#define nds32_pid_f32_t nds_pid_f32_t

/// PID control of floating-point input.
#define nds32_pid_f32 nds_pid_f32

/// PID initializatopn control function of floating-point formats.
#define nds32_init_pid_f32 nds_init_pid_f32

/// Structure for the Q31 PID Control.
#define nds32_pid_q31_t nds_pid_q31_t

/// PID control of Q31 input.
#define nds32_pid_q31 nds_pid_q31

/// PID initializatopn control function of Q31 formats.
#define nds32_init_pid_q31 nds_init_pid_q31

/// Structure for the Q15 PID Control.
#define nds32_pid_q15_t nds_pid_q15_t

/// PID control of Q15 input.
#define nds32_pid_q15 nds_pid_q15

/// PID initializatopn control function of Q15 formats.
#define nds32_init_pid_q15 nds_init_pid_q15

#ifdef  __cplusplus
}
#endif
#endif // __NDS32_TRANSFORM_MATH_H__

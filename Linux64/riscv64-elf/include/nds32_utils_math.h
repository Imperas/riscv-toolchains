#ifndef __NDS32_UTILS_MATH_H__
#define __NDS32_UTILS_MATH_H__
/***************************************************************************
 * Copyright (C) 2012-2018 Andes Technology Corporation                    *
 * All rights reserved.                                                    *
 ***************************************************************************/

/**
 * @defgroup utils Utils Functions
 * This set of functions implements sine, cosine, arctanm, and square root.
 * There are separate functions for Q15, Q31, and floating-point data.
 */
#ifdef  __cplusplus
extern "C"
{
#endif

#include "nds_utils_math.h"

// Cosine and Sine
#define nds32_cos_f32 nds_cos_f32
#define nds32_cos_q31 nds_cos_q31
#define nds32_cos_q15 nds_cos_q15

#define nds32_sin_f32 nds_sin_f32
#define nds32_sin_q31 nds_sin_q31
#define nds32_sin_q15 nds_sin_q15

// Arc tangent
#define nds32_atan_f32 nds_atan_f32
#define nds32_atan_q31 nds_atan_q31
#define nds32_atan_q15 nds_atan_q15
#define nds32_atan2_f32 nds_atan2_f32
#define nds32_atan2_q15 nds_atan2_q15
#define nds32_atan2_q31 nds_atan2_q31

// Square Root
#define nds32_sqrt_f32 nds_sqrt_f32
#define nds32_sqrt_q31 nds_sqrt_q31
#define nds32_sqrt_q15 nds_sqrt_q15

// Convert function
#define nds32_convert_f32_q15 nds_convert_f32_q15
#define nds32_convert_f32_q31 nds_convert_f32_q31
#define nds32_convert_f32_q7  nds_convert_f32_q7
#define nds32_convert_q15_f32 nds_convert_q15_f32
#define nds32_convert_q15_q31 nds_convert_q15_q31
#define nds32_convert_q15_q7  nds_convert_q15_q7
#define nds32_convert_q31_f32 nds_convert_q31_f32
#define nds32_convert_q31_q15 nds_convert_q31_q15
#define nds32_convert_q31_q7  nds_convert_q31_q7
#define nds32_convert_q7_f32  nds_convert_q7_f32
#define nds32_convert_q7_q15  nds_convert_q7_q15
#define nds32_convert_q7_q31  nds_convert_q7_q31

// Duplicate function
#define nds32_dup_f32 nds_dup_f32
#define nds32_dup_q15 nds_dup_q15
#define nds32_dup_q31 nds_dup_q31
#define nds32_dup_q7  nds_dup_q7

// Set function
#define nds32_set_f32 nds_set_f32
#define nds32_set_q15 nds_set_q15
#define nds32_set_q31 nds_set_q31
#define nds32_set_q7  nds_set_q7

#ifdef  __cplusplus
}
#endif
#endif // __NDS32_UTILS_MATH_H__

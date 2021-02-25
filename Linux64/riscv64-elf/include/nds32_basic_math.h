#ifndef __NDS32_BASIC_MATH_H__
#define __NDS32_BASIC_MATH_H__
/***************************************************************************
 * Copyright (C) 2012-2018 Andes Technology Corporation                    *
 * All rights reserved.                                                    *
 ***************************************************************************/

/**
 * @defgroup basic Basic Functions
 */
#ifdef  __cplusplus
extern "C"
{
#endif

#include "nds_basic_math.h"

// Absolute value
/// Absolute value of floating-potint vectors
#define nds32_abs_f32   nds_abs_f32

/// Absolute value of Q31 vectors.
#define nds32_abs_q31   nds_abs_q31

/// Absolute value of Q15 vectors.
#define nds32_abs_q15   nds_abs_q15

/// Absolute value of Q7 vectors.
#define nds32_abs_q7    nds_abs_q7

// Addition
/// Addition of floating-potint vectors.
#define nds32_add_f32   nds_add_f32

/// Addition of Q31 vectors.
#define nds32_add_q31   nds_add_q31

/// Addition of Q15 vectors.
#define nds32_add_q15   nds_add_q15

/// Addition of Q7 vectors.
#define nds32_add_q7    nds_add_q7

/// Addition of U8 vectors.
#define nds32_add_u8_u16 nds_add_u8_u16

// Subtraction
/// Subtraction of floating-point vectors.
#define nds32_sub_f32   nds_sub_f32

/// Subtraction of Q31 vectors.
#define nds32_sub_q31   nds_sub_q31

/// Subtraction of Q15 vectors.
#define nds32_sub_q15 nds_sub_q15

/// Subtraction of Q7 vectors.
#define nds32_sub_q7  nds_sub_q7

/// Subtraction of u8 vectors.
#define nds32_sub_u8_q7 nds_sub_u8_q7

// Multiplication
/// Multiplication of floating-point vectors.
#define nds32_mul_f32 nds_mul_f32

/// Multiplication of Q31 vectors.
#define nds32_mul_q31 nds_mul_q31

/// Multiplication of Q15 vectors.
#define nds32_mul_q15 nds_mul_q15

/// Multiplication of Q7 vectors.
#define nds32_mul_q7  nds_mul_q7

/// Multiplication of u8 vectors.
#define nds32_mul_u8_u16 nds_mul_u8_u16

// Division
/// Division of floating-point vectors.
#define nds32_div_f32 nds_div_f32

/// Division of q31 inputs.
#define nds32_div_q31 nds_div_q31

/// Division of q63 inputs divided by a positive 32 bits.
#define nds32_div_s64_u32 nds_div_s64_u32

/// Division of positive 64-bits inputs divided by a positive 32-bits.
#define nds32_div_u64_u32 nds_div_u64_u32

// Negation
/// Negation of floating-potint vectors.
#define nds32_neg_f32 nds_neg_f32

/// Negation of q31 vectors.
#define nds32_neg_q31 nds_neg_q31

/// Negation of q15 vectors.
#define nds32_neg_q15 nds_neg_q15

/// Negation of q15 vectors.
#define nds32_neg_q7 nds_neg_q7

// Dot Production
/// Dot production of floating-point vectors.
#define nds32_dprod_f32 nds_dprod_f32
#define nds32_dot_prod_f32 nds_dprod_f32

/// Dot production of q31 vectors.
#define nds32_dprod_q31 nds_dprod_q31
#define nds32_dot_prod_q31 nds_dprod_q31

/// Dot production of q15 vectors.
#define nds32_dprod_q15 nds_dprod_q15
#define nds32_dot_prod_q15  nds_dprod_q15

/// Dot production of u8 * q15 vectors.
#define nds32_dprod_u8xq15    nds_dprod_u8xq15
#define nds32_dot_prod_u8xq15 nds_dprod_u8xq15

/// Dot production of q7 vectors.
#define nds32_dprod_q7    nds_dprod_q7
#define nds32_dot_prod_q7 nds_dprod_q7

/// Dot production of u8 vectors.
#define nds32_dprod_u8    nds_dprod_u8
#define nds32_dot_prod_u8 nds_dprod_u8

// Offset
/// The offset of floating-point vectors.
#define nds32_offset_f32 nds_offset_f32

/// The offset of q31 vectors.
#define nds32_offset_q31 nds_offset_q31

/// The offset of q15 vectors.
#define nds32_offset_q15 nds_offset_q15

/// The offset of q7 vectors.
void nds32_offset_q7(q7_t *src, q7_t offset, q7_t *dst, uint32_t size);
#define nds32_offset_q7  nds_offset_q7

/// The offset of U8 vectors.
#define nds32_offset_u8 nds_offset_u8

// Scale
/// To multiply a floating-point vectors by a floating-point scale.
#define nds32_scale_f32 nds_scale_f32

/// To multiply a q31 vectors by a q31 scale.
#define nds32_scale_q31 nds_scale_q31

/// To multiply a q15 vectors by a q15 scale.
#define nds32_scale_q15 nds_scale_q15

/// To multiply a q7 vectors by a q7 scale.
#define nds32_scale_q7 nds_scale_q7

/// To multiply a u8 vectors by a q7 scale.
#define nds32_scale_u8 nds_scale_u8

// Shift
/// Shifts a q15 vector with a specified shift number.
#define nds32_shift_q15 nds_shift_q15

/// Shifts a q31 vector with a specified shift number.
#define nds32_shift_q31 nds_shift_q31

/// Shifts a q7 vector with a specified shift number.
#define nds32_shift_q7 nds_shift_q7

/// Shifts a u8 vector for a specified shift number.
#define nds32_shift_u8 nds_shift_u8

#ifdef  __cplusplus
}
#endif
#endif // __NDS32_BASIC_MATH_H__

#ifndef __NDS32_COMPLEX_MATH_H__
#define __NDS32_COMPLEX_MATH_H__
/***************************************************************************
 * Copyright (C) 2012-2018 Andes Technology Corporation                    *
 * All rights reserved.                                                    *
 ***************************************************************************/

/**
 * @defgroup complex Complex Functions
 * This set of functions operates on complex data vectors.
 * The data in the input <code>src</code> vector and output <code>dst</code>
 * are arranged in the array as: [real, imag, real, imag, real, imag, ...).
 */
#ifdef  __cplusplus
extern "C"
{
#endif

#include "nds_complex_math.h"

// Complex Conjugate
//
/// Conjugate the floating-potint complex vector.
#define nds32_cconj_f32    nds_cconj_f32
#define nds32_clx_conj_f32 nds_cconj_f32

/// Conjugate the q15 complex vector.
#define nds32_cconj_q15    nds_cconj_q15
#define nds32_clx_conj_q15 nds_cconj_q15

/// Conjugate the q31 complex vector.
#define nds32_cconj_q31    nds_cconj_q31
#define nds32_clx_conj_q31 nds_cconj_q31

// Complex Dot Product
//
/// Compute the dot product of the floating-potint complex vector.
#define nds32_cdprod_f32       nds_cdprod_f32
#define nds32_clx_dot_prod_f32 nds_cdprod_f32

/// Compute the dot product type2 of the floating-potint complex vector.
#define nds32_cdprod_typ2_f32       nds_cdprod_typ2_f32
#define nds32_clx_dot_prod_typ2_f32 nds_cdprod_typ2_f32

/// Compute the dot product of the q15 complex vector.
#define nds32_cdprod_q15       nds_cdprod_q15
#define nds32_clx_dot_prod_q15 nds_cdprod_q15

/// Compute the dot product type2 of the q15 complex vector.
#define nds32_cdprod_typ2_q15       nds_cdprod_typ2_q15
#define nds32_clx_dot_prod_typ2_q15 nds_cdprod_typ2_q15

/// Compute the dot product of the q31 complex vector.
#define nds32_cdprod_q31       nds_cdprod_q31
#define nds32_clx_dot_prod_q31 nds_cdprod_q31

/// Compute the dot product type2 of the q31 complex vector.
#define nds32_cdprod_typ2_q31       nds_cdprod_typ2_q31
#define nds32_clx_dot_prod_typ2_q31 nds_cdprod_typ2_q31

// Complex Magnitude
//
/// Compute the magnitude of the floating-potint complex vector.
#define nds32_cmag_f32    nds_cmag_f32
#define nds32_clx_mag_f32 nds_cmag_f32

/// Compute the magnitude of the q15 complex vector.
#define nds32_cmag_q15    nds_cmag_q15
#define nds32_clx_mag_q15 nds_cmag_q15

/// Compute the magnitude of the q31 complex vector.
#define nds32_cmag_q31    nds_cmag_q31
#define nds32_clx_mag_q31 nds_cmag_q31

// Complex Magnitude Squared
/// Compute the magnitude squared of the floating-potint complex vector.
#define nds32_cmag_sqr_f32    nds_cmag_sqr_f32
#define nds32_clx_mag_sqr_f32 nds_cmag_sqr_f32

/// Compute the magnitude squared of the q15 complex vector.
#define nds32_cmag_sqr_q15    nds_cmag_sqr_q15
#define nds32_clx_mag_sqr_q15 nds_cmag_sqr_q15

/// Compute the magnitude squared of the q31 complex vector.
#define nds32_cmag_sqr_q31    nds_cmag_sqr_q31
#define nds32_clx_mag_sqr_q31 nds_cmag_sqr_q31

// Complex Multiplication
//
/// Multiply two folating-point complex vector.
#define nds32_cmul_f32    nds_cmul_f32
#define nds32_clx_mul_f32 nds_cmul_f32

/// Multiply two q15 complex vector.
#define nds32_cmul_q15    nds_cmul_q15
#define nds32_clx_mul_q15 nds_cmul_q15

///Multiply two q31 complex vector.
#define nds32_cmul_q31    nds_cmul_q31
#define nds32_clx_mul_q31 nds_cmul_q31

// Complex-by-Real Multiplication
//
/// Multiply the folating-point complex vector by a real vector.
#define nds32_cmul_real_f32    nds_cmul_real_f32
#define nds32_clx_mul_real_f32 nds_cmul_real_f32

/// Multiply the q15 complex vector by a real vector.
#define nds32_cmul_real_q15    nds_cmul_real_q15
#define nds32_clx_mul_real_q15 nds_cmul_real_q15

/// Multiply the q31 complex vector by a real vector.
#define nds32_cmul_real_q31    nds_cmul_real_q31
#define nds32_clx_mul_real_q31 nds_cmul_real_q31

#ifdef  __cplusplus
}
#endif
#endif // __NDS32_COMPLEX_MATH_H__

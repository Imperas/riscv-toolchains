#ifndef __NDS_TRANSFORM_MATH_H__
#define __NDS_TRANSFORM_MATH_H__
/***************************************************************************
 * Copyright (C) 2012-2018 Andes Technology Corporation                    *
 * All rights reserved.                                                    *
 ***************************************************************************/

/**
 * @defgroup transform Transform Functions
 */
#ifdef  __cplusplus
extern "C"
{
#endif

#include "nds_math_types.h"

// CFFT/CIFFT-Radix2
/// Floating-point Radix-2 Complex FFT/IFFT Function
int32_t nds_cfft_rd2_f32(float32_t *src, uint32_t m);
int32_t nds_cifft_rd2_f32(float32_t *src, uint32_t m);

/// Q15 Radix-2 Complex FFT/IFFT Function
int32_t nds_cfft_rd2_q15(q15_t *src, uint32_t m);
int32_t nds_cifft_rd2_q15(q15_t *src, uint32_t m);

/// Q31 Radix-2 Complex FFT/IFFT Function
int32_t nds_cfft_rd2_q31(q31_t *src, uint32_t m);
int32_t nds_cifft_rd2_q31(q31_t *src, uint32_t m);

// CFFT/IFFT-Radix4
/// Floating-point Radix-4 Complex FFT/IFFT Function
int32_t nds_cfft_rd4_f32(float32_t *src, uint32_t m);
int32_t nds_cifft_rd4_f32(float32_t *src, uint32_t m);

/// Q15 Radix-4 Complex FFT/IFFT Function
int32_t nds_cfft_rd4_q15(q15_t *src, uint32_t m);
int32_t nds_cifft_rd4_q15(q15_t *src, uint32_t m);

/// Q31 Radix-4 Complex FFT/IFFT Function
int32_t nds_cfft_rd4_q31(q31_t *src, uint32_t m);
int32_t nds_cifft_rd4_q31(q31_t *src, uint32_t m);

// CFFT/CIFFT
/// Floating-point Complex FFT/IFFT Function
void nds_cfft_f32(float32_t *src, uint32_t m);
void nds_cifft_f32(float32_t *src, uint32_t m);

/// Q15 Complex FFT/IFFT Function
void nds_cfft_q15(q15_t *src, uint32_t m);
void nds_cifft_q15(q15_t *src, uint32_t m);

/// Q31 Complex FFT/IFFT Function
void nds_cfft_q31(q31_t *src, uint32_t m);
void nds_cifft_q31(q31_t *src, uint32_t m);

// Real-FFT
/// Floating-point Real FFT/IFFT Function
int32_t nds_rfft_f32(float32_t *src, uint32_t m);
int32_t nds_rifft_f32(float32_t *src, uint32_t m);

/// Q15 Real FFT/IFFT Function
int32_t nds_rfft_q15(q15_t *src, uint32_t m);
int32_t nds_rifft_q15(q15_t *src, uint32_t m);

/// Q31 Real FFT/IFFT Function
int32_t nds_rfft_q31(q31_t *src, uint32_t m);
int32_t nds_rifft_q31(q31_t *src, uint32_t m);

// DCT/IDCT Type II
/// Floating-point DCT/IDCT Type II Function
void nds_dct_f32(float32_t *src, uint32_t m);
void nds_idct_f32(float32_t *src, uint32_t m);

/// Q15 DCT/IDCT Type II Function
void nds_dct_q15(q15_t *src, uint32_t m);
void nds_idct_q15(q15_t *src, uint32_t m);

/// Q31 DCT/IDCT Type II Function
void nds_dct_q31(q31_t *src, uint32_t m);
void nds_idct_q31(q31_t *src, uint32_t m);

// DCT Type IV
/// Floating-point DCT/IDCT Type IV Function
void nds_dct4_f32(float32_t *src, uint32_t m);
void nds_idct4_f32(float32_t *src, uint32_t m);

/// Q15 DCT/IDCT Type IV Function
void nds_dct4_q15(q15_t *src, uint32_t m);
void nds_idct4_q15(q15_t *src, uint32_t m);

/// Q31 DCT/IDCT Type IV Function
void nds_dct4_q31(q31_t *src, uint32_t m);
void nds_idct4_q31(q31_t *src, uint32_t m);

#ifdef  __cplusplus
}
#endif
#endif // __NDS32_TRANSFORM_MATH_H__

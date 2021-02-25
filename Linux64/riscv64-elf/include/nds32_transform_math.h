#ifndef __NDS32_TRANSFORM_MATH_H__
#define __NDS32_TRANSFORM_MATH_H__
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

#include "nds_transform_math.h"

// CFFT/CIFFT-Radix2
//
/// Floating-point Radix-2 Complex FFT/IFFT Function
#define nds32_cfft_rd2_f32     nds_cfft_rd2_f32
#define nds32_cfft_radix2_f32  nds_cfft_rd2_f32
#define nds32_cifft_rd2_f32    nds_cifft_rd2_f32
#define nds32_cifft_radix2_f32 nds_cifft_rd2_f32

/// Q15 Radix-2 Complex FFT/IFFT Function
#define nds32_cfft_rd2_q15     nds_cfft_rd2_q15
#define nds32_cfft_radix2_q15  nds_cfft_rd2_q15
#define nds32_cifft_rd2_q15    nds_cifft_rd2_q15
#define nds32_cifft_radix2_q15 nds_cifft_rd2_q15

/// Q31 Radix-2 Complex FFT/IFFT Function
#define nds32_cfft_rd2_q31     nds_cfft_rd2_q31
#define nds32_cfft_radix2_q31  nds_cfft_rd2_q31
#define nds32_cifft_rd2_q31    nds_cifft_rd2_q31
#define nds32_cifft_radix2_q31 nds_cifft_rd2_q31

// CFFT/IFFT-Radix4
//
/// Floating-point Radix-4 Complex FFT/IFFT Function
#define nds32_cfft_rd4_f32     nds_cfft_rd4_f32
#define nds32_cfft_radix4_f32  nds_cfft_rd4_f32
#define nds32_cifft_rd4_f32    nds_cifft_rd4_f32
#define nds32_cifft_radix4_f32 nds_cifft_rd4_f32

/// Q15 Radix-4 Complex FFT/IFFT Function
#define nds32_cfft_rd4_q15     nds_cfft_rd4_q15
#define nds32_cfft_radix4_q15  nds_cfft_rd4_q15
#define nds32_cifft_rd4_q15    nds_cifft_rd4_q15
#define nds32_cifft_radix4_q15 nds_cifft_rd4_q15

/// Q31 Radix-4 Complex FFT/IFFT Function
#define nds32_cfft_rd4_q31     nds_cfft_rd4_q31
#define nds32_cfft_radix4_q31  nds_cfft_rd4_q31
#define nds32_cifft_rd4_q31    nds_cifft_rd4_q31
#define nds32_cifft_radix4_q31 nds_cifft_rd4_q31

// CFFT/CIFFT
//
/// Floating-point Complex FFT/IFFT Function
#define nds32_cfft_f32 nds_cfft_f32
#define nds32_cifft_f32 nds_cifft_f32

/// Q15 Complex FFT/IFFT Function
#define nds32_cfft_q15 nds_cfft_q15
#define nds32_cifft_q15 nds_cifft_q15

/// Q31 Complex FFT/IFFT Function
#define nds32_cfft_q31 nds_cfft_q31
#define nds32_cifft_q31 nds_cifft_q31

// Real-FFT/IFFT
//
/// Floating-point Real FFT/IFFT Function
#define nds32_rfft_f32  nds_rfft_f32
#define nds32_rifft_f32 nds_rifft_f32

/// Q15 Real FFT/IFFT Function
#define nds32_rfft_q15  nds_rfft_q15
#define nds32_rifft_q15 nds_rifft_q15

/// Q31 Real FFT/IFFT Function
#define nds32_rfft_q31  nds_rfft_q31
#define nds32_rifft_q31 nds_rifft_q31

// DCT/IDCT Type II
//
/// Floating-point DCT/IDCT Type II Function
#define nds32_dct_f32 nds_dct_f32
#define nds32_idct_f32 nds_idct_f32

/// Q15 DCT/IDCT Type II Function
#define nds32_dct_q15 nds_dct_q15
#define nds32_idct_q15 nds_idct_q15

/// Q31 DCT/IDCT Type II Function
#define nds32_dct_q31 nds_dct_q31
#define nds32_idct_q31 nds_idct_q31

// DCT/IDCT Type IV
//
/// Floating-point DCT/IDCT Type IV Function
#define nds32_dct4_f32 nds_dct4_f32
#define nds32_idct4_f32 nds_idct4_f32

/// Q15 DCT/IDCT Type IV Function
#define nds32_dct4_q15 nds_dct4_q15
#define nds32_idct4_q15 nds_idct4_q15

/// Q31 DCT/IDCT Type IV Function
#define nds32_dct4_q31 nds_dct4_q31
#define nds32_idct4_q31 nds_idct4_q31

#ifdef  __cplusplus
}
#endif
#endif // __NDS32_TRANSFORM_MATH_H__

#ifndef __NDS32_FILTERING_MATH_H__
#define __NDS32_FILTERING_MATH_H__
/***************************************************************************
 * Copyright (C) 2012-2018 Andes Technology Corporation                    *
 * All rights reserved.                                                    *
 ***************************************************************************/

/**
 * @defgroup filtering Filtering Functions
 */


#ifdef  __cplusplus
extern "C"
{
#endif

#include "nds_filtering_math.h"

// Standard FIR filter
//
/// Structure for the floating-point standard FIR filter.
#define nds32_fir_f32_t nds_fir_f32_t

/// Function for the floating-point FIR filter.
#define nds32_fir_f32 nds_fir_f32

/// Structure for the Q31 standard FIR filter.
#define  nds32_fir_q31_t nds_fir_q31_t

/// Function for the q31 FIR filter.
#define nds32_fir_q31 nds_fir_q31

/// Function for the q31 FIR filter.
#define nds32_fir_fast_q31 nds_fir_fast_q31

/// Structure for the Q15 standard FIR filter.
#define nds32_fir_q15_t nds_fir_q15_t

/// Function for the q15 FIR filter.
#define nds32_fir_q15 nds_fir_q15

/// Function for the q15 FIR fast filter.
#define nds32_fir_fast_q15 nds_fir_fast_q15

/// Structure for the Q7 standard FIR Filters.
#define nds32_fir_q7_t nds_fir_q7_t

/// Function for the q31 FIR filter.
#define nds32_fir_q7 nds_fir_q7

// Lattice FIR filter
//
/// Structure for the floating-point Lattice FIR filter.
#define nds32_lfir_f32_t nds_lfir_f32_t

/// Function for the floating-point lattice FIR filter.
#define nds32_lfir_f32 nds_lfir_f32

/// Structure for the q15 Lattice FIR filter.
#define nds32_lfir_q15_t nds_lfir_q15_t

/// Function for the q15 lattice FIR filter.
#define nds32_lfir_q15 nds_lfir_q15

/// Structure for the q31 Lattice FIR filter.
#define nds32_lfir_q31_t nds_lfir_q31_t

/// Function for the q31 lattice FIR filter.
#define nds32_lfir_q31 nds_lfir_q31

// Decimator FIR Filters
//
/// Structure for the floating-point Decimator FIR Filters.
#define nds32_dcmfir_f32_t nds_dcmfir_f32_t

/// Function for the floating-point Decimator FIR Filters.
#define nds32_dcmfir_f32 nds_dcmfir_f32

/// Structure for the q15 Decimator FIR Filters.
#define nds32_dcmfir_q15_t nds_dcmfir_q15_t

/// Function for the q15 Decimator FIR Filters.
#define nds32_dcmfir_q15 nds_dcmfir_q15

/// Structure for the q31 Decimator FIR Filters.
#define nds32_dcmfir_q31_t nds_dcmfir_q31_t

/// Function for the q31 Decimator FIR Filters.
#define nds32_dcmfir_q31 nds_dcmfir_q31

// Upsampling FIR Filters
//
/// Structure for the floating-point Upsampling FIR Filters.
#define nds32_upsplfir_f32_t nds_upsplfir_f32_t

/// Function for the floating-point Upsampling FIR Filters.
#define nds32_upsplfir_f32 nds_upsplfir_f32

/// Structure for the Q15 Upsampling FIR Filters.
#define nds32_upsplfir_q15_t nds_upsplfir_q15_t

/// Function for the Q15 Upsampling FIR Filters.
#define nds32_upsplfir_q15 nds_upsplfir_q15

/// Structure for the Q31 Upsampling FIR Filters.
#define nds32_upsplfir_q31_t nds_upsplfir_q31_t

/// Function for the Q31 Upsampling FIR Filters.
#define nds32_upsplfir_q31 nds_upsplfir_q31

// Sparse FIR Filters
//
/// Structure for the flaoting-point Sparse FIR Filters.
#define nds32_spafir_f32_t nds_spafir_f32_t

/// Function for the flaoting-point Sparse FIR Filters.
#define nds32_spafir_f32 nds_spafir_f32

/// Structure for the Q15 Sparse FIR Filters.
#define nds32_spafir_q15_t nds_spafir_q15_t

/// Function for the Q15 Sparse FIR Filters.
#define nds32_spafir_q15 nds_spafir_q15

/// Structure for the Q31 Sparse FIR Filters.
#define nds32_spafir_q31_t nds_spafir_q31_t

/// Function for the Q31 Sparse FIR Filters.
#define nds32_spafir_q31 nds_spafir_q31

/// Structure for the Q7 Sparse FIR Filters.
#define nds32_spafir_q7_t nds_spafir_q7_t

/// Function for the Q7 Sparse FIR Filters.
#define nds32_spafir_q7 nds_spafir_q7

// Standard LMS filte
//
/// Structure for the floatint-point standard LMS Filters.
#define nds32_lms_f32_t nds_lms_f32_t

/// Function for the floating-point LMS filter.
#define nds32_lms_f32 nds_lms_f32

/// Structure for the Q31 standard LMS Filters.
#define nds32_lms_q31_t nds_lms_q31_t

/// Function for the q31 LMS filter.
#define nds32_lms_q31 nds_lms_q31

/// Structure for the Q15 standard LMS Filters.
#define nds32_lms_q15_t nds_lms_q15_t

/// Function for the q15 LMS filter.
#define nds32_lms_q15 nds_lms_q15

// Normalized LMS filter
//
/// Structure for the f32 normalized LMS filter.
#define nds32_nlms_f32_t nds_nlms_f32_t

/// Function for the f32 normalized LMS filter.
#define nds32_nlms_f32 nds_nlms_f32

/// Structure for the q31 normalized LMS filter.
#define nds32_nlms_q31_t nds_nlms_q31_t

/// Function for the q31 normalized LMS filter.
#define nds32_nlms_q31 nds_nlms_q31

/// Structure for the q15 normalized LMS filter.
#define nds32_nlms_q15_t nds_nlms_q15_t

/// Function for the q15 normalized LMS filter.
#define nds32_nlms_q15 nds_nlms_q15

//  Convolution
//
/// Convolution of the floating-point vectors.
#define nds32_conv_f32 nds_conv_f32

/// Convolution of the q15 vectors.
#define nds32_conv_q15 nds_conv_q15

/// Convolution of the q31 vectors.
#define nds32_conv_q31 nds_conv_q31

/// Convolution of the q7 vectors.
#define nds32_conv_q7 nds_conv_q7

/// Partial Convolution of the floating-point vectors.
#define nds32_conv_partial_f32 nds_conv_partial_f32

/// Partial Convolution of the q15 vectors.
#define nds32_conv_partial_q15 nds_conv_partial_q15

/// Partial Convolution of the q31 vectors.
#define nds32_conv_partial_q31 nds_conv_partial_q31

/// Partial Convolution of the q7 vectors.
#define nds32_conv_partial_q7 nds_conv_partial_q7

//  Correlation
//
/// Correlation of the floating-point vectors.
#define nds32_corr_f32 nds_corr_f32

/// Correlation of the q15 vectors.
#define nds32_corr_q15 nds_corr_q15

/// Correlation of the q31 vectors.
#define nds32_corr_q31 nds_corr_q31

/// Correlation of the q7 vectors.
#define nds32_corr_q7 nds_corr_q7


// Biquad Filter
//
/// Structure for the f32 Biquad Filter.
#define nds32_bq_df1_f32_t     nds_bq_df1_f32_t
#define nds32_biquad_df1_f32_t nds32_bq_df1_f32_t

/// Function for the f32 Biquad Filter.
#define nds32_bq_df1_f32     nds_bq_df1_f32
#define nds32_biquad_df1_f32 nds32_bq_df1_f32

/// Structure for the direct transposed form II Biquad Cascade floating-point filter.
#define nds32_bq_df2T_f32_t     nds_bq_df2T_f32_t
#define nds32_biquad_df2T_f32_t nds_bq_df2T_f32_t

/// Function for the direct transposed form II Biquad Cascade floating-point filter.
#define nds32_bq_df2T_f32     nds_bq_df2T_f32
#define nds32_biquad_df2T_f32 nds_bq_df2T_f32

/// Structure for the stereo direct transposed form II Biquad Cascade floating-point filter.
#define nds32_bq_stereo_df2T_f32_t     nds_bq_stereo_df2T_f32_t
#define nds32_biquad_stereo_df2T_f32_t nds_bq_stereo_df2T_f32_t

/// Function for the stereo direct transposed form II Biquad Cascade floating-point filter.
#define nds32_bq_stereo_df2T_f32     nds_bq_stereo_df2T_f32
#define nds32_biquad_stereo_df2T_f32 nds_bq_stereo_df2T_f32

/// Structure for the f64 Biquad Filter.
#define nds32_bq_df2T_f64_t     nds_bq_df2T_f64_t
#define nds32_biquad_df2T_f64_t nds_bq_df2T_f64_t

/// Function for the f64 Biquad Filter.
#define nds32_bq_df2T_f64     nds_bq_df2T_f64
#define nds32_biquad_df2T_f64 nds_bq_df2T_f64

/// Structure for the q15 Biquad Filter.
#define nds32_bq_df1_q15_t     nds_bq_df1_q15_t
#define nds32_biquad_df1_q15_t nds_bq_df1_q15_t

/// Function for the q15 Biquad Filter.
#define nds32_bq_df1_q15     nds_bq_df1_q15
#define nds32_biquad_df1_q15 nds_bq_df1_q15

/// Structure for the q31 Biquad Filter.
#define nds32_bq_df1_q31_t     nds_bq_df1_q31_t
#define nds32_biquad_df1_q31_t nds_bq_df1_q31_t

/// Function for the q31 Biquad Filter.
#define nds32_bq_df1_q31     nds_bq_df1_q31
#define nds32_biquad_df1_q31 nds_bq_df1_q31

/// Structure for the 32x64 Q31 biquadratic cascade filter
#define nds32_bq_df1_32x64_q31_t     nds_bq_df1_32x64_q31_t
#define nds32_biquad_df1_32x64_q31_t nds32_bq_df1_32x64_q31_t

/// Function for the 32x64 Q31 biquadratic cascade filter
#define nds32_bq_df1_32x64_q31     nds_bq_df1_32x64_q31
#define nds32_biquad_df1_32x64_q31 nds32_bq_df1_32x64_q31

// Lattice IIR filter
//
/// Structure for the floating-point lattice IIR filter.
#define nds32_liir_f32_t nds_liir_f32_t

/// Function for the floating-point lattice IIR filter.
#define nds32_liir_f32 nds_liir_f32

/// Structure for the q31 lattice IIR filter.
#define nds32_liir_q31_t nds_liir_q31_t

/// Function for the q31 lattice IIR filter.
#define nds32_liir_q31 nds_liir_q31

/// Function for the q31 lattice fast IIR filter.
#define nds32_liir_fast_q31 nds_liir_fast_q31

/// Structure for the q15 lattice IIR filter.
#define nds32_liir_q15_t nds_liir_q15_t

/// Function for the q15 lattice IIR filter.
#define nds32_liir_q15 nds_liir_q15

/// Function for the q15 lattice fast IIR filter.
#define nds32_liir_fast_q15 nds_liir_fast_q15

#ifdef  __cplusplus
}
#endif
#endif // __NDS32_FILTERING_MATH_H__

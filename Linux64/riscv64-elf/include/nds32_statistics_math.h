#ifndef __NDS32_STATISTICS_MATH_H__
#define __NDS32_STATISTICS_MATH_H__
/***************************************************************************
 * Copyright (C) 2012-2018 Andes Technology Corporation                    *
 * All rights reserved.                                                    *
 ***************************************************************************/

/**
 * @defgroup statistics Statistics Functions
 */
#ifdef  __cplusplus
extern "C"
{
#endif

#include "nds_statistics_math.h"

// Maximum
//
/// Maximum value of the floating-potint vector.
#define nds32_max_f32 nds_max_f32

/// Maximum value of the q15 vector.
#define nds32_max_q15 nds_max_q15

/// Maximum value of the q31 vector.
#define nds32_max_q31 nds_max_q31

/// Maximum value of the q7 vector.
#define nds32_max_q7  nds_max_q7

/// Maximum value of the u8 vector.
#define nds32_max_u8 nds_max_u8

// Minimum
//
/// Minimum value of the floating-potint vector.
#define nds32_min_f32 nds_min_f32

/// Minimum value of the q15 vector.
#define nds32_min_q15 nds_min_q15

/// Minimum value of the q31 vector.
#define nds32_min_q31 nds_min_q31

/// Minimum value of the q7 vector.
#define nds32_min_q7  nds_min_q7

/// Minimum value of the u8 vector.
#define nds32_min_u8  nds_min_u8

// Mean
//
/// Mean value of the floating-potint vector.
#define nds32_mean_f32 nds_mean_f32

/// Mean value of the q15 vector.
#define nds32_mean_q15 nds_mean_q15

/// Mean value of the q31 vector.
#define nds32_mean_q31 nds_mean_q31

/// Mean value of the q7 vector.
#define nds32_mean_q7  nds_mean_q7

/// Mean value of the u8 vector.
#define nds32_mean_u8  nds_mean_u8

// Sun of the Squares
//
/// Sum of the squares of the floating-potint vector.
#define nds32_pwr_f32 nds_pwr_f32
#define nds32_sos_f32 nds_pwr_f32

/// Sum of the squares of the q15 vector.
#define nds32_pwr_q15 nds_pwr_q15
#define nds32_sos_q15 nds_pwr_q15

/// Sum of the squares of the q31 vector.
#define nds32_pwr_q31 nds_pwr_q31
#define nds32_sos_q31 nds_pwr_q31

/// Sum of the squares of the q7 vector.
#define nds32_pwr_q7  nds_pwr_q7
#define nds32_sos_q7  nds_pwr_q7

// Root Mean Square
//
/// RMS of the floating-potint vector.
#define nds32_rms_f32 nds_rms_f32

/// RMS of the q15 vector.
#define nds32_rms_q15 nds_rms_q15

/// RMS of the q31 vector.
#define nds32_rms_q31 nds_rms_q31

// Standard deviation
//
/// Standard deviation of the floating-potint vector.
#define nds32_std_f32 nds_std_f32

/// Standard deviation of the q15 vector.
#define nds32_std_q15 nds_std_q15

/// Standard deviation of the q31 vector.
#define nds32_std_q31 nds_std_q31

/// Standard deviation of the u8 vector.
#define nds32_std_u8  nds_std_u8

// Variance
//
/// Variance of the floating-potint vector.
#define nds32_var_f32 nds_var_f32

/// Variance of the q15 vector.
#define nds32_var_q15 nds_var_q15

/// Variance of the q31 vector.
#define nds32_var_q31 nds_var_q31

#ifdef  __cplusplus
}
#endif
#endif // __NDS32_STATISTICS_MATH_H__

#ifndef __NDS_COMPLEX_MATH_H__
#define __NDS_COMPLEX_MATH_H__
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

#include "nds_math_types.h"

// Complex Conjugate
/**
 * @brief Conjugate the floating-potint complex vector.
 * @param[in]		*src the input complex vector.
 * @param[out]		*dst the output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 */
void nds_cconj_f32(const float32_t *src, float32_t *dst, uint32_t size);

/**
 * @brief Conjugate the q15 complex vector.
 * @param[in]		*src the input complex vector.
 * @param[out]		*dst the output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 *
 * The Q15 value INT16_MIN (0x8000) will be saturated to the maximum
 * allowable positive value INT16_MAX.
 */
void nds_cconj_q15(const q15_t *src, q15_t *dst, uint32_t size);

/**
 * @brief Conjugate the q31 complex vector.
 * @param[in]		*src the input complex vector.
 * @param[out]		*dst the output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 *
 * The Q31 value INT32_MIN (0x80000000) will be saturated to the maximum
 * allowable positive value INT32_MAX.
 */
void nds_cconj_q31(const q31_t *src, q31_t *dst, uint32_t size);

// Complex Dot Product
/**
 * @brief Compute the dot product of the floating-potint complex vector.
 * @param[in]		*src1 the first input complex vector.
 * @param[in]		*src2 the second input complex vector.
 * @param[in]		size  size of the vectors.
 * @param[out]		*dst  the output vector.
 * @return none.
 */
void nds_cdprod_f32(const float32_t *src1, const float32_t *src2, uint32_t size, float32_t *dst);

/**
 * @brief Compute the dot product type2 of the floating-potint complex vector.
 * @param[in]		*src1 the first input complex vector.
 * @param[in]		*src2 the second input complex vector.
 * @param[in]		size  size of the vectors.
 * @param[out]		*rout the real sum of the output.
 * @param[out]		*iout the imag sum of the output.
 * @return none.
 */
void nds_cdprod_typ2_f32(const float32_t *src1, const float32_t *src2, uint32_t size, float32_t *rout, float32_t *iout);

/**
 * @brief Compute the dot product of the q15 complex vector.
 * @param[in]		*src1 the first input complex vector.
 * @param[in]		*src2 the second input complex vector.
 * @param[in]		size  size of the vectors.
 * @param[out]		*dst  the output vector.
 * @return none.
 *
 * The multiplication outputs are in 1.15 x 1.15 = 2.30 format and
 * finally output is shift into 3.13 format.
 */
void nds_cdprod_q15(const q15_t *src1, const q15_t *src2, uint32_t size, q15_t *dst);

/**
 * @brief Compute the dot product type2 of the q15 complex vector.
 * @param[in]		*src1 the first input complex vector.
 * @param[in]		*src2 the second input complex vector.
 * @param[in]		size  size of the vectors.
 * @param[out]		*rout the real sum of the output.
 * @param[out]		*iout the imag sum of the output.
 * @return none.
 *
 * The multiplication outputs are in 1.15 x 1.15 = 2.30 format and
 * finally output is shift into q24 format.
 */
void nds_cdprod_typ2_q15(const q15_t *src1, const q15_t *src2, uint32_t size, q31_t *rout, q31_t *iout);

/**
 * @brief Compute the dot product of the q31 complex vector.
 * @param[in]		*src1 the first input complex vector.
 * @param[in]		*src2 the second input complex vector.
 * @param[in]		size  size of the vectors.
 * @param[out]		*dst  the output vector.
 * @return none.
 *
 * The multiplication outputs are in 1.31 x 1.31 = 2.62 format and
 * finally output is shift into 3.29 format.
 */
void nds_cdprod_q31(const q31_t *src1, const q31_t *src2, uint32_t size, q31_t *dst);


/**
 * @brief Compute the dot product type2 of the q31 complex vector.
 * @param[in]		*src1 the first input complex vector.
 * @param[in]		*src2 the second input complex vector.
 * @param[in]		size  size of the vectors.
 * @param[out]		*rout the real sum of the output.
 * @param[out]		*iout the imag sum of the output.
 * @return none.
 *
 * The multiplication outputs are in 1.31 x 1.31 = 2.62 format and
 * finally output is shift into q48 format.
 */
void nds_cdprod_typ2_q31(const q31_t *src1, const q31_t *src2, uint32_t size, q63_t *rout, q63_t *iout);

// Complex Magnitude
/**
 * @brief Compute the magnitude of the floating-potint complex vector.
 * @param[in]		*src points to the input complex vector.
 * @param[out]		*dst points to the output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 */
void nds_cmag_f32(const float32_t *src, float32_t *dst, uint32_t size);

/**
 * @brief Compute the magnitude of the q15 complex vector.
 * @param[in]		*src points to the input complex vector.
 * @param[out]		*dst points to the output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 *
 * The multiplication outputs are in 1.15 x 1.15 = 2.30 format and
 * finally output is shift into 2.14 format.
 */
void nds_cmag_q15(const q15_t *src, q15_t *dst, uint32_t size);

/**
 * @brief Compute the magnitude of the q31 complex vector.
 * @param[in]		*src points to the input complex vector.
 * @param[out]		*dst points to the output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 *
 * The multiplication outputs are in 1.31 x 1.31 = 2.62 format and
 * finally output is shift into 2.30 format.
 */
void nds_cmag_q31(const q31_t *src, q31_t *dst, uint32_t size);

// Complex Magnitude Squared
/**
 * @brief Compute the magnitude squared of the floating-potint complex
 *        vector.
 * @param[in]		*src points to the input complex vector.
 * @param[out]		*dst points to the output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 */
void nds_cmag_sqr_f32(const float32_t *src, float32_t *dst, uint32_t size);

/**
 * @brief Compute the magnitude squared of the q15 complex vector.
 * @param[in]		*src points to the input complex vector.
 * @param[out]		*dst points to the output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 *
 * The multiplication outputs are in 1.15 x 1.15 = 2.30 format and
 * finally output is shift into 3.13 format.
 */
void nds_cmag_sqr_q15(const q15_t *src, q15_t *dst, uint32_t size);

/**
 * @brief Compute the magnitude squared of the q31 complex vector.
 * @param[in]		*src points to the input complex vector.
 * @param[out]		*dst points to the output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 *
 * The multiplication outputs are in 1.31 x 1.31 = 2.62 format and
 * finally output is shift into 3.29 format.
 */
void nds_cmag_sqr_q31(const q31_t *src, q31_t *dst, uint32_t size);

// Complex Multiplication
/**
 * @brief Multiply two folating-point complex vector.
 * @param[in]		*src1 the first input complex vector.
 * @param[in]		*src2 the second input complex vector.
 * @param[out]		*dst  output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 */
void nds_cmul_f32(const float32_t *src1, const float32_t *src2, float32_t *dst, uint32_t size);

/**
 * @brief Multiply two q15 complex vector.
 * @param[in]		*src1 the first input complex vector.
 * @param[in]		*src2 the second input complex vector.
 * @param[out]		*dst  output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 *
 * The multiplication outputs are in 1.15 x 1.15 = 2.30 format and
 * finally output is shift into 3.13 format.
 */
void nds_cmul_q15(const q15_t *src1, const q15_t *src2, q15_t *dst, uint32_t size);

/**
 * @brief Multiply two q31 complex vector.
 * @param[in]		*src1 the first input complex vector.
 * @param[in]		*src2 the second input complex vector.
 * @param[out]		*dst  output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 *
 * The multiplication outputs are in 1.31 x 1.31 = 2.62 format and
 * finally output is shift into 3.29 format.
 */
void nds_cmul_q31(const q31_t *src1, const q31_t *src2, q31_t *dst, uint32_t size);

// Complex-by-Real Multiplication
/**
 * @brief Multiply the folating-point complex vector by a real vector.
 * @param[in]		*src  the input complex vector.
 * @param[in]		*real the input real vector.
 * @param[out]		*dst  output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 */
void nds_cmul_real_f32(const float32_t *src, const float32_t *real, float32_t *dst, uint32_t size);

/**
 * @brief Multiply the q15 complex vector by a real vector.
 * @param[in]		*src  the input complex vector.
 * @param[in]		*real the input real vector.
 * @param[out]		*dst  output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 *
 * Output results will be saturated in Q15 range [0x8000 0x7FFF].
 */
void nds_cmul_real_q15(const q15_t *src, const q15_t *real, q15_t *dst, uint32_t size);

/**
 * @brief Multiply the q31 complex vector by a real vector.
 * @param[in]		*src  the input complex vector.
 * @param[in]		*real the input real vector.
 * @param[out]		*dst  output complex vector.
 * @param[in]		size size of the vectors.
 * @return none.
 *
 * Output results will be saturated in Q31 range[0x80000000 0x7FFFFFFF].
 */
void nds_cmul_real_q31(const q31_t *src, const q31_t *real, q31_t *dst, uint32_t size);

#ifdef  __cplusplus
}
#endif
#endif // __NDS32_COMPLEX_MATH_H__

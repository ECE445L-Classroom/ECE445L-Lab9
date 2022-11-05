/**
 * @file fft.h
 * @author Jared McArthur
 * @brief Header file to abstract out stm32 fft functions/assembly files
 * @version 0.1
 * @date 2022-11-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

#include <stdint.h>

/**
 * @brief Fast fourier transform with 64 elements
 * 
 * @param out   output buffer (64 elements)
 * @param in    input buffer (64 elements)
 */
void fft_64(uint32_t out[], uint32_t in[]);

/**
 * @brief Fast fourier transform with 256 elements.
 * 
 * @param out   output buffer (256 elements)
 * @param in    input buffer (256 elements)
 */
void fft_256(uint32_t out, uint32_t in[]);

/**
 * @brief Fast fourier transform with 1024 elements.
 * 
 * @param out   output buffer (1024 elements)
 * @param in    input buffer (1024 elements)
 */
void fft_1024(uint32_t out, uint32_t in[]);

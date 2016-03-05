#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.Binarizer
struct Binarizer_t776273154;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;

#include "mscorlib_System_Object837106420.h"

// ZXing.BinaryBitmap
struct  BinaryBitmap_t3743800508  : public Object_t
{
	// ZXing.Binarizer ZXing.BinaryBitmap::binarizer
	Binarizer_t776273154 * ___binarizer_0;
	// ZXing.Common.BitMatrix ZXing.BinaryBitmap::matrix
	BitMatrix_t3148694213 * ___matrix_1;
};

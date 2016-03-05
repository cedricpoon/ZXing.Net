#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPointCallback
struct ResultPointCallback_t108115140;

#include "mscorlib_System_Object837106420.h"

// ZXing.QrCode.Internal.Detector
struct  Detector_t480229319  : public Object_t
{
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.Detector::image
	BitMatrix_t3148694213 * ___image_0;
	// ZXing.ResultPointCallback ZXing.QrCode.Internal.Detector::resultPointCallback
	ResultPointCallback_t108115140 * ___resultPointCallback_1;
};

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
// ZXing.Common.Detector.WhiteRectangleDetector
struct WhiteRectangleDetector_t1696912017;

#include "mscorlib_System_Object837106420.h"

// ZXing.Datamatrix.Internal.Detector
struct  Detector_t995695992  : public Object_t
{
	// ZXing.Common.BitMatrix ZXing.Datamatrix.Internal.Detector::image
	BitMatrix_t3148694213 * ___image_0;
	// ZXing.Common.Detector.WhiteRectangleDetector ZXing.Datamatrix.Internal.Detector::rectangleDetector
	WhiteRectangleDetector_t1696912017 * ___rectangleDetector_1;
};

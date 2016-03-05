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
// ZXing.ResultPoint
struct ResultPoint_t887763807;

#include "mscorlib_System_Object837106420.h"

// ZXing.PDF417.Internal.BoundingBox
struct  BoundingBox_t745095594  : public Object_t
{
	// ZXing.Common.BitMatrix ZXing.PDF417.Internal.BoundingBox::image
	BitMatrix_t3148694213 * ___image_0;
	// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::<TopLeft>k__BackingField
	ResultPoint_t887763807 * ___U3CTopLeftU3Ek__BackingField_1;
	// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::<TopRight>k__BackingField
	ResultPoint_t887763807 * ___U3CTopRightU3Ek__BackingField_2;
	// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::<BottomLeft>k__BackingField
	ResultPoint_t887763807 * ___U3CBottomLeftU3Ek__BackingField_3;
	// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::<BottomRight>k__BackingField
	ResultPoint_t887763807 * ___U3CBottomRightU3Ek__BackingField_4;
	// System.Int32 ZXing.PDF417.Internal.BoundingBox::<MinX>k__BackingField
	int32_t ___U3CMinXU3Ek__BackingField_5;
	// System.Int32 ZXing.PDF417.Internal.BoundingBox::<MaxX>k__BackingField
	int32_t ___U3CMaxXU3Ek__BackingField_6;
	// System.Int32 ZXing.PDF417.Internal.BoundingBox::<MinY>k__BackingField
	int32_t ___U3CMinYU3Ek__BackingField_7;
	// System.Int32 ZXing.PDF417.Internal.BoundingBox::<MaxY>k__BackingField
	int32_t ___U3CMaxYU3Ek__BackingField_8;
};

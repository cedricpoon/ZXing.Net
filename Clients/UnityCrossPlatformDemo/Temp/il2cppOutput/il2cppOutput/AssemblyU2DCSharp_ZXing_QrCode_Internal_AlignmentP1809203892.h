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
// System.Collections.Generic.IList`1<ZXing.QrCode.Internal.AlignmentPattern>
struct IList_1_t887494856;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.ResultPointCallback
struct ResultPointCallback_t108115140;

#include "mscorlib_System_Object837106420.h"

// ZXing.QrCode.Internal.AlignmentPatternFinder
struct  AlignmentPatternFinder_t1809203892  : public Object_t
{
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.AlignmentPatternFinder::image
	BitMatrix_t3148694213 * ___image_0;
	// System.Collections.Generic.IList`1<ZXing.QrCode.Internal.AlignmentPattern> ZXing.QrCode.Internal.AlignmentPatternFinder::possibleCenters
	Object_t* ___possibleCenters_1;
	// System.Int32 ZXing.QrCode.Internal.AlignmentPatternFinder::startX
	int32_t ___startX_2;
	// System.Int32 ZXing.QrCode.Internal.AlignmentPatternFinder::startY
	int32_t ___startY_3;
	// System.Int32 ZXing.QrCode.Internal.AlignmentPatternFinder::width
	int32_t ___width_4;
	// System.Int32 ZXing.QrCode.Internal.AlignmentPatternFinder::height
	int32_t ___height_5;
	// System.Single ZXing.QrCode.Internal.AlignmentPatternFinder::moduleSize
	float ___moduleSize_6;
	// System.Int32[] ZXing.QrCode.Internal.AlignmentPatternFinder::crossCheckStateCount
	Int32U5BU5D_t1809983122* ___crossCheckStateCount_7;
	// ZXing.ResultPointCallback ZXing.QrCode.Internal.AlignmentPatternFinder::resultPointCallback
	ResultPointCallback_t108115140 * ___resultPointCallback_8;
};

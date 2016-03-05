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
// System.Collections.Generic.List`1<ZXing.QrCode.Internal.FinderPattern>
struct List_1_t3318202692;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.ResultPointCallback
struct ResultPointCallback_t108115140;

#include "mscorlib_System_Object837106420.h"

// ZXing.QrCode.Internal.FinderPatternFinder
struct  FinderPatternFinder_t449776913  : public Object_t
{
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.FinderPatternFinder::image
	BitMatrix_t3148694213 * ___image_4;
	// System.Collections.Generic.List`1<ZXing.QrCode.Internal.FinderPattern> ZXing.QrCode.Internal.FinderPatternFinder::possibleCenters
	List_1_t3318202692 * ___possibleCenters_5;
	// System.Boolean ZXing.QrCode.Internal.FinderPatternFinder::hasSkipped
	bool ___hasSkipped_6;
	// System.Int32[] ZXing.QrCode.Internal.FinderPatternFinder::crossCheckStateCount
	Int32U5BU5D_t1809983122* ___crossCheckStateCount_7;
	// ZXing.ResultPointCallback ZXing.QrCode.Internal.FinderPatternFinder::resultPointCallback
	ResultPointCallback_t108115140 * ___resultPointCallback_8;
};

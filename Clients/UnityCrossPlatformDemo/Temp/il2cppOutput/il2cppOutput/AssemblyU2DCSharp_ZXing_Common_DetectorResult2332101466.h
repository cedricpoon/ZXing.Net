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
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;

#include "mscorlib_System_Object837106420.h"

// ZXing.Common.DetectorResult
struct  DetectorResult_t2332101466  : public Object_t
{
	// ZXing.Common.BitMatrix ZXing.Common.DetectorResult::<Bits>k__BackingField
	BitMatrix_t3148694213 * ___U3CBitsU3Ek__BackingField_0;
	// ZXing.ResultPoint[] ZXing.Common.DetectorResult::<Points>k__BackingField
	ResultPointU5BU5D_t128061510* ___U3CPointsU3Ek__BackingField_1;
};

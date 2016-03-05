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
// System.Collections.Generic.List`1<ZXing.ResultPoint[]>
struct List_1_t925020479;

#include "mscorlib_System_Object837106420.h"

// ZXing.PDF417.Internal.PDF417DetectorResult
struct  PDF417DetectorResult_t3676013870  : public Object_t
{
	// ZXing.Common.BitMatrix ZXing.PDF417.Internal.PDF417DetectorResult::<Bits>k__BackingField
	BitMatrix_t3148694213 * ___U3CBitsU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<ZXing.ResultPoint[]> ZXing.PDF417.Internal.PDF417DetectorResult::<Points>k__BackingField
	List_1_t925020479 * ___U3CPointsU3Ek__BackingField_1;
};

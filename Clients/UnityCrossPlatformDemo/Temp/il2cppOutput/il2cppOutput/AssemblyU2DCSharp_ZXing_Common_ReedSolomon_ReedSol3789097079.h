#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.Common.ReedSolomon.GenericGF
struct GenericGF_t561507308;
// System.Collections.Generic.IList`1<ZXing.Common.ReedSolomon.GenericGFPoly>
struct IList_1_t951822706;

#include "mscorlib_System_Object837106420.h"

// ZXing.Common.ReedSolomon.ReedSolomonEncoder
struct  ReedSolomonEncoder_t3789097079  : public Object_t
{
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.ReedSolomonEncoder::field
	GenericGF_t561507308 * ___field_0;
	// System.Collections.Generic.IList`1<ZXing.Common.ReedSolomon.GenericGFPoly> ZXing.Common.ReedSolomon.ReedSolomonEncoder::cachedGenerators
	Object_t* ___cachedGenerators_1;
};

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.PDF417.Internal.BoundingBox
struct BoundingBox_t745095594;
// ZXing.PDF417.Internal.Codeword[]
struct CodewordU5BU5D_t3356725375;

#include "mscorlib_System_Object837106420.h"

// ZXing.PDF417.Internal.DetectionResultColumn
struct  DetectionResultColumn_t907098395  : public Object_t
{
	// ZXing.PDF417.Internal.BoundingBox ZXing.PDF417.Internal.DetectionResultColumn::<Box>k__BackingField
	BoundingBox_t745095594 * ___U3CBoxU3Ek__BackingField_1;
	// ZXing.PDF417.Internal.Codeword[] ZXing.PDF417.Internal.DetectionResultColumn::<Codewords>k__BackingField
	CodewordU5BU5D_t3356725375* ___U3CCodewordsU3Ek__BackingField_2;
};

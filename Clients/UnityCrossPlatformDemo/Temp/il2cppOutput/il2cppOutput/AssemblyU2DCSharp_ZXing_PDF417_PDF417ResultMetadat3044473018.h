#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "mscorlib_System_Object837106420.h"

// ZXing.PDF417.PDF417ResultMetadata
struct  PDF417ResultMetadata_t3044473018  : public Object_t
{
	// System.Int32 ZXing.PDF417.PDF417ResultMetadata::<SegmentIndex>k__BackingField
	int32_t ___U3CSegmentIndexU3Ek__BackingField_0;
	// System.String ZXing.PDF417.PDF417ResultMetadata::<FileId>k__BackingField
	String_t* ___U3CFileIdU3Ek__BackingField_1;
	// System.Int32[] ZXing.PDF417.PDF417ResultMetadata::<OptionalData>k__BackingField
	Int32U5BU5D_t1809983122* ___U3COptionalDataU3Ek__BackingField_2;
	// System.Boolean ZXing.PDF417.PDF417ResultMetadata::<IsLastSegment>k__BackingField
	bool ___U3CIsLastSegmentU3Ek__BackingField_3;
};

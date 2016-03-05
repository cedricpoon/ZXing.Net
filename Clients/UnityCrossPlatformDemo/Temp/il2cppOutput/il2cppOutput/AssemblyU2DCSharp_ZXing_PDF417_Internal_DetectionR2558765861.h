#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.PDF417.Internal.BarcodeMetadata
struct BarcodeMetadata_t1740712946;
// ZXing.PDF417.Internal.DetectionResultColumn[]
struct DetectionResultColumnU5BU5D_t3745312794;
// ZXing.PDF417.Internal.BoundingBox
struct BoundingBox_t745095594;

#include "mscorlib_System_Object837106420.h"

// ZXing.PDF417.Internal.DetectionResult
struct  DetectionResult_t2558765861  : public Object_t
{
	// ZXing.PDF417.Internal.BarcodeMetadata ZXing.PDF417.Internal.DetectionResult::<Metadata>k__BackingField
	BarcodeMetadata_t1740712946 * ___U3CMetadataU3Ek__BackingField_1;
	// ZXing.PDF417.Internal.DetectionResultColumn[] ZXing.PDF417.Internal.DetectionResult::<DetectionResultColumns>k__BackingField
	DetectionResultColumnU5BU5D_t3745312794* ___U3CDetectionResultColumnsU3Ek__BackingField_2;
	// ZXing.PDF417.Internal.BoundingBox ZXing.PDF417.Internal.DetectionResult::<Box>k__BackingField
	BoundingBox_t745095594 * ___U3CBoxU3Ek__BackingField_3;
	// System.Int32 ZXing.PDF417.Internal.DetectionResult::<ColumnCount>k__BackingField
	int32_t ___U3CColumnCountU3Ek__BackingField_4;
};

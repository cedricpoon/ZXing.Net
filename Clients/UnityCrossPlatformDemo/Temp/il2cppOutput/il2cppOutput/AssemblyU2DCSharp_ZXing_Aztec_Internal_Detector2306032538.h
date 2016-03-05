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
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "mscorlib_System_Object837106420.h"

// ZXing.Aztec.Internal.Detector
struct  Detector_t2306032538  : public Object_t
{
	// ZXing.Common.BitMatrix ZXing.Aztec.Internal.Detector::image
	BitMatrix_t3148694213 * ___image_0;
	// System.Boolean ZXing.Aztec.Internal.Detector::compact
	bool ___compact_1;
	// System.Int32 ZXing.Aztec.Internal.Detector::nbLayers
	int32_t ___nbLayers_2;
	// System.Int32 ZXing.Aztec.Internal.Detector::nbDataBlocks
	int32_t ___nbDataBlocks_3;
	// System.Int32 ZXing.Aztec.Internal.Detector::nbCenterLayers
	int32_t ___nbCenterLayers_4;
	// System.Int32 ZXing.Aztec.Internal.Detector::shift
	int32_t ___shift_5;
};
struct Detector_t2306032538_StaticFields{
	// System.Int32[] ZXing.Aztec.Internal.Detector::EXPECTED_CORNER_BITS
	Int32U5BU5D_t1809983122* ___EXPECTED_CORNER_BITS_6;
};

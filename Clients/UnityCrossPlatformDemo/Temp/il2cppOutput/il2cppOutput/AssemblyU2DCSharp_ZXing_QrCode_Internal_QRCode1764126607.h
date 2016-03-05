#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.QrCode.Internal.Mode
struct Mode_t3664701860;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t2622323615;
// ZXing.QrCode.Internal.Version
struct Version_t1383592089;
// ZXing.QrCode.Internal.ByteMatrix
struct ByteMatrix_t1667372778;

#include "mscorlib_System_Object837106420.h"

// ZXing.QrCode.Internal.QRCode
struct  QRCode_t1764126607  : public Object_t
{
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.QRCode::<Mode>k__BackingField
	Mode_t3664701860 * ___U3CModeU3Ek__BackingField_1;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.QRCode::<ECLevel>k__BackingField
	ErrorCorrectionLevel_t2622323615 * ___U3CECLevelU3Ek__BackingField_2;
	// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.QRCode::<Version>k__BackingField
	Version_t1383592089 * ___U3CVersionU3Ek__BackingField_3;
	// System.Int32 ZXing.QrCode.Internal.QRCode::<MaskPattern>k__BackingField
	int32_t ___U3CMaskPatternU3Ek__BackingField_4;
	// ZXing.QrCode.Internal.ByteMatrix ZXing.QrCode.Internal.QRCode::<Matrix>k__BackingField
	ByteMatrix_t1667372778 * ___U3CMatrixU3Ek__BackingField_5;
};
struct QRCode_t1764126607_StaticFields{
	// System.Int32 ZXing.QrCode.Internal.QRCode::NUM_MASK_PATTERNS
	int32_t ___NUM_MASK_PATTERNS_0;
};

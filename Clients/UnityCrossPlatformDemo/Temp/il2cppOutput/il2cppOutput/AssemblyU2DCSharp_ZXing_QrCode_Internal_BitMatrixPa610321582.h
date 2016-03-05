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
// ZXing.QrCode.Internal.Version
struct Version_t1383592089;
// ZXing.QrCode.Internal.FormatInformation
struct FormatInformation_t2600783990;

#include "mscorlib_System_Object837106420.h"

// ZXing.QrCode.Internal.BitMatrixParser
struct  BitMatrixParser_t610321582  : public Object_t
{
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.BitMatrixParser::bitMatrix
	BitMatrix_t3148694213 * ___bitMatrix_0;
	// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.BitMatrixParser::parsedVersion
	Version_t1383592089 * ___parsedVersion_1;
	// ZXing.QrCode.Internal.FormatInformation ZXing.QrCode.Internal.BitMatrixParser::parsedFormatInfo
	FormatInformation_t2600783990 * ___parsedFormatInfo_2;
	// System.Boolean ZXing.QrCode.Internal.BitMatrixParser::mirrored
	bool ___mirrored_3;
};

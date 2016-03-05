#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.QrCode.Internal.Version[]
struct VersionU5BU5D_t608543972;
// ZXing.QrCode.Internal.Version/ECBlocks[]
struct ECBlocksU5BU5D_t974762157;

#include "mscorlib_System_Object837106420.h"

// ZXing.QrCode.Internal.Version
struct  Version_t1383592089  : public Object_t
{
	// System.Int32 ZXing.QrCode.Internal.Version::versionNumber
	int32_t ___versionNumber_2;
	// System.Int32[] ZXing.QrCode.Internal.Version::alignmentPatternCenters
	Int32U5BU5D_t1809983122* ___alignmentPatternCenters_3;
	// ZXing.QrCode.Internal.Version/ECBlocks[] ZXing.QrCode.Internal.Version::ecBlocks
	ECBlocksU5BU5D_t974762157* ___ecBlocks_4;
	// System.Int32 ZXing.QrCode.Internal.Version::totalCodewords
	int32_t ___totalCodewords_5;
};
struct Version_t1383592089_StaticFields{
	// System.Int32[] ZXing.QrCode.Internal.Version::VERSION_DECODE_INFO
	Int32U5BU5D_t1809983122* ___VERSION_DECODE_INFO_0;
	// ZXing.QrCode.Internal.Version[] ZXing.QrCode.Internal.Version::VERSIONS
	VersionU5BU5D_t608543972* ___VERSIONS_1;
};

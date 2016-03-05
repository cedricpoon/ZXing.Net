#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.Datamatrix.Internal.Version[]
struct VersionU5BU5D_t1779672399;
// ZXing.Datamatrix.Internal.Version/ECBlocks
struct ECBlocks_t1320702916;

#include "mscorlib_System_Object837106420.h"

// ZXing.Datamatrix.Internal.Version
struct  Version_t1899058762  : public Object_t
{
	// System.Int32 ZXing.Datamatrix.Internal.Version::versionNumber
	int32_t ___versionNumber_1;
	// System.Int32 ZXing.Datamatrix.Internal.Version::symbolSizeRows
	int32_t ___symbolSizeRows_2;
	// System.Int32 ZXing.Datamatrix.Internal.Version::symbolSizeColumns
	int32_t ___symbolSizeColumns_3;
	// System.Int32 ZXing.Datamatrix.Internal.Version::dataRegionSizeRows
	int32_t ___dataRegionSizeRows_4;
	// System.Int32 ZXing.Datamatrix.Internal.Version::dataRegionSizeColumns
	int32_t ___dataRegionSizeColumns_5;
	// ZXing.Datamatrix.Internal.Version/ECBlocks ZXing.Datamatrix.Internal.Version::ecBlocks
	ECBlocks_t1320702916 * ___ecBlocks_6;
	// System.Int32 ZXing.Datamatrix.Internal.Version::totalCodewords
	int32_t ___totalCodewords_7;
};
struct Version_t1899058762_StaticFields{
	// ZXing.Datamatrix.Internal.Version[] ZXing.Datamatrix.Internal.Version::VERSIONS
	VersionU5BU5D_t1779672399* ___VERSIONS_0;
};

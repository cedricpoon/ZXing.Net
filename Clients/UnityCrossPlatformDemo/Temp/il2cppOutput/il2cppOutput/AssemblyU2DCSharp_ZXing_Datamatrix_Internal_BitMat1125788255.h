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
// ZXing.Datamatrix.Internal.Version
struct Version_t1899058762;

#include "mscorlib_System_Object837106420.h"

// ZXing.Datamatrix.Internal.BitMatrixParser
struct  BitMatrixParser_t1125788255  : public Object_t
{
	// ZXing.Common.BitMatrix ZXing.Datamatrix.Internal.BitMatrixParser::mappingBitMatrix
	BitMatrix_t3148694213 * ___mappingBitMatrix_0;
	// ZXing.Common.BitMatrix ZXing.Datamatrix.Internal.BitMatrixParser::readMappingMatrix
	BitMatrix_t3148694213 * ___readMappingMatrix_1;
	// ZXing.Datamatrix.Internal.Version ZXing.Datamatrix.Internal.BitMatrixParser::version
	Version_t1899058762 * ___version_2;
};

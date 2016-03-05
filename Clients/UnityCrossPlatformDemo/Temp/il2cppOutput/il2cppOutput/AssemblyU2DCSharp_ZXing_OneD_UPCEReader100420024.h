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
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;

#include "AssemblyU2DCSharp_ZXing_OneD_UPCEANReader2611679461.h"

// ZXing.OneD.UPCEReader
struct  UPCEReader_t100420024  : public UPCEANReader_t2611679461
{
	// System.Int32[] ZXing.OneD.UPCEReader::decodeMiddleCounters
	Int32U5BU5D_t1809983122* ___decodeMiddleCounters_13;
};
struct UPCEReader_t100420024_StaticFields{
	// System.Int32[] ZXing.OneD.UPCEReader::MIDDLE_END_PATTERN
	Int32U5BU5D_t1809983122* ___MIDDLE_END_PATTERN_11;
	// System.Int32[][] ZXing.OneD.UPCEReader::NUMSYS_AND_CHECK_DIGIT_PATTERNS
	Int32U5BU5DU5BU5D_t158556903* ___NUMSYS_AND_CHECK_DIGIT_PATTERNS_12;
};

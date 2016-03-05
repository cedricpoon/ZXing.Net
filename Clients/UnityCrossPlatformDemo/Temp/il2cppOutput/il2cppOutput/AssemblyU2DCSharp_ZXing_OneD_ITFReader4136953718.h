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

#include "AssemblyU2DCSharp_ZXing_OneD_OneDReader1128947577.h"

// ZXing.OneD.ITFReader
struct  ITFReader_t4136953718  : public OneDReader_t1128947577
{
	// System.Int32 ZXing.OneD.ITFReader::narrowLineWidth
	int32_t ___narrowLineWidth_8;
};
struct ITFReader_t4136953718_StaticFields{
	// System.Int32 ZXing.OneD.ITFReader::MAX_AVG_VARIANCE
	int32_t ___MAX_AVG_VARIANCE_5;
	// System.Int32 ZXing.OneD.ITFReader::MAX_INDIVIDUAL_VARIANCE
	int32_t ___MAX_INDIVIDUAL_VARIANCE_6;
	// System.Int32[] ZXing.OneD.ITFReader::DEFAULT_ALLOWED_LENGTHS
	Int32U5BU5D_t1809983122* ___DEFAULT_ALLOWED_LENGTHS_7;
	// System.Int32[] ZXing.OneD.ITFReader::START_PATTERN
	Int32U5BU5D_t1809983122* ___START_PATTERN_9;
	// System.Int32[] ZXing.OneD.ITFReader::END_PATTERN_REVERSED
	Int32U5BU5D_t1809983122* ___END_PATTERN_REVERSED_10;
	// System.Int32[][] ZXing.OneD.ITFReader::PATTERNS
	Int32U5BU5DU5BU5D_t158556903* ___PATTERNS_11;
};

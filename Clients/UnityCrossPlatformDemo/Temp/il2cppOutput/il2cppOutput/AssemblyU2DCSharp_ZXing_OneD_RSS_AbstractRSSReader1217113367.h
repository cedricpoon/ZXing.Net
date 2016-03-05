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
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "AssemblyU2DCSharp_ZXing_OneD_OneDReader1128947577.h"

// ZXing.OneD.RSS.AbstractRSSReader
struct  AbstractRSSReader_t1217113367  : public OneDReader_t1128947577
{
	// System.Int32[] ZXing.OneD.RSS.AbstractRSSReader::decodeFinderCounters
	Int32U5BU5D_t1809983122* ___decodeFinderCounters_6;
	// System.Int32[] ZXing.OneD.RSS.AbstractRSSReader::dataCharacterCounters
	Int32U5BU5D_t1809983122* ___dataCharacterCounters_7;
	// System.Single[] ZXing.OneD.RSS.AbstractRSSReader::oddRoundingErrors
	SingleU5BU5D_t1219431280* ___oddRoundingErrors_8;
	// System.Single[] ZXing.OneD.RSS.AbstractRSSReader::evenRoundingErrors
	SingleU5BU5D_t1219431280* ___evenRoundingErrors_9;
	// System.Int32[] ZXing.OneD.RSS.AbstractRSSReader::oddCounts
	Int32U5BU5D_t1809983122* ___oddCounts_10;
	// System.Int32[] ZXing.OneD.RSS.AbstractRSSReader::evenCounts
	Int32U5BU5D_t1809983122* ___evenCounts_11;
};
struct AbstractRSSReader_t1217113367_StaticFields{
	// System.Int32 ZXing.OneD.RSS.AbstractRSSReader::MAX_AVG_VARIANCE
	int32_t ___MAX_AVG_VARIANCE_4;
	// System.Int32 ZXing.OneD.RSS.AbstractRSSReader::MAX_INDIVIDUAL_VARIANCE
	int32_t ___MAX_INDIVIDUAL_VARIANCE_5;
};

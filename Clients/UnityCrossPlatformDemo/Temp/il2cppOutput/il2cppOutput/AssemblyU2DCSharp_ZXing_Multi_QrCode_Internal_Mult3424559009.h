#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.QrCode.Internal.FinderPatternInfo[]
struct FinderPatternInfoU5BU5D_t1484448612;

#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_FinderPatte449776913.h"

// ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder
struct  MultiFinderPatternFinder_t3424559009  : public FinderPatternFinder_t449776913
{
};
struct MultiFinderPatternFinder_t3424559009_StaticFields{
	// ZXing.QrCode.Internal.FinderPatternInfo[] ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::EMPTY_RESULT_ARRAY
	FinderPatternInfoU5BU5D_t1484448612* ___EMPTY_RESULT_ARRAY_10;
	// System.Single ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::MAX_MODULE_COUNT_PER_EDGE
	float ___MAX_MODULE_COUNT_PER_EDGE_11;
	// System.Single ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::MIN_MODULE_COUNT_PER_EDGE
	float ___MIN_MODULE_COUNT_PER_EDGE_12;
	// System.Single ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::DIFF_MODSIZE_CUTOFF_PERCENT
	float ___DIFF_MODSIZE_CUTOFF_PERCENT_13;
};

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
// System.Collections.Generic.List`1<ZXing.OneD.RSS.Pair>
struct List_1_t2727098743;

#include "AssemblyU2DCSharp_ZXing_OneD_RSS_AbstractRSSReader1217113367.h"

// ZXing.OneD.RSS.RSS14Reader
struct  RSS14Reader_t2628686460  : public AbstractRSSReader_t1217113367
{
	// System.Collections.Generic.List`1<ZXing.OneD.RSS.Pair> ZXing.OneD.RSS.RSS14Reader::possibleLeftPairs
	List_1_t2727098743 * ___possibleLeftPairs_19;
	// System.Collections.Generic.List`1<ZXing.OneD.RSS.Pair> ZXing.OneD.RSS.RSS14Reader::possibleRightPairs
	List_1_t2727098743 * ___possibleRightPairs_20;
};
struct RSS14Reader_t2628686460_StaticFields{
	// System.Int32[] ZXing.OneD.RSS.RSS14Reader::OUTSIDE_EVEN_TOTAL_SUBSET
	Int32U5BU5D_t1809983122* ___OUTSIDE_EVEN_TOTAL_SUBSET_12;
	// System.Int32[] ZXing.OneD.RSS.RSS14Reader::INSIDE_ODD_TOTAL_SUBSET
	Int32U5BU5D_t1809983122* ___INSIDE_ODD_TOTAL_SUBSET_13;
	// System.Int32[] ZXing.OneD.RSS.RSS14Reader::OUTSIDE_GSUM
	Int32U5BU5D_t1809983122* ___OUTSIDE_GSUM_14;
	// System.Int32[] ZXing.OneD.RSS.RSS14Reader::INSIDE_GSUM
	Int32U5BU5D_t1809983122* ___INSIDE_GSUM_15;
	// System.Int32[] ZXing.OneD.RSS.RSS14Reader::OUTSIDE_ODD_WIDEST
	Int32U5BU5D_t1809983122* ___OUTSIDE_ODD_WIDEST_16;
	// System.Int32[] ZXing.OneD.RSS.RSS14Reader::INSIDE_ODD_WIDEST
	Int32U5BU5D_t1809983122* ___INSIDE_ODD_WIDEST_17;
	// System.Int32[][] ZXing.OneD.RSS.RSS14Reader::FINDER_PATTERNS
	Int32U5BU5DU5BU5D_t158556903* ___FINDER_PATTERNS_18;
};

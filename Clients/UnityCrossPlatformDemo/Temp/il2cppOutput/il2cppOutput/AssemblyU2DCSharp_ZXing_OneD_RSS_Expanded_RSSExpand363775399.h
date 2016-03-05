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
// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair>
struct List_1_t2229349445;
// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedRow>
struct List_1_t3819908915;

#include "AssemblyU2DCSharp_ZXing_OneD_RSS_AbstractRSSReader1217113367.h"

// ZXing.OneD.RSS.Expanded.RSSExpandedReader
struct  RSSExpandedReader_t363775399  : public AbstractRSSReader_t1217113367
{
	// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair> ZXing.OneD.RSS.Expanded.RSSExpandedReader::pairs
	List_1_t2229349445 * ___pairs_25;
	// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedRow> ZXing.OneD.RSS.Expanded.RSSExpandedReader::rows
	List_1_t3819908915 * ___rows_26;
	// System.Int32[] ZXing.OneD.RSS.Expanded.RSSExpandedReader::startEnd
	Int32U5BU5D_t1809983122* ___startEnd_27;
	// System.Boolean ZXing.OneD.RSS.Expanded.RSSExpandedReader::startFromEven
	bool ___startFromEven_28;
};
struct RSSExpandedReader_t363775399_StaticFields{
	// System.Int32[] ZXing.OneD.RSS.Expanded.RSSExpandedReader::SYMBOL_WIDEST
	Int32U5BU5D_t1809983122* ___SYMBOL_WIDEST_19;
	// System.Int32[] ZXing.OneD.RSS.Expanded.RSSExpandedReader::EVEN_TOTAL_SUBSET
	Int32U5BU5D_t1809983122* ___EVEN_TOTAL_SUBSET_20;
	// System.Int32[] ZXing.OneD.RSS.Expanded.RSSExpandedReader::GSUM
	Int32U5BU5D_t1809983122* ___GSUM_21;
	// System.Int32[][] ZXing.OneD.RSS.Expanded.RSSExpandedReader::FINDER_PATTERNS
	Int32U5BU5DU5BU5D_t158556903* ___FINDER_PATTERNS_22;
	// System.Int32[][] ZXing.OneD.RSS.Expanded.RSSExpandedReader::WEIGHTS
	Int32U5BU5DU5BU5D_t158556903* ___WEIGHTS_23;
	// System.Int32[][] ZXing.OneD.RSS.Expanded.RSSExpandedReader::FINDER_PATTERN_SEQUENCES
	Int32U5BU5DU5BU5D_t158556903* ___FINDER_PATTERN_SEQUENCES_24;
};

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ZXing.OneD.RSS.Expanded.RSSExpandedReader
struct RSSExpandedReader_t363775399;
// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair>
struct List_1_t2229349445;
// ZXing.Result
struct Result_t2215385161;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedRow>
struct List_1_t3819908915;
// System.Collections.Generic.IEnumerable`1<ZXing.OneD.RSS.Expanded.ExpandedPair>
struct IEnumerable_1_t9577536;
// System.Collections.Generic.IEnumerable`1<ZXing.OneD.RSS.Expanded.ExpandedRow>
struct IEnumerable_1_t1600137006;
// ZXing.OneD.RSS.Expanded.ExpandedPair
struct ExpandedPair_t1432390476;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.OneD.RSS.FinderPattern
struct FinderPattern_t786605550;
// ZXing.OneD.RSS.DataCharacter
struct DataCharacter_t2485509123;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "AssemblyU2DCSharp_ZXing_OneD_RSS_FinderPattern786605550.h"

// System.Void ZXing.OneD.RSS.Expanded.RSSExpandedReader::.ctor()
extern "C"  void RSSExpandedReader__ctor_m1140107920 (RSSExpandedReader_t363775399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.RSSExpandedReader::.cctor()
extern "C"  void RSSExpandedReader__cctor_m501510941 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair> ZXing.OneD.RSS.Expanded.RSSExpandedReader::get_Pairs()
extern "C"  List_1_t2229349445 * RSSExpandedReader_get_Pairs_m3489602967 (RSSExpandedReader_t363775399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.RSS.Expanded.RSSExpandedReader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * RSSExpandedReader_decodeRow_m173533605 (RSSExpandedReader_t363775399 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.RSSExpandedReader::reset()
extern "C"  void RSSExpandedReader_reset_m1416854877 (RSSExpandedReader_t363775399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.RSSExpandedReader::decodeRow2pairs(System.Int32,ZXing.Common.BitArray)
extern "C"  bool RSSExpandedReader_decodeRow2pairs_m1804561773 (RSSExpandedReader_t363775399 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair> ZXing.OneD.RSS.Expanded.RSSExpandedReader::checkRows(System.Boolean)
extern "C"  List_1_t2229349445 * RSSExpandedReader_checkRows_m1384853823 (RSSExpandedReader_t363775399 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair> ZXing.OneD.RSS.Expanded.RSSExpandedReader::checkRows(System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedRow>,System.Int32)
extern "C"  List_1_t2229349445 * RSSExpandedReader_checkRows_m2005902461 (RSSExpandedReader_t363775399 * __this, List_1_t3819908915 * ___collectedRows, int32_t ___currentRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.RSSExpandedReader::isValidSequence(System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair>)
extern "C"  bool RSSExpandedReader_isValidSequence_m1016534499 (Object_t * __this /* static, unused */, List_1_t2229349445 * ___pairs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.RSSExpandedReader::storeRow(System.Int32,System.Boolean)
extern "C"  void RSSExpandedReader_storeRow_m3730941919 (RSSExpandedReader_t363775399 * __this, int32_t ___rowNumber, bool ___wasReversed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.RSSExpandedReader::removePartialRows(System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair>,System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedRow>)
extern "C"  void RSSExpandedReader_removePartialRows_m2988405156 (Object_t * __this /* static, unused */, List_1_t2229349445 * ___pairs, List_1_t3819908915 * ___rows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.RSSExpandedReader::isPartialRow(System.Collections.Generic.IEnumerable`1<ZXing.OneD.RSS.Expanded.ExpandedPair>,System.Collections.Generic.IEnumerable`1<ZXing.OneD.RSS.Expanded.ExpandedRow>)
extern "C"  bool RSSExpandedReader_isPartialRow_m417031303 (Object_t * __this /* static, unused */, Object_t* ___pairs, Object_t* ___rows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedRow> ZXing.OneD.RSS.Expanded.RSSExpandedReader::get_Rows()
extern "C"  List_1_t3819908915 * RSSExpandedReader_get_Rows_m4133770535 (RSSExpandedReader_t363775399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.RSS.Expanded.RSSExpandedReader::constructResult(System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair>)
extern "C"  Result_t2215385161 * RSSExpandedReader_constructResult_m2632976608 (Object_t * __this /* static, unused */, List_1_t2229349445 * ___pairs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.RSSExpandedReader::checkChecksum()
extern "C"  bool RSSExpandedReader_checkChecksum_m316747565 (RSSExpandedReader_t363775399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.RSS.Expanded.RSSExpandedReader::getNextSecondBar(ZXing.Common.BitArray,System.Int32)
extern "C"  int32_t RSSExpandedReader_getNextSecondBar_m1678283366 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, int32_t ___initialPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.ExpandedPair ZXing.OneD.RSS.Expanded.RSSExpandedReader::retrieveNextPair(ZXing.Common.BitArray,System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair>,System.Int32)
extern "C"  ExpandedPair_t1432390476 * RSSExpandedReader_retrieveNextPair_m1463705182 (RSSExpandedReader_t363775399 * __this, BitArray_t2845796643 * ___row, List_1_t2229349445 * ___previousPairs, int32_t ___rowNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.RSSExpandedReader::findNextPair(ZXing.Common.BitArray,System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair>,System.Int32)
extern "C"  bool RSSExpandedReader_findNextPair_m1996495326 (RSSExpandedReader_t363775399 * __this, BitArray_t2845796643 * ___row, List_1_t2229349445 * ___previousPairs, int32_t ___forcedOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.RSSExpandedReader::reverseCounters(System.Int32[])
extern "C"  void RSSExpandedReader_reverseCounters_m1180517430 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___counters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.FinderPattern ZXing.OneD.RSS.Expanded.RSSExpandedReader::parseFoundFinderPattern(ZXing.Common.BitArray,System.Int32,System.Boolean)
extern "C"  FinderPattern_t786605550 * RSSExpandedReader_parseFoundFinderPattern_m942135925 (RSSExpandedReader_t363775399 * __this, BitArray_t2845796643 * ___row, int32_t ___rowNumber, bool ___oddPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.DataCharacter ZXing.OneD.RSS.Expanded.RSSExpandedReader::decodeDataCharacter(ZXing.Common.BitArray,ZXing.OneD.RSS.FinderPattern,System.Boolean,System.Boolean)
extern "C"  DataCharacter_t2485509123 * RSSExpandedReader_decodeDataCharacter_m2954669232 (RSSExpandedReader_t363775399 * __this, BitArray_t2845796643 * ___row, FinderPattern_t786605550 * ___pattern, bool ___isOddPattern, bool ___leftChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.RSSExpandedReader::isNotA1left(ZXing.OneD.RSS.FinderPattern,System.Boolean,System.Boolean)
extern "C"  bool RSSExpandedReader_isNotA1left_m3191595514 (Object_t * __this /* static, unused */, FinderPattern_t786605550 * ___pattern, bool ___isOddPattern, bool ___leftChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.RSSExpandedReader::adjustOddEvenCounts(System.Int32)
extern "C"  bool RSSExpandedReader_adjustOddEvenCounts_m4235689937 (RSSExpandedReader_t363775399 * __this, int32_t ___numModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;

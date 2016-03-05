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

// ZXing.OneD.RSS.RSS14Reader
struct RSS14Reader_t2628686460;
// ZXing.Result
struct Result_t2215385161;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.Collections.Generic.IList`1<ZXing.OneD.RSS.Pair>
struct IList_1_t4096632088;
// ZXing.OneD.RSS.Pair
struct Pair_t1930139774;
// ZXing.OneD.RSS.DataCharacter
struct DataCharacter_t2485509123;
// ZXing.OneD.RSS.FinderPattern
struct FinderPattern_t786605550;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "AssemblyU2DCSharp_ZXing_OneD_RSS_Pair1930139774.h"
#include "AssemblyU2DCSharp_ZXing_OneD_RSS_FinderPattern786605550.h"

// System.Void ZXing.OneD.RSS.RSS14Reader::.ctor()
extern "C"  void RSS14Reader__ctor_m606945669 (RSS14Reader_t2628686460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.RSS14Reader::.cctor()
extern "C"  void RSS14Reader__cctor_m1153350344 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.RSS.RSS14Reader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * RSS14Reader_decodeRow_m1492900220 (RSS14Reader_t2628686460 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.RSS14Reader::addOrTally(System.Collections.Generic.IList`1<ZXing.OneD.RSS.Pair>,ZXing.OneD.RSS.Pair)
extern "C"  void RSS14Reader_addOrTally_m3907112102 (Object_t * __this /* static, unused */, Object_t* ___possiblePairs, Pair_t1930139774 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.RSS14Reader::reset()
extern "C"  void RSS14Reader_reset_m883692626 (RSS14Reader_t2628686460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.RSS.RSS14Reader::constructResult(ZXing.OneD.RSS.Pair,ZXing.OneD.RSS.Pair)
extern "C"  Result_t2215385161 * RSS14Reader_constructResult_m1509265541 (Object_t * __this /* static, unused */, Pair_t1930139774 * ___leftPair, Pair_t1930139774 * ___rightPair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.RSS14Reader::checkChecksum(ZXing.OneD.RSS.Pair,ZXing.OneD.RSS.Pair)
extern "C"  bool RSS14Reader_checkChecksum_m1774587500 (Object_t * __this /* static, unused */, Pair_t1930139774 * ___leftPair, Pair_t1930139774 * ___rightPair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Pair ZXing.OneD.RSS.RSS14Reader::decodePair(ZXing.Common.BitArray,System.Boolean,System.Int32,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Pair_t1930139774 * RSS14Reader_decodePair_m570175076 (RSS14Reader_t2628686460 * __this, BitArray_t2845796643 * ___row, bool ___right, int32_t ___rowNumber, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.DataCharacter ZXing.OneD.RSS.RSS14Reader::decodeDataCharacter(ZXing.Common.BitArray,ZXing.OneD.RSS.FinderPattern,System.Boolean)
extern "C"  DataCharacter_t2485509123 * RSS14Reader_decodeDataCharacter_m138138520 (RSS14Reader_t2628686460 * __this, BitArray_t2845796643 * ___row, FinderPattern_t786605550 * ___pattern, bool ___outsideChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.RSS.RSS14Reader::findFinderPattern(ZXing.Common.BitArray,System.Int32,System.Boolean)
extern "C"  Int32U5BU5D_t1809983122* RSS14Reader_findFinderPattern_m2454533835 (RSS14Reader_t2628686460 * __this, BitArray_t2845796643 * ___row, int32_t ___rowOffset, bool ___rightFinderPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.FinderPattern ZXing.OneD.RSS.RSS14Reader::parseFoundFinderPattern(ZXing.Common.BitArray,System.Int32,System.Boolean,System.Int32[])
extern "C"  FinderPattern_t786605550 * RSS14Reader_parseFoundFinderPattern_m179929483 (RSS14Reader_t2628686460 * __this, BitArray_t2845796643 * ___row, int32_t ___rowNumber, bool ___right, Int32U5BU5D_t1809983122* ___startEnd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.RSS14Reader::adjustOddEvenCounts(System.Boolean,System.Int32)
extern "C"  bool RSS14Reader_adjustOddEvenCounts_m3553027795 (RSS14Reader_t2628686460 * __this, bool ___outsideChar, int32_t ___numModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;

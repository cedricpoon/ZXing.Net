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

// ZXing.OneD.RSS.AbstractRSSReader
struct AbstractRSSReader_t1217113367;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.OneD.RSS.AbstractRSSReader::.ctor()
extern "C"  void AbstractRSSReader__ctor_m2742895050 (AbstractRSSReader_t1217113367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.AbstractRSSReader::.cctor()
extern "C"  void AbstractRSSReader__cctor_m2943271715 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.RSS.AbstractRSSReader::getDecodeFinderCounters()
extern "C"  Int32U5BU5D_t1809983122* AbstractRSSReader_getDecodeFinderCounters_m1819777117 (AbstractRSSReader_t1217113367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.RSS.AbstractRSSReader::getDataCharacterCounters()
extern "C"  Int32U5BU5D_t1809983122* AbstractRSSReader_getDataCharacterCounters_m613084934 (AbstractRSSReader_t1217113367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] ZXing.OneD.RSS.AbstractRSSReader::getOddRoundingErrors()
extern "C"  SingleU5BU5D_t1219431280* AbstractRSSReader_getOddRoundingErrors_m1641014076 (AbstractRSSReader_t1217113367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] ZXing.OneD.RSS.AbstractRSSReader::getEvenRoundingErrors()
extern "C"  SingleU5BU5D_t1219431280* AbstractRSSReader_getEvenRoundingErrors_m3238557101 (AbstractRSSReader_t1217113367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.RSS.AbstractRSSReader::getOddCounts()
extern "C"  Int32U5BU5D_t1809983122* AbstractRSSReader_getOddCounts_m251321315 (AbstractRSSReader_t1217113367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.RSS.AbstractRSSReader::getEvenCounts()
extern "C"  Int32U5BU5D_t1809983122* AbstractRSSReader_getEvenCounts_m3402802704 (AbstractRSSReader_t1217113367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.AbstractRSSReader::parseFinderValue(System.Int32[],System.Int32[][],System.Int32&)
extern "C"  bool AbstractRSSReader_parseFinderValue_m4075927763 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___counters, Int32U5BU5DU5BU5D_t158556903* ___finderPatterns, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.RSS.AbstractRSSReader::count(System.Int32[])
extern "C"  int32_t AbstractRSSReader_count_m2383677048 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.AbstractRSSReader::increment(System.Int32[],System.Single[])
extern "C"  void AbstractRSSReader_increment_m7094249 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___array, SingleU5BU5D_t1219431280* ___errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.AbstractRSSReader::decrement(System.Int32[],System.Single[])
extern "C"  void AbstractRSSReader_decrement_m826142989 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___array, SingleU5BU5D_t1219431280* ___errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.AbstractRSSReader::isFinderPattern(System.Int32[])
extern "C"  bool AbstractRSSReader_isFinderPattern_m2572080067 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___counters, const MethodInfo* method) IL2CPP_METHOD_ATTR;

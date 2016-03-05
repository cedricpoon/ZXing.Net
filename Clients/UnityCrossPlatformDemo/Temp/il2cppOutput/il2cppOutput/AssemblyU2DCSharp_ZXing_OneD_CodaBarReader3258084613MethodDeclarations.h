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

// ZXing.OneD.CodaBarReader
struct CodaBarReader_t3258084613;
// ZXing.Result
struct Result_t2215385161;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"

// System.Void ZXing.OneD.CodaBarReader::.ctor()
extern "C"  void CodaBarReader__ctor_m3416282292 (CodaBarReader_t3258084613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.CodaBarReader::.cctor()
extern "C"  void CodaBarReader__cctor_m2343439737 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.CodaBarReader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * CodaBarReader_decodeRow_m3349775213 (CodaBarReader_t3258084613 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.CodaBarReader::validatePattern(System.Int32)
extern "C"  bool CodaBarReader_validatePattern_m2269809129 (CodaBarReader_t3258084613 * __this, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.CodaBarReader::setCounters(ZXing.Common.BitArray)
extern "C"  bool CodaBarReader_setCounters_m2819463062 (CodaBarReader_t3258084613 * __this, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.CodaBarReader::counterAppend(System.Int32)
extern "C"  void CodaBarReader_counterAppend_m3050211577 (CodaBarReader_t3258084613 * __this, int32_t ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.CodaBarReader::findStartPattern()
extern "C"  int32_t CodaBarReader_findStartPattern_m813570021 (CodaBarReader_t3258084613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.CodaBarReader::arrayContains(System.Char[],System.Char)
extern "C"  bool CodaBarReader_arrayContains_m2083443516 (Object_t * __this /* static, unused */, CharU5BU5D_t3416858730* ___array, uint16_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.CodaBarReader::toNarrowWidePattern(System.Int32)
extern "C"  int32_t CodaBarReader_toNarrowWidePattern_m3529621532 (CodaBarReader_t3258084613 * __this, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.OneD.MSIReader
struct MSIReader_t2121803870;
// ZXing.Result
struct Result_t2215385161;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_String968488902.h"

// System.Void ZXing.OneD.MSIReader::.ctor()
extern "C"  void MSIReader__ctor_m3078036603 (MSIReader_t2121803870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.MSIReader::.ctor(System.Boolean)
extern "C"  void MSIReader__ctor_m162062002 (MSIReader_t2121803870 * __this, bool ___usingCheckDigit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.MSIReader::.cctor()
extern "C"  void MSIReader__cctor_m447757970 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.MSIReader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * MSIReader_decodeRow_m1962856262 (MSIReader_t2121803870 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.MSIReader::findStartPattern(ZXing.Common.BitArray,System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* MSIReader_findStartPattern_m729243972 (MSIReader_t2121803870 * __this, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___counters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.MSIReader::findEndPattern(ZXing.Common.BitArray,System.Int32,System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* MSIReader_findEndPattern_m2574385608 (MSIReader_t2121803870 * __this, BitArray_t2845796643 * ___row, int32_t ___rowOffset, Int32U5BU5D_t1809983122* ___counters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.MSIReader::calculateAverageCounterWidth(System.Int32[],System.Int32)
extern "C"  void MSIReader_calculateAverageCounterWidth_m1644759838 (MSIReader_t2121803870 * __this, Int32U5BU5D_t1809983122* ___counters, int32_t ___patternLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.MSIReader::toPattern(System.Int32[],System.Int32)
extern "C"  int32_t MSIReader_toPattern_m2179769416 (MSIReader_t2121803870 * __this, Int32U5BU5D_t1809983122* ___counters, int32_t ___patternLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.MSIReader::patternToChar(System.Int32,System.Char&)
extern "C"  bool MSIReader_patternToChar_m1163857342 (Object_t * __this /* static, unused */, int32_t ___pattern, uint16_t* ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.MSIReader::CalculateChecksumLuhn(System.String)
extern "C"  int32_t MSIReader_CalculateChecksumLuhn_m1093491167 (Object_t * __this /* static, unused */, String_t* ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;

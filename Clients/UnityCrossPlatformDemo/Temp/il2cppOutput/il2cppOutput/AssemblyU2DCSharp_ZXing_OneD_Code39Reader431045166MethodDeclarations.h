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

// ZXing.OneD.Code39Reader
struct Code39Reader_t431045166;
// System.String
struct String_t;
// ZXing.Result
struct Result_t2215385161;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_String968488902.h"

// System.Void ZXing.OneD.Code39Reader::.ctor()
extern "C"  void Code39Reader__ctor_m1659000175 (Code39Reader_t431045166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.Code39Reader::.ctor(System.Boolean)
extern "C"  void Code39Reader__ctor_m2184404134 (Code39Reader_t431045166 * __this, bool ___usingCheckDigit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.Code39Reader::.ctor(System.Boolean,System.Boolean)
extern "C"  void Code39Reader__ctor_m754931223 (Code39Reader_t431045166 * __this, bool ___usingCheckDigit, bool ___extendedMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.Code39Reader::.cctor()
extern "C"  void Code39Reader__cctor_m3702268958 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.Code39Reader::get_Alphabet()
extern "C"  String_t* Code39Reader_get_Alphabet_m4250749102 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.Code39Reader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * Code39Reader_decodeRow_m1996261094 (Code39Reader_t431045166 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.Code39Reader::findAsteriskPattern(ZXing.Common.BitArray,System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* Code39Reader_findAsteriskPattern_m94377926 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___counters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.Code39Reader::toNarrowWidePattern(System.Int32[])
extern "C"  int32_t Code39Reader_toNarrowWidePattern_m2897840849 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___counters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.Code39Reader::patternToChar(System.Int32,System.Char&)
extern "C"  bool Code39Reader_patternToChar_m2333794146 (Object_t * __this /* static, unused */, int32_t ___pattern, uint16_t* ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.Code39Reader::decodeExtended(System.String)
extern "C"  String_t* Code39Reader_decodeExtended_m583994889 (Object_t * __this /* static, unused */, String_t* ___encoded, const MethodInfo* method) IL2CPP_METHOD_ATTR;

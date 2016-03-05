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

// ZXing.OneD.Code128Reader
struct Code128Reader_t2890672325;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// ZXing.Result
struct Result_t2215385161;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"

// System.Void ZXing.OneD.Code128Reader::.ctor()
extern "C"  void Code128Reader__ctor_m173920500 (Code128Reader_t2890672325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.Code128Reader::.cctor()
extern "C"  void Code128Reader__cctor_m614471993 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.Code128Reader::findStartPattern(ZXing.Common.BitArray)
extern "C"  Int32U5BU5D_t1809983122* Code128Reader_findStartPattern_m314356554 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.Code128Reader::decodeCode(ZXing.Common.BitArray,System.Int32[],System.Int32,System.Int32&)
extern "C"  bool Code128Reader_decodeCode_m3496774661 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___counters, int32_t ___rowOffset, int32_t* ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.Code128Reader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * Code128Reader_decodeRow_m1744510765 (Code128Reader_t2890672325 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;

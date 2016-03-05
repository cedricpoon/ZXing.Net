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

// ZXing.OneD.Code93Reader
struct Code93Reader_t1267917794;
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
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void ZXing.OneD.Code93Reader::.ctor()
extern "C"  void Code93Reader__ctor_m4252128827 (Code93Reader_t1267917794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.Code93Reader::.cctor()
extern "C"  void Code93Reader__cctor_m2484878546 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.Code93Reader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * Code93Reader_decodeRow_m202369690 (Code93Reader_t1267917794 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.Code93Reader::findAsteriskPattern(ZXing.Common.BitArray)
extern "C"  Int32U5BU5D_t1809983122* Code93Reader_findAsteriskPattern_m3684929091 (Code93Reader_t1267917794 * __this, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.Code93Reader::toPattern(System.Int32[])
extern "C"  int32_t Code93Reader_toPattern_m2279819531 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___counters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.Code93Reader::patternToChar(System.Int32,System.Char&)
extern "C"  bool Code93Reader_patternToChar_m937109526 (Object_t * __this /* static, unused */, int32_t ___pattern, uint16_t* ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.Code93Reader::decodeExtended(System.Text.StringBuilder)
extern "C"  String_t* Code93Reader_decodeExtended_m1270165053 (Object_t * __this /* static, unused */, StringBuilder_t3822575854 * ___encoded, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.Code93Reader::checkChecksums(System.Text.StringBuilder)
extern "C"  bool Code93Reader_checkChecksums_m1328517837 (Object_t * __this /* static, unused */, StringBuilder_t3822575854 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.Code93Reader::checkOneChecksum(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  bool Code93Reader_checkOneChecksum_m3418374740 (Object_t * __this /* static, unused */, StringBuilder_t3822575854 * ___result, int32_t ___checkPosition, int32_t ___weightMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;

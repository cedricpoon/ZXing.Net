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

// ZXing.OneD.UPCEANReader
struct UPCEANReader_t2611679461;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// ZXing.Result
struct Result_t2215385161;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.String
struct String_t;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_String968488902.h"

// System.Void ZXing.OneD.UPCEANReader::.ctor()
extern "C"  void UPCEANReader__ctor_m236526744 (UPCEANReader_t2611679461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.UPCEANReader::.cctor()
extern "C"  void UPCEANReader__cctor_m2555265557 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.UPCEANReader::findStartGuardPattern(ZXing.Common.BitArray)
extern "C"  Int32U5BU5D_t1809983122* UPCEANReader_findStartGuardPattern_m1835710711 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.UPCEANReader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * UPCEANReader_decodeRow_m1246355741 (UPCEANReader_t2611679461 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.UPCEANReader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Int32[],System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * UPCEANReader_decodeRow_m2577570152 (UPCEANReader_t2611679461 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___startGuardRange, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.UPCEANReader::checkChecksum(System.String)
extern "C"  bool UPCEANReader_checkChecksum_m3001302765 (UPCEANReader_t2611679461 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.UPCEANReader::checkStandardUPCEANChecksum(System.String)
extern "C"  bool UPCEANReader_checkStandardUPCEANChecksum_m2685921926 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.UPCEANReader::decodeEnd(ZXing.Common.BitArray,System.Int32)
extern "C"  Int32U5BU5D_t1809983122* UPCEANReader_decodeEnd_m4151600217 (UPCEANReader_t2611679461 * __this, BitArray_t2845796643 * ___row, int32_t ___endStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.UPCEANReader::findGuardPattern(ZXing.Common.BitArray,System.Int32,System.Boolean,System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* UPCEANReader_findGuardPattern_m3240563910 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, int32_t ___rowOffset, bool ___whiteFirst, Int32U5BU5D_t1809983122* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.UPCEANReader::findGuardPattern(ZXing.Common.BitArray,System.Int32,System.Boolean,System.Int32[],System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* UPCEANReader_findGuardPattern_m2062553263 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, int32_t ___rowOffset, bool ___whiteFirst, Int32U5BU5D_t1809983122* ___pattern, Int32U5BU5D_t1809983122* ___counters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.UPCEANReader::decodeDigit(ZXing.Common.BitArray,System.Int32[],System.Int32,System.Int32[][],System.Int32&)
extern "C"  bool UPCEANReader_decodeDigit_m2100389378 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___counters, int32_t ___rowOffset, Int32U5BU5DU5BU5D_t158556903* ___patterns, int32_t* ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;

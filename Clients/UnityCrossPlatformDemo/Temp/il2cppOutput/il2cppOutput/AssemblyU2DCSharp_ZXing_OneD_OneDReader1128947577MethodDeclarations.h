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

// ZXing.OneD.OneDReader
struct OneDReader_t1128947577;
// ZXing.Result
struct Result_t2215385161;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"

// System.Void ZXing.OneD.OneDReader::.ctor()
extern "C"  void OneDReader__ctor_m3259829508 (OneDReader_t1128947577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.OneDReader::.cctor()
extern "C"  void OneDReader__cctor_m1788370729 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.OneDReader::decode(ZXing.BinaryBitmap)
extern "C"  Result_t2215385161 * OneDReader_decode_m4175516926 (OneDReader_t1128947577 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.OneDReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * OneDReader_decode_m1128559631 (OneDReader_t1128947577 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.OneDReader::reset()
extern "C"  void OneDReader_reset_m3536576465 (OneDReader_t1128947577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.OneDReader::doDecode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * OneDReader_doDecode_m4288407364 (OneDReader_t1128947577 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.OneDReader::recordPattern(ZXing.Common.BitArray,System.Int32,System.Int32[])
extern "C"  bool OneDReader_recordPattern_m3840369110 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, int32_t ___start, Int32U5BU5D_t1809983122* ___counters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.OneDReader::recordPattern(ZXing.Common.BitArray,System.Int32,System.Int32[],System.Int32)
extern "C"  bool OneDReader_recordPattern_m1382540993 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, int32_t ___start, Int32U5BU5D_t1809983122* ___counters, int32_t ___numCounters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.OneDReader::recordPatternInReverse(ZXing.Common.BitArray,System.Int32,System.Int32[])
extern "C"  bool OneDReader_recordPatternInReverse_m4054870465 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, int32_t ___start, Int32U5BU5D_t1809983122* ___counters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.OneDReader::patternMatchVariance(System.Int32[],System.Int32[],System.Int32)
extern "C"  int32_t OneDReader_patternMatchVariance_m1309212905 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___counters, Int32U5BU5D_t1809983122* ___pattern, int32_t ___maxIndividualVariance, const MethodInfo* method) IL2CPP_METHOD_ATTR;

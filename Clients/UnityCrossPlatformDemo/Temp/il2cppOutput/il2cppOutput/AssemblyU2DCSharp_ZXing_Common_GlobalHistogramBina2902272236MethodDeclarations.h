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

// ZXing.Common.GlobalHistogramBinarizer
struct GlobalHistogramBinarizer_t2902272236;
// ZXing.LuminanceSource
struct LuminanceSource_t1843403551;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.Binarizer
struct Binarizer_t776273154;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_LuminanceSource1843403551.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"

// System.Void ZXing.Common.GlobalHistogramBinarizer::.ctor(ZXing.LuminanceSource)
extern "C"  void GlobalHistogramBinarizer__ctor_m1287653740 (GlobalHistogramBinarizer_t2902272236 * __this, LuminanceSource_t1843403551 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.GlobalHistogramBinarizer::.cctor()
extern "C"  void GlobalHistogramBinarizer__cctor_m1911042000 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitArray ZXing.Common.GlobalHistogramBinarizer::getBlackRow(System.Int32,ZXing.Common.BitArray)
extern "C"  BitArray_t2845796643 * GlobalHistogramBinarizer_getBlackRow_m157819922 (GlobalHistogramBinarizer_t2902272236 * __this, int32_t ___y, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Common.GlobalHistogramBinarizer::get_BlackMatrix()
extern "C"  BitMatrix_t3148694213 * GlobalHistogramBinarizer_get_BlackMatrix_m406463098 (GlobalHistogramBinarizer_t2902272236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Binarizer ZXing.Common.GlobalHistogramBinarizer::createBinarizer(ZXing.LuminanceSource)
extern "C"  Binarizer_t776273154 * GlobalHistogramBinarizer_createBinarizer_m4028721645 (GlobalHistogramBinarizer_t2902272236 * __this, LuminanceSource_t1843403551 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.GlobalHistogramBinarizer::initArrays(System.Int32)
extern "C"  void GlobalHistogramBinarizer_initArrays_m792835394 (GlobalHistogramBinarizer_t2902272236 * __this, int32_t ___luminanceSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.GlobalHistogramBinarizer::estimateBlackPoint(System.Int32[],System.Int32&)
extern "C"  bool GlobalHistogramBinarizer_estimateBlackPoint_m4220820464 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___buckets, int32_t* ___blackPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;

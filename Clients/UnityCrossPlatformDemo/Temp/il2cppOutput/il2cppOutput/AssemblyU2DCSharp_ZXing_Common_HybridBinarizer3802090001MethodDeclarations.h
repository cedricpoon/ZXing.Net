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

// ZXing.Common.HybridBinarizer
struct HybridBinarizer_t3802090001;
// ZXing.LuminanceSource
struct LuminanceSource_t1843403551;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.Binarizer
struct Binarizer_t776273154;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_LuminanceSource1843403551.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Common.HybridBinarizer::.ctor(ZXing.LuminanceSource)
extern "C"  void HybridBinarizer__ctor_m735002383 (HybridBinarizer_t3802090001 * __this, LuminanceSource_t1843403551 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Common.HybridBinarizer::get_BlackMatrix()
extern "C"  BitMatrix_t3148694213 * HybridBinarizer_get_BlackMatrix_m2249933287 (HybridBinarizer_t3802090001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Binarizer ZXing.Common.HybridBinarizer::createBinarizer(ZXing.LuminanceSource)
extern "C"  Binarizer_t776273154 * HybridBinarizer_createBinarizer_m3970149694 (HybridBinarizer_t3802090001 * __this, LuminanceSource_t1843403551 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.HybridBinarizer::binarizeEntireImage()
extern "C"  void HybridBinarizer_binarizeEntireImage_m1690085190 (HybridBinarizer_t3802090001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.HybridBinarizer::calculateThresholdForBlock(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[][],ZXing.Common.BitMatrix)
extern "C"  void HybridBinarizer_calculateThresholdForBlock_m670217652 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___luminances, int32_t ___subWidth, int32_t ___subHeight, int32_t ___width, int32_t ___height, Int32U5BU5DU5BU5D_t158556903* ___blackPoints, BitMatrix_t3148694213 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.HybridBinarizer::cap(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t HybridBinarizer_cap_m4293379565 (Object_t * __this /* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.HybridBinarizer::thresholdBlock(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,ZXing.Common.BitMatrix)
extern "C"  void HybridBinarizer_thresholdBlock_m1091464340 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___luminances, int32_t ___xoffset, int32_t ___yoffset, int32_t ___threshold, int32_t ___stride, BitMatrix_t3148694213 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[][] ZXing.Common.HybridBinarizer::calculateBlackPoints(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Int32U5BU5DU5BU5D_t158556903* HybridBinarizer_calculateBlackPoints_m1801725017 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___luminances, int32_t ___subWidth, int32_t ___subHeight, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;

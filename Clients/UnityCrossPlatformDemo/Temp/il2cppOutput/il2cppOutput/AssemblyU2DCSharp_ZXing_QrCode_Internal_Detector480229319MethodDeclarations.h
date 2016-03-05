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

// ZXing.QrCode.Internal.Detector
struct Detector_t480229319;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPointCallback
struct ResultPointCallback_t108115140;
// ZXing.Common.DetectorResult
struct DetectorResult_t2332101466;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// ZXing.QrCode.Internal.FinderPatternInfo
struct FinderPatternInfo_t3408770073;
// ZXing.Common.PerspectiveTransform
struct PerspectiveTransform_t560998503;
// ZXing.ResultPoint
struct ResultPoint_t887763807;
// ZXing.QrCode.Internal.AlignmentPattern
struct AlignmentPattern_t3015969838;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_FinderPatt3408770073.h"
#include "AssemblyU2DCSharp_ZXing_ResultPoint887763807.h"
#include "AssemblyU2DCSharp_ZXing_Common_PerspectiveTransform560998503.h"

// System.Void ZXing.QrCode.Internal.Detector::.ctor(ZXing.Common.BitMatrix)
extern "C"  void Detector__ctor_m182287717 (Detector_t480229319 * __this, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.QrCode.Internal.Detector::get_Image()
extern "C"  BitMatrix_t3148694213 * Detector_get_Image_m3669156258 (Detector_t480229319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPointCallback ZXing.QrCode.Internal.Detector::get_ResultPointCallback()
extern "C"  ResultPointCallback_t108115140 * Detector_get_ResultPointCallback_m2193845890 (Detector_t480229319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DetectorResult ZXing.QrCode.Internal.Detector::detect()
extern "C"  DetectorResult_t2332101466 * Detector_detect_m1715178244 (Detector_t480229319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DetectorResult ZXing.QrCode.Internal.Detector::detect(System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  DetectorResult_t2332101466 * Detector_detect_m2214402507 (Detector_t480229319 * __this, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DetectorResult ZXing.QrCode.Internal.Detector::processFinderPatternInfo(ZXing.QrCode.Internal.FinderPatternInfo)
extern "C"  DetectorResult_t2332101466 * Detector_processFinderPatternInfo_m3861296715 (Detector_t480229319 * __this, FinderPatternInfo_t3408770073 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.PerspectiveTransform ZXing.QrCode.Internal.Detector::createTransform(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,System.Int32)
extern "C"  PerspectiveTransform_t560998503 * Detector_createTransform_m4073239363 (Object_t * __this /* static, unused */, ResultPoint_t887763807 * ___topLeft, ResultPoint_t887763807 * ___topRight, ResultPoint_t887763807 * ___bottomLeft, ResultPoint_t887763807 * ___alignmentPattern, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.QrCode.Internal.Detector::sampleGrid(ZXing.Common.BitMatrix,ZXing.Common.PerspectiveTransform,System.Int32)
extern "C"  BitMatrix_t3148694213 * Detector_sampleGrid_m3721745447 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, PerspectiveTransform_t560998503 * ___transform, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.Detector::computeDimension(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,System.Single,System.Int32&)
extern "C"  bool Detector_computeDimension_m3531596380 (Object_t * __this /* static, unused */, ResultPoint_t887763807 * ___topLeft, ResultPoint_t887763807 * ___topRight, ResultPoint_t887763807 * ___bottomLeft, float ___moduleSize, int32_t* ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ZXing.QrCode.Internal.Detector::calculateModuleSize(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  float Detector_calculateModuleSize_m1344907248 (Detector_t480229319 * __this, ResultPoint_t887763807 * ___topLeft, ResultPoint_t887763807 * ___topRight, ResultPoint_t887763807 * ___bottomLeft, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ZXing.QrCode.Internal.Detector::calculateModuleSizeOneWay(ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  float Detector_calculateModuleSizeOneWay_m3509127236 (Detector_t480229319 * __this, ResultPoint_t887763807 * ___pattern, ResultPoint_t887763807 * ___otherPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ZXing.QrCode.Internal.Detector::sizeOfBlackWhiteBlackRunBothWays(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  float Detector_sizeOfBlackWhiteBlackRunBothWays_m1646073885 (Detector_t480229319 * __this, int32_t ___fromX, int32_t ___fromY, int32_t ___toX, int32_t ___toY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ZXing.QrCode.Internal.Detector::sizeOfBlackWhiteBlackRun(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  float Detector_sizeOfBlackWhiteBlackRun_m666191522 (Detector_t480229319 * __this, int32_t ___fromX, int32_t ___fromY, int32_t ___toX, int32_t ___toY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.AlignmentPattern ZXing.QrCode.Internal.Detector::findAlignmentInRegion(System.Single,System.Int32,System.Int32,System.Single)
extern "C"  AlignmentPattern_t3015969838 * Detector_findAlignmentInRegion_m3770421482 (Detector_t480229319 * __this, float ___overallEstModuleSize, int32_t ___estAlignmentX, int32_t ___estAlignmentY, float ___allowanceFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.Datamatrix.Internal.Detector
struct Detector_t995695992;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.Common.DetectorResult
struct DetectorResult_t2332101466;
// ZXing.ResultPoint
struct ResultPoint_t887763807;
// System.Collections.Generic.IDictionary`2<ZXing.ResultPoint,System.Int32>
struct IDictionary_2_t2831969745;
// ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions
struct ResultPointsAndTransitions_t2253420295;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_ResultPoint887763807.h"

// System.Void ZXing.Datamatrix.Internal.Detector::.ctor(ZXing.Common.BitMatrix)
extern "C"  void Detector__ctor_m2925265864 (Detector_t995695992 * __this, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DetectorResult ZXing.Datamatrix.Internal.Detector::detect()
extern "C"  DetectorResult_t2332101466 * Detector_detect_m1717975361 (Detector_t995695992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint ZXing.Datamatrix.Internal.Detector::correctTopRightRectangular(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,System.Int32,System.Int32)
extern "C"  ResultPoint_t887763807 * Detector_correctTopRightRectangular_m1550004724 (Detector_t995695992 * __this, ResultPoint_t887763807 * ___bottomLeft, ResultPoint_t887763807 * ___bottomRight, ResultPoint_t887763807 * ___topLeft, ResultPoint_t887763807 * ___topRight, int32_t ___dimensionTop, int32_t ___dimensionRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint ZXing.Datamatrix.Internal.Detector::correctTopRight(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,System.Int32)
extern "C"  ResultPoint_t887763807 * Detector_correctTopRight_m362559495 (Detector_t995695992 * __this, ResultPoint_t887763807 * ___bottomLeft, ResultPoint_t887763807 * ___bottomRight, ResultPoint_t887763807 * ___topLeft, ResultPoint_t887763807 * ___topRight, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Datamatrix.Internal.Detector::isValid(ZXing.ResultPoint)
extern "C"  bool Detector_isValid_m3566117456 (Detector_t995695992 * __this, ResultPoint_t887763807 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.Detector::distance(ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  int32_t Detector_distance_m3563456738 (Object_t * __this /* static, unused */, ResultPoint_t887763807 * ___a, ResultPoint_t887763807 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Datamatrix.Internal.Detector::increment(System.Collections.Generic.IDictionary`2<ZXing.ResultPoint,System.Int32>,ZXing.ResultPoint)
extern "C"  void Detector_increment_m1508174555 (Object_t * __this /* static, unused */, Object_t* ___table, ResultPoint_t887763807 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Datamatrix.Internal.Detector::sampleGrid(ZXing.Common.BitMatrix,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,System.Int32,System.Int32)
extern "C"  BitMatrix_t3148694213 * Detector_sampleGrid_m2003081974 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, ResultPoint_t887763807 * ___topLeft, ResultPoint_t887763807 * ___bottomLeft, ResultPoint_t887763807 * ___bottomRight, ResultPoint_t887763807 * ___topRight, int32_t ___dimensionX, int32_t ___dimensionY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions ZXing.Datamatrix.Internal.Detector::transitionsBetween(ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  ResultPointsAndTransitions_t2253420295 * Detector_transitionsBetween_m4132236256 (Detector_t995695992 * __this, ResultPoint_t887763807 * ___from, ResultPoint_t887763807 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.Common.Detector.WhiteRectangleDetector
struct WhiteRectangleDetector_t1696912017;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;
// ZXing.ResultPoint
struct ResultPoint_t887763807;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_ResultPoint887763807.h"

// System.Void ZXing.Common.Detector.WhiteRectangleDetector::.ctor(ZXing.Common.BitMatrix)
extern "C"  void WhiteRectangleDetector__ctor_m1372356331 (WhiteRectangleDetector_t1696912017 * __this, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.Detector.WhiteRectangleDetector::.ctor(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Int32)
extern "C"  void WhiteRectangleDetector__ctor_m2487018028 (WhiteRectangleDetector_t1696912017 * __this, BitMatrix_t3148694213 * ___image, int32_t ___initSize, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.Detector.WhiteRectangleDetector ZXing.Common.Detector.WhiteRectangleDetector::Create(ZXing.Common.BitMatrix)
extern "C"  WhiteRectangleDetector_t1696912017 * WhiteRectangleDetector_Create_m3818533837 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.Detector.WhiteRectangleDetector ZXing.Common.Detector.WhiteRectangleDetector::Create(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Int32)
extern "C"  WhiteRectangleDetector_t1696912017 * WhiteRectangleDetector_Create_m3147518730 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, int32_t ___initSize, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint[] ZXing.Common.Detector.WhiteRectangleDetector::detect()
extern "C"  ResultPointU5BU5D_t128061510* WhiteRectangleDetector_detect_m2710047119 (WhiteRectangleDetector_t1696912017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint ZXing.Common.Detector.WhiteRectangleDetector::getBlackPointOnSegment(System.Single,System.Single,System.Single,System.Single)
extern "C"  ResultPoint_t887763807 * WhiteRectangleDetector_getBlackPointOnSegment_m3150277663 (WhiteRectangleDetector_t1696912017 * __this, float ___aX, float ___aY, float ___bX, float ___bY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint[] ZXing.Common.Detector.WhiteRectangleDetector::centerEdges(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  ResultPointU5BU5D_t128061510* WhiteRectangleDetector_centerEdges_m4004217851 (WhiteRectangleDetector_t1696912017 * __this, ResultPoint_t887763807 * ___y, ResultPoint_t887763807 * ___z, ResultPoint_t887763807 * ___x, ResultPoint_t887763807 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.Detector.WhiteRectangleDetector::containsBlackPoint(System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  bool WhiteRectangleDetector_containsBlackPoint_m1270992452 (WhiteRectangleDetector_t1696912017 * __this, int32_t ___a, int32_t ___b, int32_t ___fixed, bool ___horizontal, const MethodInfo* method) IL2CPP_METHOD_ATTR;

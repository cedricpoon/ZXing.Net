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

// ZXing.Aztec.Internal.Detector
struct Detector_t2306032538;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.Aztec.Internal.AztecDetectorResult
struct AztecDetectorResult_t2648621232;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.Aztec.Internal.Detector/Point
struct Point_t77292912;
// ZXing.ResultPoint
struct ResultPoint_t887763807;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_Aztec_Internal_Detector_Poin77292912.h"
#include "AssemblyU2DCSharp_ZXing_ResultPoint887763807.h"

// System.Void ZXing.Aztec.Internal.Detector::.ctor(ZXing.Common.BitMatrix)
extern "C"  void Detector__ctor_m3047020958 (Detector_t2306032538 * __this, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Aztec.Internal.Detector::.cctor()
extern "C"  void Detector__cctor_m2802541530 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Aztec.Internal.AztecDetectorResult ZXing.Aztec.Internal.Detector::detect()
extern "C"  AztecDetectorResult_t2648621232 * Detector_detect_m3480190081 (Detector_t2306032538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Aztec.Internal.AztecDetectorResult ZXing.Aztec.Internal.Detector::detect(System.Boolean)
extern "C"  AztecDetectorResult_t2648621232 * Detector_detect_m849198136 (Detector_t2306032538 * __this, bool ___isMirror, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Aztec.Internal.Detector::extractParameters(ZXing.ResultPoint[])
extern "C"  bool Detector_extractParameters_m1418263863 (Detector_t2306032538 * __this, ResultPointU5BU5D_t128061510* ___bullsEyeCorners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Aztec.Internal.Detector::getRotation(System.Int32[],System.Int32)
extern "C"  int32_t Detector_getRotation_m563738805 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___sides, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Aztec.Internal.Detector::getCorrectedParameterData(System.Int64,System.Boolean)
extern "C"  int32_t Detector_getCorrectedParameterData_m1356921644 (Object_t * __this /* static, unused */, int64_t ___parameterData, bool ___compact, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint[] ZXing.Aztec.Internal.Detector::getBullsEyeCorners(ZXing.Aztec.Internal.Detector/Point)
extern "C"  ResultPointU5BU5D_t128061510* Detector_getBullsEyeCorners_m3839478521 (Detector_t2306032538 * __this, Point_t77292912 * ___pCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Aztec.Internal.Detector/Point ZXing.Aztec.Internal.Detector::getMatrixCenter()
extern "C"  Point_t77292912 * Detector_getMatrixCenter_m101648695 (Detector_t2306032538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint[] ZXing.Aztec.Internal.Detector::getMatrixCornerPoints(ZXing.ResultPoint[])
extern "C"  ResultPointU5BU5D_t128061510* Detector_getMatrixCornerPoints_m401618879 (Detector_t2306032538 * __this, ResultPointU5BU5D_t128061510* ___bullsEyeCorners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Aztec.Internal.Detector::sampleGrid(ZXing.Common.BitMatrix,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  BitMatrix_t3148694213 * Detector_sampleGrid_m3695310896 (Detector_t2306032538 * __this, BitMatrix_t3148694213 * ___image, ResultPoint_t887763807 * ___topLeft, ResultPoint_t887763807 * ___topRight, ResultPoint_t887763807 * ___bottomRight, ResultPoint_t887763807 * ___bottomLeft, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Aztec.Internal.Detector::sampleLine(ZXing.ResultPoint,ZXing.ResultPoint,System.Int32)
extern "C"  int32_t Detector_sampleLine_m2420442444 (Detector_t2306032538 * __this, ResultPoint_t887763807 * ___p1, ResultPoint_t887763807 * ___p2, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Aztec.Internal.Detector::isWhiteOrBlackRectangle(ZXing.Aztec.Internal.Detector/Point,ZXing.Aztec.Internal.Detector/Point,ZXing.Aztec.Internal.Detector/Point,ZXing.Aztec.Internal.Detector/Point)
extern "C"  bool Detector_isWhiteOrBlackRectangle_m61343067 (Detector_t2306032538 * __this, Point_t77292912 * ___p1, Point_t77292912 * ___p2, Point_t77292912 * ___p3, Point_t77292912 * ___p4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Aztec.Internal.Detector::getColor(ZXing.Aztec.Internal.Detector/Point,ZXing.Aztec.Internal.Detector/Point)
extern "C"  int32_t Detector_getColor_m470300924 (Detector_t2306032538 * __this, Point_t77292912 * ___p1, Point_t77292912 * ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Aztec.Internal.Detector/Point ZXing.Aztec.Internal.Detector::getFirstDifferent(ZXing.Aztec.Internal.Detector/Point,System.Boolean,System.Int32,System.Int32)
extern "C"  Point_t77292912 * Detector_getFirstDifferent_m178178798 (Detector_t2306032538 * __this, Point_t77292912 * ___init, bool ___color, int32_t ___dx, int32_t ___dy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint[] ZXing.Aztec.Internal.Detector::expandSquare(ZXing.ResultPoint[],System.Single,System.Single)
extern "C"  ResultPointU5BU5D_t128061510* Detector_expandSquare_m1120191441 (Object_t * __this /* static, unused */, ResultPointU5BU5D_t128061510* ___cornerPoints, float ___oldSide, float ___newSide, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Aztec.Internal.Detector::isValid(System.Int32,System.Int32)
extern "C"  bool Detector_isValid_m174033007 (Detector_t2306032538 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Aztec.Internal.Detector::isValid(ZXing.ResultPoint)
extern "C"  bool Detector_isValid_m278279250 (Detector_t2306032538 * __this, ResultPoint_t887763807 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ZXing.Aztec.Internal.Detector::distance(ZXing.Aztec.Internal.Detector/Point,ZXing.Aztec.Internal.Detector/Point)
extern "C"  float Detector_distance_m1841408626 (Object_t * __this /* static, unused */, Point_t77292912 * ___a, Point_t77292912 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ZXing.Aztec.Internal.Detector::distance(ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  float Detector_distance_m2548986322 (Object_t * __this /* static, unused */, ResultPoint_t887763807 * ___a, ResultPoint_t887763807 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Aztec.Internal.Detector::getDimension()
extern "C"  int32_t Detector_getDimension_m1126940659 (Detector_t2306032538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

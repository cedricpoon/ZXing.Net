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

// ZXing.PDF417.Internal.Detector
struct Detector_t1452189737;
// ZXing.PDF417.Internal.PDF417DetectorResult
struct PDF417DetectorResult_t3676013870;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.Collections.Generic.List`1<ZXing.ResultPoint[]>
struct List_1_t925020479;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.PDF417.Internal.Detector::.ctor()
extern "C"  void Detector__ctor_m1890360704 (Detector_t1452189737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.Detector::.cctor()
extern "C"  void Detector__cctor_m2284510765 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.PDF417DetectorResult ZXing.PDF417.Internal.Detector::detect(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>,System.Boolean)
extern "C"  PDF417DetectorResult_t3676013870 * Detector_detect_m4166357210 (Object_t * __this /* static, unused */, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, bool ___multiple, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ZXing.ResultPoint[]> ZXing.PDF417.Internal.Detector::detect(System.Boolean,ZXing.Common.BitMatrix)
extern "C"  List_1_t925020479 * Detector_detect_m1420464327 (Object_t * __this /* static, unused */, bool ___multiple, BitMatrix_t3148694213 * ___bitMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint[] ZXing.PDF417.Internal.Detector::findVertices(ZXing.Common.BitMatrix,System.Int32,System.Int32)
extern "C"  ResultPointU5BU5D_t128061510* Detector_findVertices_m3278964937 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___matrix, int32_t ___startRow, int32_t ___startColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.Detector::copyToResult(ZXing.ResultPoint[],ZXing.ResultPoint[],System.Int32[])
extern "C"  void Detector_copyToResult_m1537055454 (Object_t * __this /* static, unused */, ResultPointU5BU5D_t128061510* ___result, ResultPointU5BU5D_t128061510* ___tmpResult, Int32U5BU5D_t1809983122* ___destinationIndexes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint[] ZXing.PDF417.Internal.Detector::findRowsWithPattern(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  ResultPointU5BU5D_t128061510* Detector_findRowsWithPattern_m303396828 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___matrix, int32_t ___height, int32_t ___width, int32_t ___startRow, int32_t ___startColumn, Int32U5BU5D_t1809983122* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.PDF417.Internal.Detector::findGuardPattern(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32[],System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* Detector_findGuardPattern_m488984901 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___matrix, int32_t ___column, int32_t ___row, int32_t ___width, bool ___whiteFirst, Int32U5BU5D_t1809983122* ___pattern, Int32U5BU5D_t1809983122* ___counters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.Detector::patternMatchVariance(System.Int32[],System.Int32[],System.Int32)
extern "C"  int32_t Detector_patternMatchVariance_m582008777 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___counters, Int32U5BU5D_t1809983122* ___pattern, int32_t ___maxIndividualVariance, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.Common.Detector.MonochromeRectangleDetector
struct MonochromeRectangleDetector_t1834715613;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;
// ZXing.ResultPoint
struct ResultPoint_t887763807;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Common.Detector.MonochromeRectangleDetector::.ctor(ZXing.Common.BitMatrix)
extern "C"  void MonochromeRectangleDetector__ctor_m3922735149 (MonochromeRectangleDetector_t1834715613 * __this, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint[] ZXing.Common.Detector.MonochromeRectangleDetector::detect()
extern "C"  ResultPointU5BU5D_t128061510* MonochromeRectangleDetector_detect_m1083271933 (MonochromeRectangleDetector_t1834715613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint ZXing.Common.Detector.MonochromeRectangleDetector::findCornerFromCenter(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  ResultPoint_t887763807 * MonochromeRectangleDetector_findCornerFromCenter_m3137741494 (MonochromeRectangleDetector_t1834715613 * __this, int32_t ___centerX, int32_t ___deltaX, int32_t ___left, int32_t ___right, int32_t ___centerY, int32_t ___deltaY, int32_t ___top, int32_t ___bottom, int32_t ___maxWhiteRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.Common.Detector.MonochromeRectangleDetector::blackWhiteRange(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  Int32U5BU5D_t1809983122* MonochromeRectangleDetector_blackWhiteRange_m1777027350 (MonochromeRectangleDetector_t1834715613 * __this, int32_t ___fixedDimension, int32_t ___maxWhiteRun, int32_t ___minDim, int32_t ___maxDim, bool ___horizontal, const MethodInfo* method) IL2CPP_METHOD_ATTR;

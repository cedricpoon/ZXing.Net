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

// ZXing.Aztec.Internal.Detector/Point
struct Point_t77292912;
// ZXing.ResultPoint
struct ResultPoint_t887763807;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.Aztec.Internal.Detector/Point::.ctor(System.Int32,System.Int32)
extern "C"  void Point__ctor_m3906812596 (Point_t77292912 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Aztec.Internal.Detector/Point::get_X()
extern "C"  int32_t Point_get_X_m2546951405 (Point_t77292912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Aztec.Internal.Detector/Point::set_X(System.Int32)
extern "C"  void Point_set_X_m3747812284 (Point_t77292912 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Aztec.Internal.Detector/Point::get_Y()
extern "C"  int32_t Point_get_Y_m2546952366 (Point_t77292912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Aztec.Internal.Detector/Point::set_Y(System.Int32)
extern "C"  void Point_set_Y_m960396797 (Point_t77292912 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint ZXing.Aztec.Internal.Detector/Point::toResultPoint()
extern "C"  ResultPoint_t887763807 * Point_toResultPoint_m480064018 (Point_t77292912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Aztec.Internal.Detector/Point::ToString()
extern "C"  String_t* Point_ToString_m25389243 (Point_t77292912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

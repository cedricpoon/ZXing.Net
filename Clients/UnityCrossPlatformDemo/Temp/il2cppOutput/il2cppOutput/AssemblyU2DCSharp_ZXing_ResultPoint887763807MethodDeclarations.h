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

// ZXing.ResultPoint
struct ResultPoint_t887763807;
// System.Object
struct Object_t;
// System.String
struct String_t;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_ZXing_ResultPoint887763807.h"

// System.Void ZXing.ResultPoint::.ctor()
extern "C"  void ResultPoint__ctor_m2244657986 (ResultPoint_t887763807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.ResultPoint::.ctor(System.Single,System.Single)
extern "C"  void ResultPoint__ctor_m4077848782 (ResultPoint_t887763807 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ZXing.ResultPoint::get_X()
extern "C"  float ResultPoint_get_X_m2331341883 (ResultPoint_t887763807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ZXing.ResultPoint::get_Y()
extern "C"  float ResultPoint_get_Y_m2331342844 (ResultPoint_t887763807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.ResultPoint::Equals(System.Object)
extern "C"  bool ResultPoint_Equals_m3127266407 (ResultPoint_t887763807 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.ResultPoint::GetHashCode()
extern "C"  int32_t ResultPoint_GetHashCode_m3695384703 (ResultPoint_t887763807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.ResultPoint::ToString()
extern "C"  String_t* ResultPoint_ToString_m731485547 (ResultPoint_t887763807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.ResultPoint::orderBestPatterns(ZXing.ResultPoint[])
extern "C"  void ResultPoint_orderBestPatterns_m1509566642 (Object_t * __this /* static, unused */, ResultPointU5BU5D_t128061510* ___patterns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ZXing.ResultPoint::distance(ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  float ResultPoint_distance_m897750433 (Object_t * __this /* static, unused */, ResultPoint_t887763807 * ___pattern1, ResultPoint_t887763807 * ___pattern2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ZXing.ResultPoint::crossProductZ(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  float ResultPoint_crossProductZ_m836061560 (Object_t * __this /* static, unused */, ResultPoint_t887763807 * ___pointA, ResultPoint_t887763807 * ___pointB, ResultPoint_t887763807 * ___pointC, const MethodInfo* method) IL2CPP_METHOD_ATTR;

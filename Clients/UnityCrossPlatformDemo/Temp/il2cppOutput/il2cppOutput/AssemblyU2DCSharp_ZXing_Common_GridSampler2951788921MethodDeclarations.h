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

// ZXing.Common.GridSampler
struct GridSampler_t2951788921;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.Common.PerspectiveTransform
struct PerspectiveTransform_t560998503;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_GridSampler2951788921.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_Common_PerspectiveTransform560998503.h"

// System.Void ZXing.Common.GridSampler::.ctor()
extern "C"  void GridSampler__ctor_m1613990930 (GridSampler_t2951788921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.GridSampler::.cctor()
extern "C"  void GridSampler__cctor_m2306982363 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.GridSampler ZXing.Common.GridSampler::get_Instance()
extern "C"  GridSampler_t2951788921 * GridSampler_get_Instance_m3778003204 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.GridSampler::setGridSampler(ZXing.Common.GridSampler)
extern "C"  void GridSampler_setGridSampler_m3284342569 (Object_t * __this /* static, unused */, GridSampler_t2951788921 * ___newGridSampler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Common.GridSampler::sampleGrid(ZXing.Common.BitMatrix,System.Int32,System.Int32,ZXing.Common.PerspectiveTransform)
extern "C"  BitMatrix_t3148694213 * GridSampler_sampleGrid_m1673297400 (GridSampler_t2951788921 * __this, BitMatrix_t3148694213 * ___image, int32_t ___dimensionX, int32_t ___dimensionY, PerspectiveTransform_t560998503 * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.GridSampler::checkAndNudgePoints(ZXing.Common.BitMatrix,System.Single[])
extern "C"  bool GridSampler_checkAndNudgePoints_m3300641529 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, SingleU5BU5D_t1219431280* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;

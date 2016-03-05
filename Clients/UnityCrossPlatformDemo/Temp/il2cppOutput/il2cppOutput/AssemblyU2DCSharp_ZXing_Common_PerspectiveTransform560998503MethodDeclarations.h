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

// ZXing.Common.PerspectiveTransform
struct PerspectiveTransform_t560998503;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_PerspectiveTransform560998503.h"

// System.Void ZXing.Common.PerspectiveTransform::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void PerspectiveTransform__ctor_m1765338929 (PerspectiveTransform_t560998503 * __this, float ___a11, float ___a21, float ___a31, float ___a12, float ___a22, float ___a32, float ___a13, float ___a23, float ___a33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.PerspectiveTransform ZXing.Common.PerspectiveTransform::quadrilateralToQuadrilateral(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  PerspectiveTransform_t560998503 * PerspectiveTransform_quadrilateralToQuadrilateral_m3752700601 (Object_t * __this /* static, unused */, float ___x0, float ___y0, float ___x1, float ___y1, float ___x2, float ___y2, float ___x3, float ___y3, float ___x0p, float ___y0p, float ___x1p, float ___y1p, float ___x2p, float ___y2p, float ___x3p, float ___y3p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.PerspectiveTransform::transformPoints(System.Single[])
extern "C"  void PerspectiveTransform_transformPoints_m921263642 (PerspectiveTransform_t560998503 * __this, SingleU5BU5D_t1219431280* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.PerspectiveTransform::transformPoints(System.Single[],System.Single[])
extern "C"  void PerspectiveTransform_transformPoints_m1588729565 (PerspectiveTransform_t560998503 * __this, SingleU5BU5D_t1219431280* ___xValues, SingleU5BU5D_t1219431280* ___yValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.PerspectiveTransform ZXing.Common.PerspectiveTransform::squareToQuadrilateral(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  PerspectiveTransform_t560998503 * PerspectiveTransform_squareToQuadrilateral_m2626577475 (Object_t * __this /* static, unused */, float ___x0, float ___y0, float ___x1, float ___y1, float ___x2, float ___y2, float ___x3, float ___y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.PerspectiveTransform ZXing.Common.PerspectiveTransform::quadrilateralToSquare(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  PerspectiveTransform_t560998503 * PerspectiveTransform_quadrilateralToSquare_m1261979155 (Object_t * __this /* static, unused */, float ___x0, float ___y0, float ___x1, float ___y1, float ___x2, float ___y2, float ___x3, float ___y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.PerspectiveTransform ZXing.Common.PerspectiveTransform::buildAdjoint()
extern "C"  PerspectiveTransform_t560998503 * PerspectiveTransform_buildAdjoint_m2602192945 (PerspectiveTransform_t560998503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.PerspectiveTransform ZXing.Common.PerspectiveTransform::times(ZXing.Common.PerspectiveTransform)
extern "C"  PerspectiveTransform_t560998503 * PerspectiveTransform_times_m913056633 (PerspectiveTransform_t560998503 * __this, PerspectiveTransform_t560998503 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;

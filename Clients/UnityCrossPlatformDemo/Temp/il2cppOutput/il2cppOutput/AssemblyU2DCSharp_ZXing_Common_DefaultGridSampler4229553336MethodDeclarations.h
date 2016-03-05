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

// ZXing.Common.DefaultGridSampler
struct DefaultGridSampler_t4229553336;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.Common.PerspectiveTransform
struct PerspectiveTransform_t560998503;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_Common_PerspectiveTransform560998503.h"

// System.Void ZXing.Common.DefaultGridSampler::.ctor()
extern "C"  void DefaultGridSampler__ctor_m4192416881 (DefaultGridSampler_t4229553336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Common.DefaultGridSampler::sampleGrid(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  BitMatrix_t3148694213 * DefaultGridSampler_sampleGrid_m3888123606 (DefaultGridSampler_t4229553336 * __this, BitMatrix_t3148694213 * ___image, int32_t ___dimensionX, int32_t ___dimensionY, float ___p1ToX, float ___p1ToY, float ___p2ToX, float ___p2ToY, float ___p3ToX, float ___p3ToY, float ___p4ToX, float ___p4ToY, float ___p1FromX, float ___p1FromY, float ___p2FromX, float ___p2FromY, float ___p3FromX, float ___p3FromY, float ___p4FromX, float ___p4FromY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Common.DefaultGridSampler::sampleGrid(ZXing.Common.BitMatrix,System.Int32,System.Int32,ZXing.Common.PerspectiveTransform)
extern "C"  BitMatrix_t3148694213 * DefaultGridSampler_sampleGrid_m2038943721 (DefaultGridSampler_t4229553336 * __this, BitMatrix_t3148694213 * ___image, int32_t ___dimensionX, int32_t ___dimensionY, PerspectiveTransform_t560998503 * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;

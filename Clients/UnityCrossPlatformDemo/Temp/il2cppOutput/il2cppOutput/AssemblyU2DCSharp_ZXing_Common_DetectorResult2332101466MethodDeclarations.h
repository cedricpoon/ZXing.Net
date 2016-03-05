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

// ZXing.Common.DetectorResult
struct DetectorResult_t2332101466;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Common.DetectorResult::.ctor(ZXing.Common.BitMatrix,ZXing.ResultPoint[])
extern "C"  void DetectorResult__ctor_m1115823515 (DetectorResult_t2332101466 * __this, BitMatrix_t3148694213 * ___bits, ResultPointU5BU5D_t128061510* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Common.DetectorResult::get_Bits()
extern "C"  BitMatrix_t3148694213 * DetectorResult_get_Bits_m1871495804 (DetectorResult_t2332101466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DetectorResult::set_Bits(ZXing.Common.BitMatrix)
extern "C"  void DetectorResult_set_Bits_m3858826627 (DetectorResult_t2332101466 * __this, BitMatrix_t3148694213 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint[] ZXing.Common.DetectorResult::get_Points()
extern "C"  ResultPointU5BU5D_t128061510* DetectorResult_get_Points_m253729849 (DetectorResult_t2332101466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DetectorResult::set_Points(ZXing.ResultPoint[])
extern "C"  void DetectorResult_set_Points_m318699666 (DetectorResult_t2332101466 * __this, ResultPointU5BU5D_t128061510* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

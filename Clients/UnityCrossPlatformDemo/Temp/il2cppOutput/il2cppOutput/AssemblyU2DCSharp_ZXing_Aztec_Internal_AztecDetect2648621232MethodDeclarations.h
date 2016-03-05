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

// ZXing.Aztec.Internal.AztecDetectorResult
struct AztecDetectorResult_t2648621232;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Aztec.Internal.AztecDetectorResult::.ctor(ZXing.Common.BitMatrix,ZXing.ResultPoint[],System.Boolean,System.Int32,System.Int32)
extern "C"  void AztecDetectorResult__ctor_m21964096 (AztecDetectorResult_t2648621232 * __this, BitMatrix_t3148694213 * ___bits, ResultPointU5BU5D_t128061510* ___points, bool ___compact, int32_t ___nbDatablocks, int32_t ___nbLayers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Aztec.Internal.AztecDetectorResult::get_Compact()
extern "C"  bool AztecDetectorResult_get_Compact_m1190094997 (AztecDetectorResult_t2648621232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Aztec.Internal.AztecDetectorResult::set_Compact(System.Boolean)
extern "C"  void AztecDetectorResult_set_Compact_m1614478476 (AztecDetectorResult_t2648621232 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Aztec.Internal.AztecDetectorResult::get_NbDatablocks()
extern "C"  int32_t AztecDetectorResult_get_NbDatablocks_m2654270542 (AztecDetectorResult_t2648621232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Aztec.Internal.AztecDetectorResult::set_NbDatablocks(System.Int32)
extern "C"  void AztecDetectorResult_set_NbDatablocks_m278981637 (AztecDetectorResult_t2648621232 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Aztec.Internal.AztecDetectorResult::get_NbLayers()
extern "C"  int32_t AztecDetectorResult_get_NbLayers_m2606738912 (AztecDetectorResult_t2648621232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Aztec.Internal.AztecDetectorResult::set_NbLayers(System.Int32)
extern "C"  void AztecDetectorResult_set_NbLayers_m3651108247 (AztecDetectorResult_t2648621232 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

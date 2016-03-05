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

// ZXing.Common.ReedSolomon.ReedSolomonEncoder
struct ReedSolomonEncoder_t3789097079;
// ZXing.Common.ReedSolomon.GenericGF
struct GenericGF_t561507308;
// ZXing.Common.ReedSolomon.GenericGFPoly
struct GenericGFPoly_t3080297688;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_ReedSolomon_GenericG561507308.h"

// System.Void ZXing.Common.ReedSolomon.ReedSolomonEncoder::.ctor(ZXing.Common.ReedSolomon.GenericGF)
extern "C"  void ReedSolomonEncoder__ctor_m999725396 (ReedSolomonEncoder_t3789097079 * __this, GenericGF_t561507308 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.ReedSolomonEncoder::buildGenerator(System.Int32)
extern "C"  GenericGFPoly_t3080297688 * ReedSolomonEncoder_buildGenerator_m3122446197 (ReedSolomonEncoder_t3789097079 * __this, int32_t ___degree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.ReedSolomon.ReedSolomonEncoder::encode(System.Int32[],System.Int32)
extern "C"  void ReedSolomonEncoder_encode_m4134469676 (ReedSolomonEncoder_t3789097079 * __this, Int32U5BU5D_t1809983122* ___toEncode, int32_t ___ecBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;

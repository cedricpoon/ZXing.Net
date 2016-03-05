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

// ZXing.Common.ReedSolomon.ReedSolomonDecoder
struct ReedSolomonDecoder_t2643931039;
// ZXing.Common.ReedSolomon.GenericGF
struct GenericGF_t561507308;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.Common.ReedSolomon.GenericGFPoly[]
struct GenericGFPolyU5BU5D_t278518985;
// ZXing.Common.ReedSolomon.GenericGFPoly
struct GenericGFPoly_t3080297688;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_ReedSolomon_GenericG561507308.h"
#include "AssemblyU2DCSharp_ZXing_Common_ReedSolomon_Generic3080297688.h"

// System.Void ZXing.Common.ReedSolomon.ReedSolomonDecoder::.ctor(ZXing.Common.ReedSolomon.GenericGF)
extern "C"  void ReedSolomonDecoder__ctor_m1310099756 (ReedSolomonDecoder_t2643931039 * __this, GenericGF_t561507308 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.ReedSolomon.ReedSolomonDecoder::decode(System.Int32[],System.Int32)
extern "C"  bool ReedSolomonDecoder_decode_m1010136032 (ReedSolomonDecoder_t2643931039 * __this, Int32U5BU5D_t1809983122* ___received, int32_t ___twoS, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.ReedSolomon.GenericGFPoly[] ZXing.Common.ReedSolomon.ReedSolomonDecoder::runEuclideanAlgorithm(ZXing.Common.ReedSolomon.GenericGFPoly,ZXing.Common.ReedSolomon.GenericGFPoly,System.Int32)
extern "C"  GenericGFPolyU5BU5D_t278518985* ReedSolomonDecoder_runEuclideanAlgorithm_m71849606 (ReedSolomonDecoder_t2643931039 * __this, GenericGFPoly_t3080297688 * ___a, GenericGFPoly_t3080297688 * ___b, int32_t ___R, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.Common.ReedSolomon.ReedSolomonDecoder::findErrorLocations(ZXing.Common.ReedSolomon.GenericGFPoly)
extern "C"  Int32U5BU5D_t1809983122* ReedSolomonDecoder_findErrorLocations_m1140991707 (ReedSolomonDecoder_t2643931039 * __this, GenericGFPoly_t3080297688 * ___errorLocator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.Common.ReedSolomon.ReedSolomonDecoder::findErrorMagnitudes(ZXing.Common.ReedSolomon.GenericGFPoly,System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* ReedSolomonDecoder_findErrorMagnitudes_m2038031097 (ReedSolomonDecoder_t2643931039 * __this, GenericGFPoly_t3080297688 * ___errorEvaluator, Int32U5BU5D_t1809983122* ___errorLocations, const MethodInfo* method) IL2CPP_METHOD_ATTR;

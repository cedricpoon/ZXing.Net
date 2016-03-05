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

// ZXing.PDF417.Internal.EC.ErrorCorrection
struct ErrorCorrection_t2611319879;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.PDF417.Internal.EC.ModulusPoly[]
struct ModulusPolyU5BU5D_t1614858829;
// ZXing.PDF417.Internal.EC.ModulusPoly
struct ModulusPoly_t1901871780;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_EC_Modulus1901871780.h"

// System.Void ZXing.PDF417.Internal.EC.ErrorCorrection::.ctor()
extern "C"  void ErrorCorrection__ctor_m1724774800 (ErrorCorrection_t2611319879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.EC.ErrorCorrection::decode(System.Int32[],System.Int32,System.Int32[],System.Int32&)
extern "C"  bool ErrorCorrection_decode_m2021825080 (ErrorCorrection_t2611319879 * __this, Int32U5BU5D_t1809983122* ___received, int32_t ___numECCodewords, Int32U5BU5D_t1809983122* ___erasures, int32_t* ___errorLocationsCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.EC.ModulusPoly[] ZXing.PDF417.Internal.EC.ErrorCorrection::runEuclideanAlgorithm(ZXing.PDF417.Internal.EC.ModulusPoly,ZXing.PDF417.Internal.EC.ModulusPoly,System.Int32)
extern "C"  ModulusPolyU5BU5D_t1614858829* ErrorCorrection_runEuclideanAlgorithm_m2914948232 (ErrorCorrection_t2611319879 * __this, ModulusPoly_t1901871780 * ___a, ModulusPoly_t1901871780 * ___b, int32_t ___R, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.PDF417.Internal.EC.ErrorCorrection::findErrorLocations(ZXing.PDF417.Internal.EC.ModulusPoly)
extern "C"  Int32U5BU5D_t1809983122* ErrorCorrection_findErrorLocations_m3810676999 (ErrorCorrection_t2611319879 * __this, ModulusPoly_t1901871780 * ___errorLocator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.PDF417.Internal.EC.ErrorCorrection::findErrorMagnitudes(ZXing.PDF417.Internal.EC.ModulusPoly,ZXing.PDF417.Internal.EC.ModulusPoly,System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* ErrorCorrection_findErrorMagnitudes_m496952099 (ErrorCorrection_t2611319879 * __this, ModulusPoly_t1901871780 * ___errorEvaluator, ModulusPoly_t1901871780 * ___errorLocator, Int32U5BU5D_t1809983122* ___errorLocations, const MethodInfo* method) IL2CPP_METHOD_ATTR;

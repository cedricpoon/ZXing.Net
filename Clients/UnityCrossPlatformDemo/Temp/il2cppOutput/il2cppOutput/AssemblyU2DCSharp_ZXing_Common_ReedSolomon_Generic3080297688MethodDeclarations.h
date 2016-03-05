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

// ZXing.Common.ReedSolomon.GenericGFPoly
struct GenericGFPoly_t3080297688;
// ZXing.Common.ReedSolomon.GenericGF
struct GenericGF_t561507308;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.Common.ReedSolomon.GenericGFPoly[]
struct GenericGFPolyU5BU5D_t278518985;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_ReedSolomon_GenericG561507308.h"
#include "AssemblyU2DCSharp_ZXing_Common_ReedSolomon_Generic3080297688.h"

// System.Void ZXing.Common.ReedSolomon.GenericGFPoly::.ctor(ZXing.Common.ReedSolomon.GenericGF,System.Int32[])
extern "C"  void GenericGFPoly__ctor_m3387337786 (GenericGFPoly_t3080297688 * __this, GenericGF_t561507308 * ___field, Int32U5BU5D_t1809983122* ___coefficients, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.Common.ReedSolomon.GenericGFPoly::get_Coefficients()
extern "C"  Int32U5BU5D_t1809983122* GenericGFPoly_get_Coefficients_m2615712274 (GenericGFPoly_t3080297688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.ReedSolomon.GenericGFPoly::get_Degree()
extern "C"  int32_t GenericGFPoly_get_Degree_m2575604066 (GenericGFPoly_t3080297688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.ReedSolomon.GenericGFPoly::get_isZero()
extern "C"  bool GenericGFPoly_get_isZero_m351737230 (GenericGFPoly_t3080297688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.ReedSolomon.GenericGFPoly::getCoefficient(System.Int32)
extern "C"  int32_t GenericGFPoly_getCoefficient_m1171959869 (GenericGFPoly_t3080297688 * __this, int32_t ___degree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.ReedSolomon.GenericGFPoly::evaluateAt(System.Int32)
extern "C"  int32_t GenericGFPoly_evaluateAt_m1370338858 (GenericGFPoly_t3080297688 * __this, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.GenericGFPoly::addOrSubtract(ZXing.Common.ReedSolomon.GenericGFPoly)
extern "C"  GenericGFPoly_t3080297688 * GenericGFPoly_addOrSubtract_m2922565406 (GenericGFPoly_t3080297688 * __this, GenericGFPoly_t3080297688 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.GenericGFPoly::multiply(ZXing.Common.ReedSolomon.GenericGFPoly)
extern "C"  GenericGFPoly_t3080297688 * GenericGFPoly_multiply_m4120277332 (GenericGFPoly_t3080297688 * __this, GenericGFPoly_t3080297688 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.GenericGFPoly::multiply(System.Int32)
extern "C"  GenericGFPoly_t3080297688 * GenericGFPoly_multiply_m237478043 (GenericGFPoly_t3080297688 * __this, int32_t ___scalar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.GenericGFPoly::multiplyByMonomial(System.Int32,System.Int32)
extern "C"  GenericGFPoly_t3080297688 * GenericGFPoly_multiplyByMonomial_m1334961403 (GenericGFPoly_t3080297688 * __this, int32_t ___degree, int32_t ___coefficient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.ReedSolomon.GenericGFPoly[] ZXing.Common.ReedSolomon.GenericGFPoly::divide(ZXing.Common.ReedSolomon.GenericGFPoly)
extern "C"  GenericGFPolyU5BU5D_t278518985* GenericGFPoly_divide_m1254564487 (GenericGFPoly_t3080297688 * __this, GenericGFPoly_t3080297688 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Common.ReedSolomon.GenericGFPoly::ToString()
extern "C"  String_t* GenericGFPoly_ToString_m216370702 (GenericGFPoly_t3080297688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

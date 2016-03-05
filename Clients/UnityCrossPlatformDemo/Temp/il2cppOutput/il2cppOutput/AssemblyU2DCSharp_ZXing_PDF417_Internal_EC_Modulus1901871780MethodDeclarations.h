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

// ZXing.PDF417.Internal.EC.ModulusPoly
struct ModulusPoly_t1901871780;
// ZXing.PDF417.Internal.EC.ModulusGF
struct ModulusGF_t1405733207;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.PDF417.Internal.EC.ModulusPoly[]
struct ModulusPolyU5BU5D_t1614858829;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_EC_Modulus1405733207.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_EC_Modulus1901871780.h"

// System.Void ZXing.PDF417.Internal.EC.ModulusPoly::.ctor(ZXing.PDF417.Internal.EC.ModulusGF,System.Int32[])
extern "C"  void ModulusPoly__ctor_m4237644605 (ModulusPoly_t1901871780 * __this, ModulusGF_t1405733207 * ___field, Int32U5BU5D_t1809983122* ___coefficients, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.PDF417.Internal.EC.ModulusPoly::get_Coefficients()
extern "C"  Int32U5BU5D_t1809983122* ModulusPoly_get_Coefficients_m2342941028 (ModulusPoly_t1901871780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.EC.ModulusPoly::get_Degree()
extern "C"  int32_t ModulusPoly_get_Degree_m882267828 (ModulusPoly_t1901871780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.EC.ModulusPoly::get_isZero()
extern "C"  bool ModulusPoly_get_isZero_m1374815328 (ModulusPoly_t1901871780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.EC.ModulusPoly::getCoefficient(System.Int32)
extern "C"  int32_t ModulusPoly_getCoefficient_m3728443791 (ModulusPoly_t1901871780 * __this, int32_t ___degree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.EC.ModulusPoly::evaluateAt(System.Int32)
extern "C"  int32_t ModulusPoly_evaluateAt_m4244899964 (ModulusPoly_t1901871780 * __this, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusPoly::add(ZXing.PDF417.Internal.EC.ModulusPoly)
extern "C"  ModulusPoly_t1901871780 * ModulusPoly_add_m946652821 (ModulusPoly_t1901871780 * __this, ModulusPoly_t1901871780 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusPoly::subtract(ZXing.PDF417.Internal.EC.ModulusPoly)
extern "C"  ModulusPoly_t1901871780 * ModulusPoly_subtract_m3758553522 (ModulusPoly_t1901871780 * __this, ModulusPoly_t1901871780 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusPoly::multiply(ZXing.PDF417.Internal.EC.ModulusPoly)
extern "C"  ModulusPoly_t1901871780 * ModulusPoly_multiply_m475773122 (ModulusPoly_t1901871780 * __this, ModulusPoly_t1901871780 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusPoly::getNegative()
extern "C"  ModulusPoly_t1901871780 * ModulusPoly_getNegative_m1466079591 (ModulusPoly_t1901871780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusPoly::multiply(System.Int32)
extern "C"  ModulusPoly_t1901871780 * ModulusPoly_multiply_m771803355 (ModulusPoly_t1901871780 * __this, int32_t ___scalar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusPoly::multiplyByMonomial(System.Int32,System.Int32)
extern "C"  ModulusPoly_t1901871780 * ModulusPoly_multiplyByMonomial_m2857333947 (ModulusPoly_t1901871780 * __this, int32_t ___degree, int32_t ___coefficient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.EC.ModulusPoly[] ZXing.PDF417.Internal.EC.ModulusPoly::divide(ZXing.PDF417.Internal.EC.ModulusPoly)
extern "C"  ModulusPolyU5BU5D_t1614858829* ModulusPoly_divide_m3709052597 (ModulusPoly_t1901871780 * __this, ModulusPoly_t1901871780 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.PDF417.Internal.EC.ModulusPoly::ToString()
extern "C"  String_t* ModulusPoly_ToString_m4021332256 (ModulusPoly_t1901871780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

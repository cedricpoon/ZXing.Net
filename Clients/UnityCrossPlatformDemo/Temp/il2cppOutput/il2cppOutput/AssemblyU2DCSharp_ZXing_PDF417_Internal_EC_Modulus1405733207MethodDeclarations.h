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

// ZXing.PDF417.Internal.EC.ModulusGF
struct ModulusGF_t1405733207;
// ZXing.PDF417.Internal.EC.ModulusPoly
struct ModulusPoly_t1901871780;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_EC_Modulus1901871780.h"

// System.Void ZXing.PDF417.Internal.EC.ModulusGF::.ctor(System.Int32,System.Int32)
extern "C"  void ModulusGF__ctor_m694366822 (ModulusGF_t1405733207 * __this, int32_t ___modulus, int32_t ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.EC.ModulusGF::.cctor()
extern "C"  void ModulusGF__cctor_m2018536173 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusGF::get_Zero()
extern "C"  ModulusPoly_t1901871780 * ModulusGF_get_Zero_m1883376106 (ModulusGF_t1405733207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.EC.ModulusGF::set_Zero(ZXing.PDF417.Internal.EC.ModulusPoly)
extern "C"  void ModulusGF_set_Zero_m3839006945 (ModulusGF_t1405733207 * __this, ModulusPoly_t1901871780 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusGF::get_One()
extern "C"  ModulusPoly_t1901871780 * ModulusGF_get_One_m466490758 (ModulusGF_t1405733207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.EC.ModulusGF::set_One(ZXing.PDF417.Internal.EC.ModulusPoly)
extern "C"  void ModulusGF_set_One_m3903930655 (ModulusGF_t1405733207 * __this, ModulusPoly_t1901871780 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusGF::buildMonomial(System.Int32,System.Int32)
extern "C"  ModulusPoly_t1901871780 * ModulusGF_buildMonomial_m3244066469 (ModulusGF_t1405733207 * __this, int32_t ___degree, int32_t ___coefficient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.EC.ModulusGF::add(System.Int32,System.Int32)
extern "C"  int32_t ModulusGF_add_m2747188469 (ModulusGF_t1405733207 * __this, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.EC.ModulusGF::subtract(System.Int32,System.Int32)
extern "C"  int32_t ModulusGF_subtract_m412905312 (ModulusGF_t1405733207 * __this, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.EC.ModulusGF::exp(System.Int32)
extern "C"  int32_t ModulusGF_exp_m144000926 (ModulusGF_t1405733207 * __this, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.EC.ModulusGF::log(System.Int32)
extern "C"  int32_t ModulusGF_log_m644010117 (ModulusGF_t1405733207 * __this, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.EC.ModulusGF::inverse(System.Int32)
extern "C"  int32_t ModulusGF_inverse_m3484904433 (ModulusGF_t1405733207 * __this, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.EC.ModulusGF::multiply(System.Int32,System.Int32)
extern "C"  int32_t ModulusGF_multiply_m264796752 (ModulusGF_t1405733207 * __this, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.EC.ModulusGF::get_Size()
extern "C"  int32_t ModulusGF_get_Size_m171635036 (ModulusGF_t1405733207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

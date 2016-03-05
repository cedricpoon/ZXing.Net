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

// ZXing.Common.ReedSolomon.GenericGF
struct GenericGF_t561507308;
// ZXing.Common.ReedSolomon.GenericGFPoly
struct GenericGFPoly_t3080297688;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.Common.ReedSolomon.GenericGF::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void GenericGF__ctor_m3297087106 (GenericGF_t561507308 * __this, int32_t ___primitive, int32_t ___size, int32_t ___genBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.ReedSolomon.GenericGF::.cctor()
extern "C"  void GenericGF__cctor_m4029999612 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.GenericGF::get_Zero()
extern "C"  GenericGFPoly_t3080297688 * GenericGF_get_Zero_m816036235 (GenericGF_t561507308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.GenericGF::get_One()
extern "C"  GenericGFPoly_t3080297688 * GenericGF_get_One_m1956081093 (GenericGF_t561507308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.GenericGF::buildMonomial(System.Int32,System.Int32)
extern "C"  GenericGFPoly_t3080297688 * GenericGF_buildMonomial_m2840061574 (GenericGF_t561507308 * __this, int32_t ___degree, int32_t ___coefficient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.ReedSolomon.GenericGF::addOrSubtract(System.Int32,System.Int32)
extern "C"  int32_t GenericGF_addOrSubtract_m954231661 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.ReedSolomon.GenericGF::exp(System.Int32)
extern "C"  int32_t GenericGF_exp_m4036839791 (GenericGF_t561507308 * __this, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.ReedSolomon.GenericGF::log(System.Int32)
extern "C"  int32_t GenericGF_log_m241881686 (GenericGF_t561507308 * __this, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.ReedSolomon.GenericGF::inverse(System.Int32)
extern "C"  int32_t GenericGF_inverse_m2371362114 (GenericGF_t561507308 * __this, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.ReedSolomon.GenericGF::multiply(System.Int32,System.Int32)
extern "C"  int32_t GenericGF_multiply_m2555120097 (GenericGF_t561507308 * __this, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.ReedSolomon.GenericGF::get_Size()
extern "C"  int32_t GenericGF_get_Size_m452716715 (GenericGF_t561507308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.ReedSolomon.GenericGF::get_GeneratorBase()
extern "C"  int32_t GenericGF_get_GeneratorBase_m2543275644 (GenericGF_t561507308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Common.ReedSolomon.GenericGF::ToString()
extern "C"  String_t* GenericGF_ToString_m2281666210 (GenericGF_t561507308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

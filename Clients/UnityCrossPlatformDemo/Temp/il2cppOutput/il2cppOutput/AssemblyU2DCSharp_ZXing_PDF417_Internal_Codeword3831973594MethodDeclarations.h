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

// ZXing.PDF417.Internal.Codeword
struct Codeword_t3831973594;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.PDF417.Internal.Codeword::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Codeword__ctor_m4162973367 (Codeword_t3831973594 * __this, int32_t ___startX, int32_t ___endX, int32_t ___bucket, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.Codeword::.cctor()
extern "C"  void Codeword__cctor_m3228930974 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.Codeword::get_StartX()
extern "C"  int32_t Codeword_get_StartX_m1989050626 (Codeword_t3831973594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.Codeword::set_StartX(System.Int32)
extern "C"  void Codeword_set_StartX_m2838353337 (Codeword_t3831973594 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.Codeword::get_EndX()
extern "C"  int32_t Codeword_get_EndX_m873993385 (Codeword_t3831973594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.Codeword::set_EndX(System.Int32)
extern "C"  void Codeword_set_EndX_m272205920 (Codeword_t3831973594 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.Codeword::get_Bucket()
extern "C"  int32_t Codeword_get_Bucket_m3363923382 (Codeword_t3831973594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.Codeword::set_Bucket(System.Int32)
extern "C"  void Codeword_set_Bucket_m101403757 (Codeword_t3831973594 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.Codeword::get_Value()
extern "C"  int32_t Codeword_get_Value_m3162783623 (Codeword_t3831973594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.Codeword::set_Value(System.Int32)
extern "C"  void Codeword_set_Value_m3430935346 (Codeword_t3831973594 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.Codeword::get_RowNumber()
extern "C"  int32_t Codeword_get_RowNumber_m3041158361 (Codeword_t3831973594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.Codeword::set_RowNumber(System.Int32)
extern "C"  void Codeword_set_RowNumber_m971286660 (Codeword_t3831973594 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.Codeword::get_Width()
extern "C"  int32_t Codeword_get_Width_m4271905436 (Codeword_t3831973594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.Codeword::get_HasValidRowNumber()
extern "C"  bool Codeword_get_HasValidRowNumber_m4071232913 (Codeword_t3831973594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.Codeword::IsValidRowNumber(System.Int32)
extern "C"  bool Codeword_IsValidRowNumber_m3617511467 (Codeword_t3831973594 * __this, int32_t ___rowNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.Codeword::setRowNumberAsRowIndicatorColumn()
extern "C"  void Codeword_setRowNumberAsRowIndicatorColumn_m610417107 (Codeword_t3831973594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.PDF417.Internal.Codeword::ToString()
extern "C"  String_t* Codeword_ToString_m807938372 (Codeword_t3831973594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

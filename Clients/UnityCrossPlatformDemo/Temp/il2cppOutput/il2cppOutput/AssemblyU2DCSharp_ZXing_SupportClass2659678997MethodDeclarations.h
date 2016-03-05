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

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ZXing.SupportClass::GetCharsFromString(System.String,System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  void SupportClass_GetCharsFromString_m2407663006 (Object_t * __this /* static, unused */, String_t* ___sourceString, int32_t ___sourceStart, int32_t ___sourceEnd, CharU5BU5D_t3416858730* ___destinationArray, int32_t ___destinationStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ZXing.SupportClass::toStringArray(System.Collections.Generic.ICollection`1<System.String>)
extern "C"  StringU5BU5D_t2956870243* SupportClass_toStringArray_m2552770911 (Object_t * __this /* static, unused */, Object_t* ___strings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.SupportClass::ToBinaryString(System.Int32)
extern "C"  String_t* SupportClass_ToBinaryString_m525765533 (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.SupportClass::bitCount(System.Int32)
extern "C"  int32_t SupportClass_bitCount_m491095517 (Object_t * __this /* static, unused */, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;

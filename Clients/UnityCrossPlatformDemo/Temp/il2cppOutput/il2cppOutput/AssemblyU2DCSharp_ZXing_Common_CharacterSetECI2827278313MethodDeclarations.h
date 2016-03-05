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

// ZXing.Common.CharacterSetECI
struct CharacterSetECI_t2827278313;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ZXing.Common.CharacterSetECI::.ctor(System.Int32,System.String)
extern "C"  void CharacterSetECI__ctor_m2089545839 (CharacterSetECI_t2827278313 * __this, int32_t ___value, String_t* ___encodingName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.CharacterSetECI::.cctor()
extern "C"  void CharacterSetECI__cctor_m4171396299 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Common.CharacterSetECI::get_EncodingName()
extern "C"  String_t* CharacterSetECI_get_EncodingName_m1851240332 (CharacterSetECI_t2827278313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.CharacterSetECI::addCharacterSet(System.Int32,System.String)
extern "C"  void CharacterSetECI_addCharacterSet_m1426507303 (Object_t * __this /* static, unused */, int32_t ___value, String_t* ___encodingName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.CharacterSetECI::addCharacterSet(System.Int32,System.String[])
extern "C"  void CharacterSetECI_addCharacterSet_m779001733 (Object_t * __this /* static, unused */, int32_t ___value, StringU5BU5D_t2956870243* ___encodingNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.CharacterSetECI ZXing.Common.CharacterSetECI::getCharacterSetECIByValue(System.Int32)
extern "C"  CharacterSetECI_t2827278313 * CharacterSetECI_getCharacterSetECIByValue_m87715851 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.CharacterSetECI ZXing.Common.CharacterSetECI::getCharacterSetECIByName(System.String)
extern "C"  CharacterSetECI_t2827278313 * CharacterSetECI_getCharacterSetECIByName_m3571497278 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;

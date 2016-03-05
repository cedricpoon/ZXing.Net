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
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.Common.StringUtils::.cctor()
extern "C"  void StringUtils__cctor_m3879320985 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Common.StringUtils::guessEncoding(System.Byte[],System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  String_t* StringUtils_guessEncoding_m785404349 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;

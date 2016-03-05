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

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3313246173;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.PDF417.PDF417Common::.cctor()
extern "C"  void PDF417Common__cctor_m1529875473 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.PDF417Common::getBitCountSum(System.Int32[])
extern "C"  int32_t PDF417Common_getBitCountSum_m1400965468 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___moduleBitCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.PDF417.PDF417Common::toIntArray(System.Collections.Generic.ICollection`1<System.Int32>)
extern "C"  Int32U5BU5D_t1809983122* PDF417Common_toIntArray_m1279612421 (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.PDF417Common::getCodeword(System.Int64)
extern "C"  int32_t PDF417Common_getCodeword_m848386983 (Object_t * __this /* static, unused */, int64_t ___symbol, const MethodInfo* method) IL2CPP_METHOD_ATTR;

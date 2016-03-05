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

// System.Collections.Generic.Dictionary`2/Transform`1<ZXing.EncodeHintType,System.Object,System.Collections.Generic.KeyValuePair`2<ZXing.EncodeHintType,System.Object>>
struct Transform_1_t3807651398;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23075768373.h"
#include "AssemblyU2DCSharp_ZXing_EncodeHintType1878827715.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ZXing.EncodeHintType,System.Object,System.Collections.Generic.KeyValuePair`2<ZXing.EncodeHintType,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3913173042_gshared (Transform_1_t3807651398 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3913173042(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3807651398 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3913173042_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZXing.EncodeHintType,System.Object,System.Collections.Generic.KeyValuePair`2<ZXing.EncodeHintType,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3075768373  Transform_1_Invoke_m384005382_gshared (Transform_1_t3807651398 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m384005382(__this, ___key, ___value, method) ((  KeyValuePair_2_t3075768373  (*) (Transform_1_t3807651398 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m384005382_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ZXing.EncodeHintType,System.Object,System.Collections.Generic.KeyValuePair`2<ZXing.EncodeHintType,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m2712071729_gshared (Transform_1_t3807651398 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2712071729(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t3807651398 *, int32_t, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m2712071729_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZXing.EncodeHintType,System.Object,System.Collections.Generic.KeyValuePair`2<ZXing.EncodeHintType,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3075768373  Transform_1_EndInvoke_m916843460_gshared (Transform_1_t3807651398 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m916843460(__this, ___result, method) ((  KeyValuePair_2_t3075768373  (*) (Transform_1_t3807651398 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m916843460_gshared)(__this, ___result, method)

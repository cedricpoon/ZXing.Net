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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct Transform_1_t3528855082;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22826756868.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4243145684_gshared (Transform_1_t3528855082 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m4243145684(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3528855082 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4243145684_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2826756868  Transform_1_Invoke_m3806805284_gshared (Transform_1_t3528855082 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3806805284(__this, ___key, ___value, method) ((  KeyValuePair_2_t2826756868  (*) (Transform_1_t3528855082 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m3806805284_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m2237662671_gshared (Transform_1_t3528855082 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2237662671(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t3528855082 *, int32_t, int32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m2237662671_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2826756868  Transform_1_EndInvoke_m2328265958_gshared (Transform_1_t3528855082 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2328265958(__this, ___result, method) ((  KeyValuePair_2_t2826756868  (*) (Transform_1_t3528855082 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m2328265958_gshared)(__this, ___result, method)

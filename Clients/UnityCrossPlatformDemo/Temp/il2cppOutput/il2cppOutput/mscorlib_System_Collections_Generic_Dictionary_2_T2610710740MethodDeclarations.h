﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<ZXing.EncodeHintType,System.Object,ZXing.EncodeHintType>
struct Transform_1_t2610710740;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_ZXing_EncodeHintType1878827715.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ZXing.EncodeHintType,System.Object,ZXing.EncodeHintType>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4247140075_gshared (Transform_1_t2610710740 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m4247140075(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2610710740 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4247140075_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZXing.EncodeHintType,System.Object,ZXing.EncodeHintType>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m1276575793_gshared (Transform_1_t2610710740 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1276575793(__this, ___key, ___value, method) ((  int32_t (*) (Transform_1_t2610710740 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m1276575793_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ZXing.EncodeHintType,System.Object,ZXing.EncodeHintType>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m486722064_gshared (Transform_1_t2610710740 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m486722064(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t2610710740 *, int32_t, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m486722064_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZXing.EncodeHintType,System.Object,ZXing.EncodeHintType>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m2469676985_gshared (Transform_1_t2610710740 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2469676985(__this, ___result, method) ((  int32_t (*) (Transform_1_t2610710740 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m2469676985_gshared)(__this, ___result, method)

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

// System.Collections.Generic.Dictionary`2/Transform`1<ZXing.DecodeHintType,System.Object,System.Collections.Generic.KeyValuePair`2<ZXing.DecodeHintType,System.Object>>
struct Transform_1_t1906425382;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_538747389.h"
#include "AssemblyU2DCSharp_ZXing_DecodeHintType730046107.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ZXing.DecodeHintType,System.Object,System.Collections.Generic.KeyValuePair`2<ZXing.DecodeHintType,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1200719666_gshared (Transform_1_t1906425382 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1200719666(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1906425382 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1200719666_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZXing.DecodeHintType,System.Object,System.Collections.Generic.KeyValuePair`2<ZXing.DecodeHintType,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t538747389  Transform_1_Invoke_m1515853318_gshared (Transform_1_t1906425382 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1515853318(__this, ___key, ___value, method) ((  KeyValuePair_2_t538747389  (*) (Transform_1_t1906425382 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m1515853318_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ZXing.DecodeHintType,System.Object,System.Collections.Generic.KeyValuePair`2<ZXing.DecodeHintType,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m1915260721_gshared (Transform_1_t1906425382 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1915260721(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1906425382 *, int32_t, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1915260721_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZXing.DecodeHintType,System.Object,System.Collections.Generic.KeyValuePair`2<ZXing.DecodeHintType,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t538747389  Transform_1_EndInvoke_m108047044_gshared (Transform_1_t1906425382 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m108047044(__this, ___result, method) ((  KeyValuePair_2_t538747389  (*) (Transform_1_t1906425382 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m108047044_gshared)(__this, ___result, method)

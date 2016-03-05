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

// System.Func`4<System.Object,System.Int32,System.Int32,System.Object>
struct Func_4_t269510154;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`4<System.Object,System.Int32,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_4__ctor_m1271633066_gshared (Func_4_t269510154 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_4__ctor_m1271633066(__this, ___object, ___method, method) ((  void (*) (Func_4_t269510154 *, Object_t *, IntPtr_t, const MethodInfo*))Func_4__ctor_m1271633066_gshared)(__this, ___object, ___method, method)
// TResult System.Func`4<System.Object,System.Int32,System.Int32,System.Object>::Invoke(T1,T2,T3)
extern "C"  Object_t * Func_4_Invoke_m1626437128_gshared (Func_4_t269510154 * __this, Object_t * ___arg1, int32_t ___arg2, int32_t ___arg3, const MethodInfo* method);
#define Func_4_Invoke_m1626437128(__this, ___arg1, ___arg2, ___arg3, method) ((  Object_t * (*) (Func_4_t269510154 *, Object_t *, int32_t, int32_t, const MethodInfo*))Func_4_Invoke_m1626437128_gshared)(__this, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult System.Func`4<System.Object,System.Int32,System.Int32,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_4_BeginInvoke_m2187110173_gshared (Func_4_t269510154 * __this, Object_t * ___arg1, int32_t ___arg2, int32_t ___arg3, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_4_BeginInvoke_m2187110173(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) ((  Object_t * (*) (Func_4_t269510154 *, Object_t *, int32_t, int32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_4_BeginInvoke_m2187110173_gshared)(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// TResult System.Func`4<System.Object,System.Int32,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Func_4_EndInvoke_m2013145180_gshared (Func_4_t269510154 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_4_EndInvoke_m2013145180(__this, ___result, method) ((  Object_t * (*) (Func_4_t269510154 *, Object_t *, const MethodInfo*))Func_4_EndInvoke_m2013145180_gshared)(__this, ___result, method)

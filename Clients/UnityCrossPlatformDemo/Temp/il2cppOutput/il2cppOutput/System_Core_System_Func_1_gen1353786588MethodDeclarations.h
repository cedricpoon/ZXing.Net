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

// System.Func`1<System.Boolean>
struct Func_1_t1353786588;
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

// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m3425941956_gshared (Func_1_t1353786588 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m3425941956(__this, ___object, ___method, method) ((  void (*) (Func_1_t1353786588 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m3425941956_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Boolean>::Invoke()
extern "C"  bool Func_1_Invoke_m1113859879_gshared (Func_1_t1353786588 * __this, const MethodInfo* method);
#define Func_1_Invoke_m1113859879(__this, method) ((  bool (*) (Func_1_t1353786588 *, const MethodInfo*))Func_1_Invoke_m1113859879_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Boolean>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_1_BeginInvoke_m3591134397_gshared (Func_1_t1353786588 * __this, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m3591134397(__this, ___callback, ___object, method) ((  Object_t * (*) (Func_1_t1353786588 *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m3591134397_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_1_EndInvoke_m3823601762_gshared (Func_1_t1353786588 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m3823601762(__this, ___result, method) ((  bool (*) (Func_1_t1353786588 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m3823601762_gshared)(__this, ___result, method)

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

// ZXing.ResultPointCallback
struct ResultPointCallback_t108115140;
// System.Object
struct Object_t;
// ZXing.ResultPoint
struct ResultPoint_t887763807;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_ZXing_ResultPoint887763807.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void ZXing.ResultPointCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ResultPointCallback__ctor_m470017157 (ResultPointCallback_t108115140 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.ResultPointCallback::Invoke(ZXing.ResultPoint)
extern "C"  void ResultPointCallback_Invoke_m2499541706 (ResultPointCallback_t108115140 * __this, ResultPoint_t887763807 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ResultPointCallback_t108115140(Il2CppObject* delegate, ResultPoint_t887763807 * ___point);
// System.IAsyncResult ZXing.ResultPointCallback::BeginInvoke(ZXing.ResultPoint,System.AsyncCallback,System.Object)
extern "C"  Object_t * ResultPointCallback_BeginInvoke_m1406300393 (ResultPointCallback_t108115140 * __this, ResultPoint_t887763807 * ___point, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.ResultPointCallback::EndInvoke(System.IAsyncResult)
extern "C"  void ResultPointCallback_EndInvoke_m2720030997 (ResultPointCallback_t108115140 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

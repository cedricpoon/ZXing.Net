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

// System.Collections.Generic.Dictionary`2/Transform`1<ZXing.Aztec.Internal.Decoder/Table,System.Object,System.Object>
struct Transform_1_t1501734840;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_ZXing_Aztec_Internal_Decoder_Table80563118.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ZXing.Aztec.Internal.Decoder/Table,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2632117888_gshared (Transform_1_t1501734840 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2632117888(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1501734840 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2632117888_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZXing.Aztec.Internal.Decoder/Table,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C"  Object_t * Transform_1_Invoke_m2753267704_gshared (Transform_1_t1501734840 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2753267704(__this, ___key, ___value, method) ((  Object_t * (*) (Transform_1_t1501734840 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m2753267704_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ZXing.Aztec.Internal.Decoder/Table,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m4235756707_gshared (Transform_1_t1501734840 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4235756707(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1501734840 *, int32_t, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m4235756707_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ZXing.Aztec.Internal.Decoder/Table,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Transform_1_EndInvoke_m2046619026_gshared (Transform_1_t1501734840 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2046619026(__this, ___result, method) ((  Object_t * (*) (Transform_1_t1501734840 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m2046619026_gshared)(__this, ___result, method)

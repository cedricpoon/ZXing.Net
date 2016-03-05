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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Char,ZXing.Aztec.Internal.Decoder/Table,ZXing.Aztec.Internal.Decoder/Table>
struct Transform_1_t779523557;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Char,ZXing.Aztec.Internal.Decoder/Table,ZXing.Aztec.Internal.Decoder/Table>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2141786512_gshared (Transform_1_t779523557 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2141786512(__this, ___object, ___method, method) ((  void (*) (Transform_1_t779523557 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2141786512_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Char,ZXing.Aztec.Internal.Decoder/Table,ZXing.Aztec.Internal.Decoder/Table>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m671748524_gshared (Transform_1_t779523557 * __this, uint16_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m671748524(__this, ___key, ___value, method) ((  int32_t (*) (Transform_1_t779523557 *, uint16_t, int32_t, const MethodInfo*))Transform_1_Invoke_m671748524_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Char,ZXing.Aztec.Internal.Decoder/Table,ZXing.Aztec.Internal.Decoder/Table>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m1796866059_gshared (Transform_1_t779523557 * __this, uint16_t ___key, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1796866059(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t779523557 *, uint16_t, int32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1796866059_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Char,ZXing.Aztec.Internal.Decoder/Table,ZXing.Aztec.Internal.Decoder/Table>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m1337396062_gshared (Transform_1_t779523557 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1337396062(__this, ___result, method) ((  int32_t (*) (Transform_1_t779523557 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1337396062_gshared)(__this, ___result, method)

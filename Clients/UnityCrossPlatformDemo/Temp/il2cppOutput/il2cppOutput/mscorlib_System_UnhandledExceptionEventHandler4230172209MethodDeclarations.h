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

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t4230172209;
// System.Object
struct Object_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2796503648;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_UnhandledExceptionEventArgs2796503648.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UnhandledExceptionEventHandler__ctor_m2560140041 (UnhandledExceptionEventHandler_t4230172209 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void UnhandledExceptionEventHandler_Invoke_m689053609 (UnhandledExceptionEventHandler_t4230172209 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t2796503648 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t4230172209(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t2796503648 * ___e);
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C"  Object_t * UnhandledExceptionEventHandler_BeginInvoke_m4281537936 (UnhandledExceptionEventHandler_t4230172209 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t2796503648 * ___e, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UnhandledExceptionEventHandler_EndInvoke_m2562785689 (UnhandledExceptionEventHandler_t4230172209 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

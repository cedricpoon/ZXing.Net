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

// ZXing.WriterException
struct WriterException_t3080435976;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void ZXing.WriterException::.ctor()
extern "C"  void WriterException__ctor_m799597241 (WriterException_t3080435976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.WriterException::.ctor(System.String)
extern "C"  void WriterException__ctor_m1560195305 (WriterException_t3080435976 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.WriterException::.ctor(System.String,System.Exception)
extern "C"  void WriterException__ctor_m3316769645 (WriterException_t3080435976 * __this, String_t* ___message, Exception_t1967233988 * ___innerExc, const MethodInfo* method) IL2CPP_METHOD_ATTR;

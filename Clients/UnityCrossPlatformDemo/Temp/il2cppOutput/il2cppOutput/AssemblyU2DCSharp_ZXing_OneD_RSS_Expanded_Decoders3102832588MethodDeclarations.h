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

// ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation
struct DecodedInformation_t3102832588;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation::.ctor(System.Int32,System.String)
extern "C"  void DecodedInformation__ctor_m1613907510 (DecodedInformation_t3102832588 * __this, int32_t ___newPosition, String_t* ___newString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation::.ctor(System.Int32,System.String,System.Int32)
extern "C"  void DecodedInformation__ctor_m974855777 (DecodedInformation_t3102832588 * __this, int32_t ___newPosition, String_t* ___newString, int32_t ___remainingValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation::getNewString()
extern "C"  String_t* DecodedInformation_getNewString_m2800274867 (DecodedInformation_t3102832588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation::isRemaining()
extern "C"  bool DecodedInformation_isRemaining_m3905428231 (DecodedInformation_t3102832588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation::getRemainingValue()
extern "C"  int32_t DecodedInformation_getRemainingValue_m3048730054 (DecodedInformation_t3102832588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

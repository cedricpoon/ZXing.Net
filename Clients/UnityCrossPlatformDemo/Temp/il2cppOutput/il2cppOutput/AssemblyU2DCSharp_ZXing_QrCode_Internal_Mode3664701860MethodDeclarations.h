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

// ZXing.QrCode.Internal.Mode
struct Mode_t3664701860;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.String
struct String_t;
// ZXing.QrCode.Internal.Version
struct Version_t1383592089;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_Version1383592089.h"

// System.Void ZXing.QrCode.Internal.Mode::.ctor(System.Int32[],System.Int32,System.String)
extern "C"  void Mode__ctor_m133673319 (Mode_t3664701860 * __this, Int32U5BU5D_t1809983122* ___characterCountBitsForVersions, int32_t ___bits, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Mode::.cctor()
extern "C"  void Mode__cctor_m2458037456 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.QrCode.Internal.Mode::get_Name()
extern "C"  String_t* Mode_get_Name_m943437022 (Mode_t3664701860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Mode::forBits(System.Int32)
extern "C"  Mode_t3664701860 * Mode_forBits_m2029166012 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.Mode::getCharacterCountBits(ZXing.QrCode.Internal.Version)
extern "C"  int32_t Mode_getCharacterCountBits_m3281597190 (Mode_t3664701860 * __this, Version_t1383592089 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.Mode::get_Bits()
extern "C"  int32_t Mode_get_Bits_m805358660 (Mode_t3664701860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.QrCode.Internal.Mode::ToString()
extern "C"  String_t* Mode_ToString_m305162102 (Mode_t3664701860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

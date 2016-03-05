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

// ZXing.OneD.UPCEANExtensionSupport
struct UPCEANExtensionSupport_t1467746866;
// ZXing.Result
struct Result_t2215385161;
// ZXing.Common.BitArray
struct BitArray_t2845796643;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"

// System.Void ZXing.OneD.UPCEANExtensionSupport::.ctor()
extern "C"  void UPCEANExtensionSupport__ctor_m1271312235 (UPCEANExtensionSupport_t1467746866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.UPCEANExtensionSupport::.cctor()
extern "C"  void UPCEANExtensionSupport__cctor_m273877410 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.UPCEANExtensionSupport::decodeRow(System.Int32,ZXing.Common.BitArray,System.Int32)
extern "C"  Result_t2215385161 * UPCEANExtensionSupport_decodeRow_m1787744116 (UPCEANExtensionSupport_t1467746866 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, int32_t ___rowOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;

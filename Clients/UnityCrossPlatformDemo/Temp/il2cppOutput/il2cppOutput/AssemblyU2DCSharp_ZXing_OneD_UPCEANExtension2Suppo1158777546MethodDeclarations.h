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

// ZXing.OneD.UPCEANExtension2Support
struct UPCEANExtension2Support_t1158777546;
// ZXing.Result
struct Result_t2215385161;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t4189597315;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_String968488902.h"

// System.Void ZXing.OneD.UPCEANExtension2Support::.ctor()
extern "C"  void UPCEANExtension2Support__ctor_m1736650511 (UPCEANExtension2Support_t1158777546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.UPCEANExtension2Support::decodeRow(System.Int32,ZXing.Common.BitArray,System.Int32[])
extern "C"  Result_t2215385161 * UPCEANExtension2Support_decodeRow_m1420197466 (UPCEANExtension2Support_t1158777546 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___extensionStartRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.UPCEANExtension2Support::decodeMiddle(ZXing.Common.BitArray,System.Int32[],System.Text.StringBuilder)
extern "C"  int32_t UPCEANExtension2Support_decodeMiddle_m3276076530 (UPCEANExtension2Support_t1158777546 * __this, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___startRange, StringBuilder_t3822575854 * ___resultString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.OneD.UPCEANExtension2Support::parseExtensionString(System.String)
extern "C"  Object_t* UPCEANExtension2Support_parseExtensionString_m2728723605 (Object_t * __this /* static, unused */, String_t* ___raw, const MethodInfo* method) IL2CPP_METHOD_ATTR;

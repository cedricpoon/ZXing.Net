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

// ZXing.OneD.UPCEANExtension5Support
struct UPCEANExtension5Support_t2092241255;
// ZXing.Result
struct Result_t2215385161;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t4189597315;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_String968488902.h"

// System.Void ZXing.OneD.UPCEANExtension5Support::.ctor()
extern "C"  void UPCEANExtension5Support__ctor_m1501612306 (UPCEANExtension5Support_t2092241255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.UPCEANExtension5Support::.cctor()
extern "C"  void UPCEANExtension5Support__cctor_m3118212315 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.UPCEANExtension5Support::decodeRow(System.Int32,ZXing.Common.BitArray,System.Int32[])
extern "C"  Result_t2215385161 * UPCEANExtension5Support_decodeRow_m4282884151 (UPCEANExtension5Support_t2092241255 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___extensionStartRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.UPCEANExtension5Support::decodeMiddle(ZXing.Common.BitArray,System.Int32[],System.Text.StringBuilder)
extern "C"  int32_t UPCEANExtension5Support_decodeMiddle_m2485697999 (UPCEANExtension5Support_t2092241255 * __this, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___startRange, StringBuilder_t3822575854 * ___resultString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.UPCEANExtension5Support::extensionChecksum(System.String)
extern "C"  int32_t UPCEANExtension5Support_extensionChecksum_m2059554398 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.UPCEANExtension5Support::determineCheckDigit(System.Int32,System.Int32&)
extern "C"  bool UPCEANExtension5Support_determineCheckDigit_m2724559866 (Object_t * __this /* static, unused */, int32_t ___lgPatternFound, int32_t* ___checkDigit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.OneD.UPCEANExtension5Support::parseExtensionString(System.String)
extern "C"  Object_t* UPCEANExtension5Support_parseExtensionString_m1921469464 (Object_t * __this /* static, unused */, String_t* ___raw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.UPCEANExtension5Support::parseExtension5String(System.String)
extern "C"  String_t* UPCEANExtension5Support_parseExtension5String_m1740324923 (Object_t * __this /* static, unused */, String_t* ___raw, const MethodInfo* method) IL2CPP_METHOD_ATTR;

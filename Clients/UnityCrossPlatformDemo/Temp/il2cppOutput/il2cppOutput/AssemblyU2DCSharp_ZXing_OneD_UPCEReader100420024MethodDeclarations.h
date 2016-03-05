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

// ZXing.OneD.UPCEReader
struct UPCEReader_t100420024;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ZXing_BarcodeFormat1525350531.h"

// System.Void ZXing.OneD.UPCEReader::.ctor()
extern "C"  void UPCEReader__ctor_m3056941477 (UPCEReader_t100420024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.UPCEReader::.cctor()
extern "C"  void UPCEReader__cctor_m4088776360 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.UPCEReader::decodeMiddle(ZXing.Common.BitArray,System.Int32[],System.Text.StringBuilder)
extern "C"  int32_t UPCEReader_decodeMiddle_m2858929728 (UPCEReader_t100420024 * __this, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___startRange, StringBuilder_t3822575854 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.UPCEReader::decodeEnd(ZXing.Common.BitArray,System.Int32)
extern "C"  Int32U5BU5D_t1809983122* UPCEReader_decodeEnd_m114129574 (UPCEReader_t100420024 * __this, BitArray_t2845796643 * ___row, int32_t ___endStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.UPCEReader::checkChecksum(System.String)
extern "C"  bool UPCEReader_checkChecksum_m2411380480 (UPCEReader_t100420024 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.UPCEReader::determineNumSysAndCheckDigit(System.Text.StringBuilder,System.Int32)
extern "C"  bool UPCEReader_determineNumSysAndCheckDigit_m3330111066 (Object_t * __this /* static, unused */, StringBuilder_t3822575854 * ___resultString, int32_t ___lgPatternFound, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.BarcodeFormat ZXing.OneD.UPCEReader::get_BarcodeFormat()
extern "C"  int32_t UPCEReader_get_BarcodeFormat_m2161425015 (UPCEReader_t100420024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.UPCEReader::convertUPCEtoUPCA(System.String)
extern "C"  String_t* UPCEReader_convertUPCEtoUPCA_m3784532056 (Object_t * __this /* static, unused */, String_t* ___upce, const MethodInfo* method) IL2CPP_METHOD_ATTR;

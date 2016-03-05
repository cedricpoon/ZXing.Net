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

// ZXing.OneD.UPCAReader
struct UPCAReader_t845372596;
// ZXing.Result
struct Result_t2215385161;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"
#include "AssemblyU2DCSharp_ZXing_BarcodeFormat1525350531.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "AssemblyU2DCSharp_ZXing_Result2215385161.h"

// System.Void ZXing.OneD.UPCAReader::.ctor()
extern "C"  void UPCAReader__ctor_m804110889 (UPCAReader_t845372596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.UPCAReader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Int32[],System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * UPCAReader_decodeRow_m2874743865 (UPCAReader_t845372596 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___startGuardRange, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.UPCAReader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * UPCAReader_decodeRow_m339883628 (UPCAReader_t845372596 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.UPCAReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * UPCAReader_decode_m2653138228 (UPCAReader_t845372596 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.BarcodeFormat ZXing.OneD.UPCAReader::get_BarcodeFormat()
extern "C"  int32_t UPCAReader_get_BarcodeFormat_m3180371195 (UPCAReader_t845372596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.UPCAReader::decodeMiddle(ZXing.Common.BitArray,System.Int32[],System.Text.StringBuilder)
extern "C"  int32_t UPCAReader_decodeMiddle_m3400931388 (UPCAReader_t845372596 * __this, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___startRange, StringBuilder_t3822575854 * ___resultString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.UPCAReader::maybeReturnResult(ZXing.Result)
extern "C"  Result_t2215385161 * UPCAReader_maybeReturnResult_m4037191435 (Object_t * __this /* static, unused */, Result_t2215385161 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

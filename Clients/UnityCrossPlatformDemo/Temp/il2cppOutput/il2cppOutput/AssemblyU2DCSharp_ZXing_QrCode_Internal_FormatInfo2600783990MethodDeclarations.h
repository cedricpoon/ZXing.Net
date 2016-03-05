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

// ZXing.QrCode.Internal.FormatInformation
struct FormatInformation_t2600783990;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t2622323615;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ZXing.QrCode.Internal.FormatInformation::.ctor(System.Int32)
extern "C"  void FormatInformation__ctor_m674694690 (FormatInformation_t2600783990 * __this, int32_t ___formatInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.FormatInformation::.cctor()
extern "C"  void FormatInformation__cctor_m1596248956 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.FormatInformation::numBitsDiffering(System.Int32,System.Int32)
extern "C"  int32_t FormatInformation_numBitsDiffering_m3894738557 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.FormatInformation ZXing.QrCode.Internal.FormatInformation::decodeFormatInformation(System.Int32,System.Int32)
extern "C"  FormatInformation_t2600783990 * FormatInformation_decodeFormatInformation_m314026903 (Object_t * __this /* static, unused */, int32_t ___maskedFormatInfo1, int32_t ___maskedFormatInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.FormatInformation ZXing.QrCode.Internal.FormatInformation::doDecodeFormatInformation(System.Int32,System.Int32)
extern "C"  FormatInformation_t2600783990 * FormatInformation_doDecodeFormatInformation_m2182723906 (Object_t * __this /* static, unused */, int32_t ___maskedFormatInfo1, int32_t ___maskedFormatInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.FormatInformation::get_ErrorCorrectionLevel()
extern "C"  ErrorCorrectionLevel_t2622323615 * FormatInformation_get_ErrorCorrectionLevel_m3616292278 (FormatInformation_t2600783990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ZXing.QrCode.Internal.FormatInformation::get_DataMask()
extern "C"  uint8_t FormatInformation_get_DataMask_m3184100102 (FormatInformation_t2600783990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.FormatInformation::GetHashCode()
extern "C"  int32_t FormatInformation_GetHashCode_m676114894 (FormatInformation_t2600783990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.FormatInformation::Equals(System.Object)
extern "C"  bool FormatInformation_Equals_m2025326134 (FormatInformation_t2600783990 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;

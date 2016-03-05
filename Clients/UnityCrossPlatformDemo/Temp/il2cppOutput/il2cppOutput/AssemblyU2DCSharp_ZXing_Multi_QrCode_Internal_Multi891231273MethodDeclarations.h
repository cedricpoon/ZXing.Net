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

// ZXing.Multi.QrCode.Internal.MultiDetector
struct MultiDetector_t891231273;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.Common.DetectorResult[]
struct DetectorResultU5BU5D_t2163714559;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Multi.QrCode.Internal.MultiDetector::.ctor(ZXing.Common.BitMatrix)
extern "C"  void MultiDetector__ctor_m87996231 (MultiDetector_t891231273 * __this, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Multi.QrCode.Internal.MultiDetector::.cctor()
extern "C"  void MultiDetector__cctor_m937766545 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DetectorResult[] ZXing.Multi.QrCode.Internal.MultiDetector::detectMulti(System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  DetectorResultU5BU5D_t2163714559* MultiDetector_detectMulti_m1218266892 (MultiDetector_t891231273 * __this, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;

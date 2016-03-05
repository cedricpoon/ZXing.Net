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

// ZXing.Maxicode.MaxiCodeReader
struct MaxiCodeReader_t132781513;
// ZXing.Result
struct Result_t2215385161;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Maxicode.MaxiCodeReader::.ctor()
extern "C"  void MaxiCodeReader__ctor_m3122834532 (MaxiCodeReader_t132781513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Maxicode.MaxiCodeReader::.cctor()
extern "C"  void MaxiCodeReader__cctor_m1836493769 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.Maxicode.MaxiCodeReader::decode(ZXing.BinaryBitmap)
extern "C"  Result_t2215385161 * MaxiCodeReader_decode_m401797022 (MaxiCodeReader_t132781513 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.Maxicode.MaxiCodeReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * MaxiCodeReader_decode_m1539317103 (MaxiCodeReader_t132781513 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Maxicode.MaxiCodeReader::reset()
extern "C"  void MaxiCodeReader_reset_m3399581489 (MaxiCodeReader_t132781513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Maxicode.MaxiCodeReader::extractPureBits(ZXing.Common.BitMatrix)
extern "C"  BitMatrix_t3148694213 * MaxiCodeReader_extractPureBits_m4208763444 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;

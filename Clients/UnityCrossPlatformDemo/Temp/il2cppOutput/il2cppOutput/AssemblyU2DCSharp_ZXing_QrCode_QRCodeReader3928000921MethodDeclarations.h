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

// ZXing.QrCode.QRCodeReader
struct QRCodeReader_t3928000921;
// ZXing.QrCode.Internal.Decoder
struct Decoder_t2574417925;
// ZXing.Result
struct Result_t2215385161;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.QrCode.QRCodeReader::.ctor()
extern "C"  void QRCodeReader__ctor_m1466807844 (QRCodeReader_t3928000921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.QRCodeReader::.cctor()
extern "C"  void QRCodeReader__cctor_m2039273993 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Decoder ZXing.QrCode.QRCodeReader::getDecoder()
extern "C"  Decoder_t2574417925 * QRCodeReader_getDecoder_m2220420292 (QRCodeReader_t3928000921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.QrCode.QRCodeReader::decode(ZXing.BinaryBitmap)
extern "C"  Result_t2215385161 * QRCodeReader_decode_m472658654 (QRCodeReader_t3928000921 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.QrCode.QRCodeReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * QRCodeReader_decode_m2631410223 (QRCodeReader_t3928000921 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.QRCodeReader::reset()
extern "C"  void QRCodeReader_reset_m1743554801 (QRCodeReader_t3928000921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeReader::extractPureBits(ZXing.Common.BitMatrix)
extern "C"  BitMatrix_t3148694213 * QRCodeReader_extractPureBits_m3626328052 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.QRCodeReader::moduleSize(System.Int32[],ZXing.Common.BitMatrix,System.Single&)
extern "C"  bool QRCodeReader_moduleSize_m2462122878 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___leftTopBlack, BitMatrix_t3148694213 * ___image, float* ___msize, const MethodInfo* method) IL2CPP_METHOD_ATTR;

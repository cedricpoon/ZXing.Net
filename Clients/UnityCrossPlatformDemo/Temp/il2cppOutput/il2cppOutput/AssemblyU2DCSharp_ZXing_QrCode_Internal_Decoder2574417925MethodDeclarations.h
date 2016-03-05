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

// ZXing.QrCode.Internal.Decoder
struct Decoder_t2574417925;
// ZXing.Common.DecoderResult
struct DecoderResult_t1348480280;
// System.Boolean[][]
struct BooleanU5BU5DU5BU5D_t3320470385;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.QrCode.Internal.BitMatrixParser
struct BitMatrixParser_t610321582;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_BitMatrixPa610321582.h"

// System.Void ZXing.QrCode.Internal.Decoder::.ctor()
extern "C"  void Decoder__ctor_m921873250 (Decoder_t2574417925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.QrCode.Internal.Decoder::decode(System.Boolean[][],System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  DecoderResult_t1348480280 * Decoder_decode_m2304432383 (Decoder_t2574417925 * __this, BooleanU5BU5DU5BU5D_t3320470385* ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.QrCode.Internal.Decoder::decode(ZXing.Common.BitMatrix,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  DecoderResult_t1348480280 * Decoder_decode_m648748679 (Decoder_t2574417925 * __this, BitMatrix_t3148694213 * ___bits, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.QrCode.Internal.Decoder::decode(ZXing.QrCode.Internal.BitMatrixParser,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  DecoderResult_t1348480280 * Decoder_decode_m1415705736 (Decoder_t2574417925 * __this, BitMatrixParser_t610321582 * ___parser, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.Decoder::correctErrors(System.Byte[],System.Int32)
extern "C"  bool Decoder_correctErrors_m1776468727 (Decoder_t2574417925 * __this, ByteU5BU5D_t58506160* ___codewordBytes, int32_t ___numDataCodewords, const MethodInfo* method) IL2CPP_METHOD_ATTR;

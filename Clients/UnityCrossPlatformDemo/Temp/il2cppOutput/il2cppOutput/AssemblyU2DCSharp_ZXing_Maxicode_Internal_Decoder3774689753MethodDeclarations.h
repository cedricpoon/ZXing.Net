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

// ZXing.Maxicode.Internal.Decoder
struct Decoder_t3774689753;
// ZXing.Common.DecoderResult
struct DecoderResult_t1348480280;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Maxicode.Internal.Decoder::.ctor()
extern "C"  void Decoder__ctor_m3401934118 (Decoder_t3774689753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.Maxicode.Internal.Decoder::decode(ZXing.Common.BitMatrix)
extern "C"  DecoderResult_t1348480280 * Decoder_decode_m4009325186 (Decoder_t3774689753 * __this, BitMatrix_t3148694213 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.Maxicode.Internal.Decoder::decode(ZXing.Common.BitMatrix,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  DecoderResult_t1348480280 * Decoder_decode_m3206122763 (Decoder_t3774689753 * __this, BitMatrix_t3148694213 * ___bits, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Maxicode.Internal.Decoder::correctErrors(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool Decoder_correctErrors_m5769308 (Decoder_t3774689753 * __this, ByteU5BU5D_t58506160* ___codewordBytes, int32_t ___start, int32_t ___dataCodewords, int32_t ___ecCodewords, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;

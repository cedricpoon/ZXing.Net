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

// ZXing.Datamatrix.Internal.Decoder
struct Decoder_t3089884598;
// ZXing.Common.DecoderResult
struct DecoderResult_t1348480280;
// System.Boolean[][]
struct BooleanU5BU5DU5BU5D_t3320470385;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Datamatrix.Internal.Decoder::.ctor()
extern "C"  void Decoder__ctor_m5036127 (Decoder_t3089884598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.Datamatrix.Internal.Decoder::decode(System.Boolean[][])
extern "C"  DecoderResult_t1348480280 * Decoder_decode_m3887762545 (Decoder_t3089884598 * __this, BooleanU5BU5DU5BU5D_t3320470385* ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.Datamatrix.Internal.Decoder::decode(ZXing.Common.BitMatrix)
extern "C"  DecoderResult_t1348480280 * Decoder_decode_m81379433 (Decoder_t3089884598 * __this, BitMatrix_t3148694213 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Datamatrix.Internal.Decoder::correctErrors(System.Byte[],System.Int32)
extern "C"  bool Decoder_correctErrors_m118683316 (Decoder_t3089884598 * __this, ByteU5BU5D_t58506160* ___codewordBytes, int32_t ___numDataCodewords, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.Aztec.Internal.Decoder
struct Decoder_t105253848;
// ZXing.Common.DecoderResult
struct DecoderResult_t1348480280;
// ZXing.Aztec.Internal.AztecDetectorResult
struct AztecDetectorResult_t2648621232;
// System.String
struct String_t;
// System.Boolean[]
struct BooleanU5BU5D_t3804927312;
// System.String[]
struct StringU5BU5D_t2956870243;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Aztec_Internal_AztecDetect2648621232.h"
#include "AssemblyU2DCSharp_ZXing_Aztec_Internal_Decoder_Table80563118.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Aztec.Internal.Decoder::.ctor()
extern "C"  void Decoder__ctor_m772102985 (Decoder_t105253848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Aztec.Internal.Decoder::.cctor()
extern "C"  void Decoder__cctor_m1978259844 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.Aztec.Internal.Decoder::decode(ZXing.Aztec.Internal.AztecDetectorResult)
extern "C"  DecoderResult_t1348480280 * Decoder_decode_m211847604 (Decoder_t105253848 * __this, AztecDetectorResult_t2648621232 * ___detectorResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Aztec.Internal.Decoder::highLevelDecode(System.Boolean[])
extern "C"  String_t* Decoder_highLevelDecode_m1768261353 (Object_t * __this /* static, unused */, BooleanU5BU5D_t3804927312* ___correctedBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Aztec.Internal.Decoder::getEncodedData(System.Boolean[])
extern "C"  String_t* Decoder_getEncodedData_m3305160725 (Object_t * __this /* static, unused */, BooleanU5BU5D_t3804927312* ___correctedBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Aztec.Internal.Decoder/Table ZXing.Aztec.Internal.Decoder::getTable(System.Char)
extern "C"  int32_t Decoder_getTable_m2496824830 (Object_t * __this /* static, unused */, uint16_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Aztec.Internal.Decoder::getCharacter(System.String[],System.Int32)
extern "C"  String_t* Decoder_getCharacter_m49343432 (Object_t * __this /* static, unused */, StringU5BU5D_t2956870243* ___table, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] ZXing.Aztec.Internal.Decoder::correctBits(System.Boolean[])
extern "C"  BooleanU5BU5D_t3804927312* Decoder_correctBits_m3532131738 (Decoder_t105253848 * __this, BooleanU5BU5D_t3804927312* ___rawbits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] ZXing.Aztec.Internal.Decoder::extractBits(ZXing.Common.BitMatrix)
extern "C"  BooleanU5BU5D_t3804927312* Decoder_extractBits_m2967374407 (Decoder_t105253848 * __this, BitMatrix_t3148694213 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Aztec.Internal.Decoder::readCode(System.Boolean[],System.Int32,System.Int32)
extern "C"  int32_t Decoder_readCode_m1316975777 (Object_t * __this /* static, unused */, BooleanU5BU5D_t3804927312* ___rawbits, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Aztec.Internal.Decoder::totalBitsInLayer(System.Int32,System.Boolean)
extern "C"  int32_t Decoder_totalBitsInLayer_m3399601793 (Object_t * __this /* static, unused */, int32_t ___layers, bool ___compact, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder
struct GeneralAppIdDecoder_t1500692230;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// ZXing.OneD.RSS.Expanded.Decoders.DecodedNumeric
struct DecodedNumeric_t1547809453;
// ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation
struct DecodedInformation_t3102832588;
// ZXing.OneD.RSS.Expanded.Decoders.BlockParsedResult
struct BlockParsedResult_t2973676849;
// ZXing.OneD.RSS.Expanded.Decoders.DecodedChar
struct DecodedChar_t4192483618;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_String968488902.h"

// System.Void ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::.ctor(ZXing.Common.BitArray)
extern "C"  void GeneralAppIdDecoder__ctor_m2551461846 (GeneralAppIdDecoder_t1500692230 * __this, BitArray_t2845796643 * ___information, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::decodeAllCodes(System.Text.StringBuilder,System.Int32)
extern "C"  String_t* GeneralAppIdDecoder_decodeAllCodes_m2617643632 (GeneralAppIdDecoder_t1500692230 * __this, StringBuilder_t3822575854 * ___buff, int32_t ___initialPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::isStillNumeric(System.Int32)
extern "C"  bool GeneralAppIdDecoder_isStillNumeric_m2965994785 (GeneralAppIdDecoder_t1500692230 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.Decoders.DecodedNumeric ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::decodeNumeric(System.Int32)
extern "C"  DecodedNumeric_t1547809453 * GeneralAppIdDecoder_decodeNumeric_m3337587317 (GeneralAppIdDecoder_t1500692230 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::extractNumericValueFromBitArray(System.Int32,System.Int32)
extern "C"  int32_t GeneralAppIdDecoder_extractNumericValueFromBitArray_m2823929476 (GeneralAppIdDecoder_t1500692230 * __this, int32_t ___pos, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::extractNumericValueFromBitArray(ZXing.Common.BitArray,System.Int32,System.Int32)
extern "C"  int32_t GeneralAppIdDecoder_extractNumericValueFromBitArray_m826494315 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___information, int32_t ___pos, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::decodeGeneralPurposeField(System.Int32,System.String)
extern "C"  DecodedInformation_t3102832588 * GeneralAppIdDecoder_decodeGeneralPurposeField_m1757622023 (GeneralAppIdDecoder_t1500692230 * __this, int32_t ___pos, String_t* ___remaining, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::parseBlocks()
extern "C"  DecodedInformation_t3102832588 * GeneralAppIdDecoder_parseBlocks_m1489286045 (GeneralAppIdDecoder_t1500692230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.Decoders.BlockParsedResult ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::parseNumericBlock()
extern "C"  BlockParsedResult_t2973676849 * GeneralAppIdDecoder_parseNumericBlock_m1911013370 (GeneralAppIdDecoder_t1500692230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.Decoders.BlockParsedResult ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::parseIsoIec646Block()
extern "C"  BlockParsedResult_t2973676849 * GeneralAppIdDecoder_parseIsoIec646Block_m343784113 (GeneralAppIdDecoder_t1500692230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.Decoders.BlockParsedResult ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::parseAlphaBlock()
extern "C"  BlockParsedResult_t2973676849 * GeneralAppIdDecoder_parseAlphaBlock_m784377545 (GeneralAppIdDecoder_t1500692230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::isStillIsoIec646(System.Int32)
extern "C"  bool GeneralAppIdDecoder_isStillIsoIec646_m3122781130 (GeneralAppIdDecoder_t1500692230 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.Decoders.DecodedChar ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::decodeIsoIec646(System.Int32)
extern "C"  DecodedChar_t4192483618 * GeneralAppIdDecoder_decodeIsoIec646_m1718926225 (GeneralAppIdDecoder_t1500692230 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::isStillAlpha(System.Int32)
extern "C"  bool GeneralAppIdDecoder_isStillAlpha_m2729462322 (GeneralAppIdDecoder_t1500692230 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.Decoders.DecodedChar ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::decodeAlphanumeric(System.Int32)
extern "C"  DecodedChar_t4192483618 * GeneralAppIdDecoder_decodeAlphanumeric_m4263207576 (GeneralAppIdDecoder_t1500692230 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::isAlphaTo646ToAlphaLatch(System.Int32)
extern "C"  bool GeneralAppIdDecoder_isAlphaTo646ToAlphaLatch_m3452712252 (GeneralAppIdDecoder_t1500692230 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::isAlphaOr646ToNumericLatch(System.Int32)
extern "C"  bool GeneralAppIdDecoder_isAlphaOr646ToNumericLatch_m3851780549 (GeneralAppIdDecoder_t1500692230 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::isNumericToAlphaNumericLatch(System.Int32)
extern "C"  bool GeneralAppIdDecoder_isNumericToAlphaNumericLatch_m4200628105 (GeneralAppIdDecoder_t1500692230 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;

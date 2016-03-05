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

// ZXing.Common.DecoderResult
struct DecoderResult_t1348480280;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t180559927;
// ZXing.PDF417.PDF417ResultMetadata
struct PDF417ResultMetadata_t3044473018;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_PDF417ResultMetadat3044473018.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_Text_Encoding180559927.h"

// System.Void ZXing.PDF417.Internal.DecodedBitStreamParser::.cctor()
extern "C"  void DecodedBitStreamParser__cctor_m2506867197 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.PDF417.Internal.DecodedBitStreamParser::decode(System.Int32[],System.String)
extern "C"  DecoderResult_t1348480280 * DecodedBitStreamParser_decode_m1289231618 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___codewords, String_t* ___ecLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding ZXing.PDF417.Internal.DecodedBitStreamParser::getEncoding(System.String)
extern "C"  Encoding_t180559927 * DecodedBitStreamParser_getEncoding_m2869264627 (Object_t * __this /* static, unused */, String_t* ___encodingName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DecodedBitStreamParser::decodeMacroBlock(System.Int32[],System.Int32,ZXing.PDF417.PDF417ResultMetadata)
extern "C"  int32_t DecodedBitStreamParser_decodeMacroBlock_m2010922099 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___codewords, int32_t ___codeIndex, PDF417ResultMetadata_t3044473018 * ___resultMetadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DecodedBitStreamParser::textCompaction(System.Int32[],System.Int32,System.Text.StringBuilder)
extern "C"  int32_t DecodedBitStreamParser_textCompaction_m3783463384 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___codewords, int32_t ___codeIndex, StringBuilder_t3822575854 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DecodedBitStreamParser::decodeTextCompaction(System.Int32[],System.Int32[],System.Int32,System.Text.StringBuilder)
extern "C"  void DecodedBitStreamParser_decodeTextCompaction_m2034698089 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___textCompactionData, Int32U5BU5D_t1809983122* ___byteCompactionData, int32_t ___length, StringBuilder_t3822575854 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DecodedBitStreamParser::byteCompaction(System.Int32,System.Int32[],System.Text.Encoding,System.Int32,System.Text.StringBuilder)
extern "C"  int32_t DecodedBitStreamParser_byteCompaction_m2639219391 (Object_t * __this /* static, unused */, int32_t ___mode, Int32U5BU5D_t1809983122* ___codewords, Encoding_t180559927 * ___encoding, int32_t ___codeIndex, StringBuilder_t3822575854 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DecodedBitStreamParser::numericCompaction(System.Int32[],System.Int32,System.Text.StringBuilder)
extern "C"  int32_t DecodedBitStreamParser_numericCompaction_m1755019994 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___codewords, int32_t ___codeIndex, StringBuilder_t3822575854 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.PDF417.Internal.DecodedBitStreamParser::decodeBase900toBase10(System.Int32[],System.Int32)
extern "C"  String_t* DecodedBitStreamParser_decodeBase900toBase10_m2716318424 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___codewords, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;

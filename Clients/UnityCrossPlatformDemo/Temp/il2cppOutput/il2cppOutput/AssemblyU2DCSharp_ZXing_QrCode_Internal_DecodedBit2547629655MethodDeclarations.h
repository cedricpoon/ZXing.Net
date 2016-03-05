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
// System.Byte[]
struct ByteU5BU5D_t58506160;
// ZXing.QrCode.Internal.Version
struct Version_t1383592089;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t2622323615;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// ZXing.Common.BitSource
struct BitSource_t3333427999;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// ZXing.Common.CharacterSetECI
struct CharacterSetECI_t2827278313;
// System.Collections.Generic.IList`1<System.Byte[]>
struct IList_1_t2224998474;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_Version1383592089.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_ErrorCorre2622323615.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitSource3333427999.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "AssemblyU2DCSharp_ZXing_Common_CharacterSetECI2827278313.h"

// System.Void ZXing.QrCode.Internal.DecodedBitStreamParser::.cctor()
extern "C"  void DecodedBitStreamParser__cctor_m1755992835 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.QrCode.Internal.DecodedBitStreamParser::decode(System.Byte[],ZXing.QrCode.Internal.Version,ZXing.QrCode.Internal.ErrorCorrectionLevel,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  DecoderResult_t1348480280 * DecodedBitStreamParser_decode_m396427835 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, Version_t1383592089 * ___version, ErrorCorrectionLevel_t2622323615 * ___ecLevel, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.DecodedBitStreamParser::decodeHanziSegment(ZXing.Common.BitSource,System.Text.StringBuilder,System.Int32)
extern "C"  bool DecodedBitStreamParser_decodeHanziSegment_m753601943 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, StringBuilder_t3822575854 * ___result, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.DecodedBitStreamParser::decodeKanjiSegment(ZXing.Common.BitSource,System.Text.StringBuilder,System.Int32)
extern "C"  bool DecodedBitStreamParser_decodeKanjiSegment_m2739552234 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, StringBuilder_t3822575854 * ___result, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.DecodedBitStreamParser::decodeByteSegment(ZXing.Common.BitSource,System.Text.StringBuilder,System.Int32,ZXing.Common.CharacterSetECI,System.Collections.Generic.IList`1<System.Byte[]>,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  bool DecodedBitStreamParser_decodeByteSegment_m58437389 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, StringBuilder_t3822575854 * ___result, int32_t ___count, CharacterSetECI_t2827278313 * ___currentCharacterSetECI, Object_t* ___byteSegments, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char ZXing.QrCode.Internal.DecodedBitStreamParser::toAlphaNumericChar(System.Int32)
extern "C"  uint16_t DecodedBitStreamParser_toAlphaNumericChar_m2108897001 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.DecodedBitStreamParser::decodeAlphanumericSegment(ZXing.Common.BitSource,System.Text.StringBuilder,System.Int32,System.Boolean)
extern "C"  bool DecodedBitStreamParser_decodeAlphanumericSegment_m2509158949 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, StringBuilder_t3822575854 * ___result, int32_t ___count, bool ___fc1InEffect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.DecodedBitStreamParser::decodeNumericSegment(ZXing.Common.BitSource,System.Text.StringBuilder,System.Int32)
extern "C"  bool DecodedBitStreamParser_decodeNumericSegment_m399278112 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, StringBuilder_t3822575854 * ___result, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.DecodedBitStreamParser::parseECIValue(ZXing.Common.BitSource)
extern "C"  int32_t DecodedBitStreamParser_parseECIValue_m3830161764 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;

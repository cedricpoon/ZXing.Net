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
// ZXing.Common.BitSource
struct BitSource_t3333427999;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.IList`1<System.Byte[]>
struct IList_1_t2224998474;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitSource3333427999.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "AssemblyU2DCSharp_ZXing_Datamatrix_Internal_DecodedBi2403779.h"

// System.Void ZXing.Datamatrix.Internal.DecodedBitStreamParser::.cctor()
extern "C"  void DecodedBitStreamParser__cctor_m671933952 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.Datamatrix.Internal.DecodedBitStreamParser::decode(System.Byte[])
extern "C"  DecoderResult_t1348480280 * DecodedBitStreamParser_decode_m1561841967 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Datamatrix.Internal.DecodedBitStreamParser::decodeAsciiSegment(ZXing.Common.BitSource,System.Text.StringBuilder,System.Text.StringBuilder,ZXing.Datamatrix.Internal.DecodedBitStreamParser/Mode&)
extern "C"  bool DecodedBitStreamParser_decodeAsciiSegment_m687018832 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, StringBuilder_t3822575854 * ___result, StringBuilder_t3822575854 * ___resultTrailer, int32_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Datamatrix.Internal.DecodedBitStreamParser::decodeC40Segment(ZXing.Common.BitSource,System.Text.StringBuilder)
extern "C"  bool DecodedBitStreamParser_decodeC40Segment_m879698818 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, StringBuilder_t3822575854 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Datamatrix.Internal.DecodedBitStreamParser::decodeTextSegment(ZXing.Common.BitSource,System.Text.StringBuilder)
extern "C"  bool DecodedBitStreamParser_decodeTextSegment_m3097441092 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, StringBuilder_t3822575854 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Datamatrix.Internal.DecodedBitStreamParser::decodeAnsiX12Segment(ZXing.Common.BitSource,System.Text.StringBuilder)
extern "C"  bool DecodedBitStreamParser_decodeAnsiX12Segment_m1045673771 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, StringBuilder_t3822575854 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Datamatrix.Internal.DecodedBitStreamParser::parseTwoBytes(System.Int32,System.Int32,System.Int32[])
extern "C"  void DecodedBitStreamParser_parseTwoBytes_m1870595244 (Object_t * __this /* static, unused */, int32_t ___firstByte, int32_t ___secondByte, Int32U5BU5D_t1809983122* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Datamatrix.Internal.DecodedBitStreamParser::decodeEdifactSegment(ZXing.Common.BitSource,System.Text.StringBuilder)
extern "C"  bool DecodedBitStreamParser_decodeEdifactSegment_m2301589611 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, StringBuilder_t3822575854 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Datamatrix.Internal.DecodedBitStreamParser::decodeBase256Segment(ZXing.Common.BitSource,System.Text.StringBuilder,System.Collections.Generic.IList`1<System.Byte[]>)
extern "C"  bool DecodedBitStreamParser_decodeBase256Segment_m4092142371 (Object_t * __this /* static, unused */, BitSource_t3333427999 * ___bits, StringBuilder_t3822575854 * ___result, Object_t* ___byteSegments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.DecodedBitStreamParser::unrandomize255State(System.Int32,System.Int32)
extern "C"  int32_t DecodedBitStreamParser_unrandomize255State_m2551861650 (Object_t * __this /* static, unused */, int32_t ___randomizedBase256Codeword, int32_t ___base256CodewordPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;

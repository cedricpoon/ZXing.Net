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
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.Maxicode.Internal.DecodedBitStreamParser::.cctor()
extern "C"  void DecodedBitStreamParser__cctor_m2616788167 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.Maxicode.Internal.DecodedBitStreamParser::decode(System.Byte[],System.Int32)
extern "C"  DecoderResult_t1348480280 * DecodedBitStreamParser_decode_m1243344207 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Maxicode.Internal.DecodedBitStreamParser::getBit(System.Int32,System.Byte[])
extern "C"  int32_t DecodedBitStreamParser_getBit_m2687678583 (Object_t * __this /* static, unused */, int32_t ___bit, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Maxicode.Internal.DecodedBitStreamParser::getInt(System.Byte[],System.Byte[])
extern "C"  int32_t DecodedBitStreamParser_getInt_m447823335 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, ByteU5BU5D_t58506160* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Maxicode.Internal.DecodedBitStreamParser::getCountry(System.Byte[])
extern "C"  int32_t DecodedBitStreamParser_getCountry_m59102173 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Maxicode.Internal.DecodedBitStreamParser::getServiceClass(System.Byte[])
extern "C"  int32_t DecodedBitStreamParser_getServiceClass_m218852186 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Maxicode.Internal.DecodedBitStreamParser::getPostCode2Length(System.Byte[])
extern "C"  int32_t DecodedBitStreamParser_getPostCode2Length_m2604738920 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Maxicode.Internal.DecodedBitStreamParser::getPostCode2(System.Byte[])
extern "C"  int32_t DecodedBitStreamParser_getPostCode2_m3371665838 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Maxicode.Internal.DecodedBitStreamParser::getPostCode3(System.Byte[])
extern "C"  String_t* DecodedBitStreamParser_getPostCode3_m2689501272 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Maxicode.Internal.DecodedBitStreamParser::getMessage(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* DecodedBitStreamParser_getMessage_m2450086263 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, int32_t ___start, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;

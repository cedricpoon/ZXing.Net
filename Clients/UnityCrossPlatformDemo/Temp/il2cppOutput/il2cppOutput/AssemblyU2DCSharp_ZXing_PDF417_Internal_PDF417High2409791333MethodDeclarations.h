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

// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t180559927;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_Compaction1474784872.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void ZXing.PDF417.Internal.PDF417HighLevelEncoder::.cctor()
extern "C"  void PDF417HighLevelEncoder__cctor_m1927916457 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.PDF417.Internal.PDF417HighLevelEncoder::encodeHighLevel(System.String,ZXing.PDF417.Internal.Compaction,System.Text.Encoding,System.Boolean)
extern "C"  String_t* PDF417HighLevelEncoder_encodeHighLevel_m2259668385 (Object_t * __this /* static, unused */, String_t* ___msg, int32_t ___compaction, Encoding_t180559927 * ___encoding, bool ___disableEci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.PDF417HighLevelEncoder::Contains(System.String[],System.String)
extern "C"  bool PDF417HighLevelEncoder_Contains_m1564754153 (Object_t * __this /* static, unused */, StringU5BU5D_t2956870243* ___stringArray, String_t* ___lookFor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.PDF417.Internal.PDF417HighLevelEncoder::toBytes(System.String,System.Text.Encoding)
extern "C"  ByteU5BU5D_t58506160* PDF417HighLevelEncoder_toBytes_m1842570583 (Object_t * __this /* static, unused */, String_t* ___msg, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.PDF417HighLevelEncoder::encodeText(System.String,System.Int32,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t PDF417HighLevelEncoder_encodeText_m700287074 (Object_t * __this /* static, unused */, String_t* ___msg, int32_t ___startpos, int32_t ___count, StringBuilder_t3822575854 * ___sb, int32_t ___initialSubmode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.PDF417HighLevelEncoder::encodeBinary(System.Byte[],System.Int32,System.Int32,System.Int32,System.Text.StringBuilder)
extern "C"  void PDF417HighLevelEncoder_encodeBinary_m1672430857 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, int32_t ___startpos, int32_t ___count, int32_t ___startmode, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.PDF417HighLevelEncoder::encodeNumeric(System.String,System.Int32,System.Int32,System.Text.StringBuilder)
extern "C"  void PDF417HighLevelEncoder_encodeNumeric_m1963998605 (Object_t * __this /* static, unused */, String_t* ___msg, int32_t ___startpos, int32_t ___count, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.PDF417HighLevelEncoder::isDigit(System.Char)
extern "C"  bool PDF417HighLevelEncoder_isDigit_m2562958476 (Object_t * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.PDF417HighLevelEncoder::isAlphaUpper(System.Char)
extern "C"  bool PDF417HighLevelEncoder_isAlphaUpper_m2836141211 (Object_t * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.PDF417HighLevelEncoder::isAlphaLower(System.Char)
extern "C"  bool PDF417HighLevelEncoder_isAlphaLower_m2587776156 (Object_t * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.PDF417HighLevelEncoder::isMixed(System.Char)
extern "C"  bool PDF417HighLevelEncoder_isMixed_m4148826238 (Object_t * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.PDF417HighLevelEncoder::isPunctuation(System.Char)
extern "C"  bool PDF417HighLevelEncoder_isPunctuation_m276843455 (Object_t * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.PDF417HighLevelEncoder::isText(System.Char)
extern "C"  bool PDF417HighLevelEncoder_isText_m1768660530 (Object_t * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.PDF417HighLevelEncoder::determineConsecutiveDigitCount(System.String,System.Int32)
extern "C"  int32_t PDF417HighLevelEncoder_determineConsecutiveDigitCount_m2199539100 (Object_t * __this /* static, unused */, String_t* ___msg, int32_t ___startpos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.PDF417HighLevelEncoder::determineConsecutiveTextCount(System.String,System.Int32)
extern "C"  int32_t PDF417HighLevelEncoder_determineConsecutiveTextCount_m3915764052 (Object_t * __this /* static, unused */, String_t* ___msg, int32_t ___startpos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.PDF417HighLevelEncoder::determineConsecutiveBinaryCount(System.String,System.Byte[],System.Int32)
extern "C"  int32_t PDF417HighLevelEncoder_determineConsecutiveBinaryCount_m380630557 (Object_t * __this /* static, unused */, String_t* ___msg, ByteU5BU5D_t58506160* ___bytes, int32_t ___startpos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.PDF417HighLevelEncoder::encodingECI(System.Int32,System.Text.StringBuilder)
extern "C"  void PDF417HighLevelEncoder_encodingECI_m1429029103 (Object_t * __this /* static, unused */, int32_t ___eci, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;

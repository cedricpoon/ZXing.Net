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

// ZXing.QrCode.Internal.ByteMatrix
struct ByteMatrix_t1667372778;
// ZXing.QrCode.Internal.QRCode
struct QRCode_t1764126607;
// System.String
struct String_t;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t2622323615;
// System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>
struct IDictionary_2_t467935566;
// ZXing.QrCode.Internal.Mode
struct Mode_t3664701860;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// ZXing.QrCode.Internal.Version
struct Version_t1383592089;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// ZXing.Common.CharacterSetECI
struct CharacterSetECI_t2827278313;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_ByteMatrix1667372778.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_ErrorCorre2622323615.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_Version1383592089.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_Mode3664701860.h"
#include "AssemblyU2DCSharp_ZXing_Common_CharacterSetECI2827278313.h"

// System.Void ZXing.QrCode.Internal.Encoder::.cctor()
extern "C"  void Encoder__cctor_m3379640163 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.Encoder::calculateMaskPenalty(ZXing.QrCode.Internal.ByteMatrix)
extern "C"  int32_t Encoder_calculateMaskPenalty_m1898966431 (Object_t * __this /* static, unused */, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.QRCode ZXing.QrCode.Internal.Encoder::encode(System.String,ZXing.QrCode.Internal.ErrorCorrectionLevel)
extern "C"  QRCode_t1764126607 * Encoder_encode_m1629038375 (Object_t * __this /* static, unused */, String_t* ___content, ErrorCorrectionLevel_t2622323615 * ___ecLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.QRCode ZXing.QrCode.Internal.Encoder::encode(System.String,ZXing.QrCode.Internal.ErrorCorrectionLevel,System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>)
extern "C"  QRCode_t1764126607 * Encoder_encode_m4011042990 (Object_t * __this /* static, unused */, String_t* ___content, ErrorCorrectionLevel_t2622323615 * ___ecLevel, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.Encoder::getAlphanumericCode(System.Int32)
extern "C"  int32_t Encoder_getAlphanumericCode_m4110627929 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Encoder::chooseMode(System.String)
extern "C"  Mode_t3664701860 * Encoder_chooseMode_m1974313581 (Object_t * __this /* static, unused */, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.Encoder::chooseMode(System.String,System.String)
extern "C"  Mode_t3664701860 * Encoder_chooseMode_m2937030633 (Object_t * __this /* static, unused */, String_t* ___content, String_t* ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.Encoder::isOnlyDoubleByteKanji(System.String)
extern "C"  bool Encoder_isOnlyDoubleByteKanji_m2429055422 (Object_t * __this /* static, unused */, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.Encoder::chooseMaskPattern(ZXing.Common.BitArray,ZXing.QrCode.Internal.ErrorCorrectionLevel,ZXing.QrCode.Internal.Version,ZXing.QrCode.Internal.ByteMatrix)
extern "C"  int32_t Encoder_chooseMaskPattern_m2136596944 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___bits, ErrorCorrectionLevel_t2622323615 * ___ecLevel, Version_t1383592089 * ___version, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.Encoder::chooseVersion(System.Int32,ZXing.QrCode.Internal.ErrorCorrectionLevel)
extern "C"  Version_t1383592089 * Encoder_chooseVersion_m676249917 (Object_t * __this /* static, unused */, int32_t ___numInputBits, ErrorCorrectionLevel_t2622323615 * ___ecLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Encoder::terminateBits(System.Int32,ZXing.Common.BitArray)
extern "C"  void Encoder_terminateBits_m862271623 (Object_t * __this /* static, unused */, int32_t ___numDataBytes, BitArray_t2845796643 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Encoder::getNumDataBytesAndNumECBytesForBlockID(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[])
extern "C"  void Encoder_getNumDataBytesAndNumECBytesForBlockID_m1985795040 (Object_t * __this /* static, unused */, int32_t ___numTotalBytes, int32_t ___numDataBytes, int32_t ___numRSBlocks, int32_t ___blockID, Int32U5BU5D_t1809983122* ___numDataBytesInBlock, Int32U5BU5D_t1809983122* ___numECBytesInBlock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitArray ZXing.QrCode.Internal.Encoder::interleaveWithECBytes(ZXing.Common.BitArray,System.Int32,System.Int32,System.Int32)
extern "C"  BitArray_t2845796643 * Encoder_interleaveWithECBytes_m2700494028 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___bits, int32_t ___numTotalBytes, int32_t ___numDataBytes, int32_t ___numRSBlocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.QrCode.Internal.Encoder::generateECBytes(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t58506160* Encoder_generateECBytes_m2813106552 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___dataBytes, int32_t ___numEcBytesInBlock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Encoder::appendModeInfo(ZXing.QrCode.Internal.Mode,ZXing.Common.BitArray)
extern "C"  void Encoder_appendModeInfo_m3206018254 (Object_t * __this /* static, unused */, Mode_t3664701860 * ___mode, BitArray_t2845796643 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Encoder::appendLengthInfo(System.Int32,ZXing.QrCode.Internal.Version,ZXing.QrCode.Internal.Mode,ZXing.Common.BitArray)
extern "C"  void Encoder_appendLengthInfo_m181567911 (Object_t * __this /* static, unused */, int32_t ___numLetters, Version_t1383592089 * ___version, Mode_t3664701860 * ___mode, BitArray_t2845796643 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Encoder::appendBytes(System.String,ZXing.QrCode.Internal.Mode,ZXing.Common.BitArray,System.String)
extern "C"  void Encoder_appendBytes_m8066242 (Object_t * __this /* static, unused */, String_t* ___content, Mode_t3664701860 * ___mode, BitArray_t2845796643 * ___bits, String_t* ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Encoder::appendNumericBytes(System.String,ZXing.Common.BitArray)
extern "C"  void Encoder_appendNumericBytes_m3120429751 (Object_t * __this /* static, unused */, String_t* ___content, BitArray_t2845796643 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Encoder::appendAlphanumericBytes(System.String,ZXing.Common.BitArray)
extern "C"  void Encoder_appendAlphanumericBytes_m164747679 (Object_t * __this /* static, unused */, String_t* ___content, BitArray_t2845796643 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Encoder::append8BitBytes(System.String,ZXing.Common.BitArray,System.String)
extern "C"  void Encoder_append8BitBytes_m2628161 (Object_t * __this /* static, unused */, String_t* ___content, BitArray_t2845796643 * ___bits, String_t* ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Encoder::appendKanjiBytes(System.String,ZXing.Common.BitArray)
extern "C"  void Encoder_appendKanjiBytes_m617994113 (Object_t * __this /* static, unused */, String_t* ___content, BitArray_t2845796643 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Encoder::appendECI(ZXing.Common.CharacterSetECI,ZXing.Common.BitArray)
extern "C"  void Encoder_appendECI_m3884288327 (Object_t * __this /* static, unused */, CharacterSetECI_t2827278313 * ___eci, BitArray_t2845796643 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;

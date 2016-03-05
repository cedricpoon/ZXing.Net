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
// System.Collections.Generic.IList`1<System.Byte[]>
struct IList_1_t2224998474;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ZXing.Common.DecoderResult::.ctor(System.Byte[],System.String,System.Collections.Generic.IList`1<System.Byte[]>,System.String)
extern "C"  void DecoderResult__ctor_m1174756946 (DecoderResult_t1348480280 * __this, ByteU5BU5D_t58506160* ___rawBytes, String_t* ___text, Object_t* ___byteSegments, String_t* ___ecLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecoderResult::.ctor(System.Byte[],System.String,System.Collections.Generic.IList`1<System.Byte[]>,System.String,System.Int32,System.Int32)
extern "C"  void DecoderResult__ctor_m504697138 (DecoderResult_t1348480280 * __this, ByteU5BU5D_t58506160* ___rawBytes, String_t* ___text, Object_t* ___byteSegments, String_t* ___ecLevel, int32_t ___saSequence, int32_t ___saParity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.Common.DecoderResult::get_RawBytes()
extern "C"  ByteU5BU5D_t58506160* DecoderResult_get_RawBytes_m3852174119 (DecoderResult_t1348480280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecoderResult::set_RawBytes(System.Byte[])
extern "C"  void DecoderResult_set_RawBytes_m1402828600 (DecoderResult_t1348480280 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Common.DecoderResult::get_Text()
extern "C"  String_t* DecoderResult_get_Text_m1797767850 (DecoderResult_t1348480280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecoderResult::set_Text(System.String)
extern "C"  void DecoderResult_set_Text_m1211043495 (DecoderResult_t1348480280 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Byte[]> ZXing.Common.DecoderResult::get_ByteSegments()
extern "C"  Object_t* DecoderResult_get_ByteSegments_m3425194253 (DecoderResult_t1348480280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecoderResult::set_ByteSegments(System.Collections.Generic.IList`1<System.Byte[]>)
extern "C"  void DecoderResult_set_ByteSegments_m4126673460 (DecoderResult_t1348480280 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Common.DecoderResult::get_ECLevel()
extern "C"  String_t* DecoderResult_get_ECLevel_m524875755 (DecoderResult_t1348480280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecoderResult::set_ECLevel(System.String)
extern "C"  void DecoderResult_set_ECLevel_m3923517576 (DecoderResult_t1348480280 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.DecoderResult::get_StructuredAppend()
extern "C"  bool DecoderResult_get_StructuredAppend_m555867673 (DecoderResult_t1348480280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.DecoderResult::get_ErrorsCorrected()
extern "C"  int32_t DecoderResult_get_ErrorsCorrected_m2613426968 (DecoderResult_t1348480280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecoderResult::set_ErrorsCorrected(System.Int32)
extern "C"  void DecoderResult_set_ErrorsCorrected_m3588105155 (DecoderResult_t1348480280 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.DecoderResult::get_StructuredAppendSequenceNumber()
extern "C"  int32_t DecoderResult_get_StructuredAppendSequenceNumber_m2623304573 (DecoderResult_t1348480280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecoderResult::set_StructuredAppendSequenceNumber(System.Int32)
extern "C"  void DecoderResult_set_StructuredAppendSequenceNumber_m3165937332 (DecoderResult_t1348480280 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.DecoderResult::get_Erasures()
extern "C"  int32_t DecoderResult_get_Erasures_m1476651154 (DecoderResult_t1348480280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecoderResult::set_Erasures(System.Int32)
extern "C"  void DecoderResult_set_Erasures_m2267868361 (DecoderResult_t1348480280 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.DecoderResult::get_StructuredAppendParity()
extern "C"  int32_t DecoderResult_get_StructuredAppendParity_m3447267008 (DecoderResult_t1348480280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecoderResult::set_StructuredAppendParity(System.Int32)
extern "C"  void DecoderResult_set_StructuredAppendParity_m3001942903 (DecoderResult_t1348480280 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ZXing.Common.DecoderResult::get_Other()
extern "C"  Object_t * DecoderResult_get_Other_m1798759683 (DecoderResult_t1348480280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecoderResult::set_Other(System.Object)
extern "C"  void DecoderResult_set_Other_m907259824 (DecoderResult_t1348480280 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.Result
struct Result_t2215385161;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t4189597315;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ZXing_BarcodeFormat1525350531.h"
#include "AssemblyU2DCSharp_ZXing_ResultMetadataType3612887026.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat)
extern "C"  void Result__ctor_m790359697 (Result_t2215385161 * __this, String_t* ___text, ByteU5BU5D_t58506160* ___rawBytes, ResultPointU5BU5D_t128061510* ___resultPoints, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat,System.Int64)
extern "C"  void Result__ctor_m2214145383 (Result_t2215385161 * __this, String_t* ___text, ByteU5BU5D_t58506160* ___rawBytes, ResultPointU5BU5D_t128061510* ___resultPoints, int32_t ___format, int64_t ___timestamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Result::get_Text()
extern "C"  String_t* Result_get_Text_m3702962793 (Result_t2215385161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Result::set_Text(System.String)
extern "C"  void Result_set_Text_m13768328 (Result_t2215385161 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.Result::get_RawBytes()
extern "C"  ByteU5BU5D_t58506160* Result_get_RawBytes_m281021350 (Result_t2215385161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Result::set_RawBytes(System.Byte[])
extern "C"  void Result_set_RawBytes_m1908909721 (Result_t2215385161 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint[] ZXing.Result::get_ResultPoints()
extern "C"  ResultPointU5BU5D_t128061510* Result_get_ResultPoints_m4236973889 (Result_t2215385161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Result::set_ResultPoints(ZXing.ResultPoint[])
extern "C"  void Result_set_ResultPoints_m791298458 (Result_t2215385161 * __this, ResultPointU5BU5D_t128061510* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.BarcodeFormat ZXing.Result::get_BarcodeFormat()
extern "C"  int32_t Result_get_BarcodeFormat_m634555130 (Result_t2215385161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Result::set_BarcodeFormat(ZXing.BarcodeFormat)
extern "C"  void Result_set_BarcodeFormat_m260413337 (Result_t2215385161 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::get_ResultMetadata()
extern "C"  Object_t* Result_get_ResultMetadata_m517895776 (Result_t2215385161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Result::set_ResultMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
extern "C"  void Result_set_ResultMetadata_m1170147799 (Result_t2215385161 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ZXing.Result::get_Timestamp()
extern "C"  int64_t Result_get_Timestamp_m3044704784 (Result_t2215385161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Result::set_Timestamp(System.Int64)
extern "C"  void Result_set_Timestamp_m1528190109 (Result_t2215385161 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Result::putMetadata(ZXing.ResultMetadataType,System.Object)
extern "C"  void Result_putMetadata_m2570889966 (Result_t2215385161 * __this, int32_t ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Result::putAllMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
extern "C"  void Result_putAllMetadata_m3082418351 (Result_t2215385161 * __this, Object_t* ___metadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Result::addResultPoints(ZXing.ResultPoint[])
extern "C"  void Result_addResultPoints_m3879125172 (Result_t2215385161 * __this, ResultPointU5BU5D_t128061510* ___newPoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Result::ToString()
extern "C"  String_t* Result_ToString_m2888876767 (Result_t2215385161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

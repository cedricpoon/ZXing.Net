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

// ZXing.Multi.QrCode.QRCodeMultiReader
struct QRCodeMultiReader_t3703948269;
// ZXing.Result[]
struct ResultU5BU5D_t1359018100;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.Collections.Generic.List`1<ZXing.Result>
struct List_1_t3012344130;
// ZXing.Result
struct Result_t2215385161;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"
#include "AssemblyU2DCSharp_ZXing_Result2215385161.h"

// System.Void ZXing.Multi.QrCode.QRCodeMultiReader::.ctor()
extern "C"  void QRCodeMultiReader__ctor_m2070111758 (QRCodeMultiReader_t3703948269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Multi.QrCode.QRCodeMultiReader::.cctor()
extern "C"  void QRCodeMultiReader__cctor_m3561826143 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result[] ZXing.Multi.QrCode.QRCodeMultiReader::decodeMultiple(ZXing.BinaryBitmap)
extern "C"  ResultU5BU5D_t1359018100* QRCodeMultiReader_decodeMultiple_m640437422 (QRCodeMultiReader_t3703948269 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result[] ZXing.Multi.QrCode.QRCodeMultiReader::decodeMultiple(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  ResultU5BU5D_t1359018100* QRCodeMultiReader_decodeMultiple_m1155725919 (QRCodeMultiReader_t3703948269 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ZXing.Result> ZXing.Multi.QrCode.QRCodeMultiReader::ProcessStructuredAppend(System.Collections.Generic.List`1<ZXing.Result>)
extern "C"  List_1_t3012344130 * QRCodeMultiReader_ProcessStructuredAppend_m3831473421 (QRCodeMultiReader_t3703948269 * __this, List_1_t3012344130 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Multi.QrCode.QRCodeMultiReader::SaSequenceSort(ZXing.Result,ZXing.Result)
extern "C"  int32_t QRCodeMultiReader_SaSequenceSort_m3022640981 (QRCodeMultiReader_t3703948269 * __this, Result_t2215385161 * ___a, Result_t2215385161 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;

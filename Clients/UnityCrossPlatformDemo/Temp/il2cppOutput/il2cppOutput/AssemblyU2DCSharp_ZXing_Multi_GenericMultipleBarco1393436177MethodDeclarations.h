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

// ZXing.Multi.GenericMultipleBarcodeReader
struct GenericMultipleBarcodeReader_t1393436177;
// ZXing.Reader
struct Reader_t2214832367;
// ZXing.Result[]
struct ResultU5BU5D_t1359018100;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.Collections.Generic.IList`1<ZXing.Result>
struct IList_1_t86910179;
// ZXing.Result
struct Result_t2215385161;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"
#include "AssemblyU2DCSharp_ZXing_Result2215385161.h"

// System.Void ZXing.Multi.GenericMultipleBarcodeReader::.ctor(ZXing.Reader)
extern "C"  void GenericMultipleBarcodeReader__ctor_m2844955443 (GenericMultipleBarcodeReader_t1393436177 * __this, Object_t * ___delegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result[] ZXing.Multi.GenericMultipleBarcodeReader::decodeMultiple(ZXing.BinaryBitmap)
extern "C"  ResultU5BU5D_t1359018100* GenericMultipleBarcodeReader_decodeMultiple_m816950076 (GenericMultipleBarcodeReader_t1393436177 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result[] ZXing.Multi.GenericMultipleBarcodeReader::decodeMultiple(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  ResultU5BU5D_t1359018100* GenericMultipleBarcodeReader_decodeMultiple_m1026663057 (GenericMultipleBarcodeReader_t1393436177 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Multi.GenericMultipleBarcodeReader::doDecodeMultiple(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>,System.Collections.Generic.IList`1<ZXing.Result>,System.Int32,System.Int32,System.Int32)
extern "C"  void GenericMultipleBarcodeReader_doDecodeMultiple_m2462957775 (GenericMultipleBarcodeReader_t1393436177 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, Object_t* ___results, int32_t ___xOffset, int32_t ___yOffset, int32_t ___currentDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.Multi.GenericMultipleBarcodeReader::translateResultPoints(ZXing.Result,System.Int32,System.Int32)
extern "C"  Result_t2215385161 * GenericMultipleBarcodeReader_translateResultPoints_m9368431 (Object_t * __this /* static, unused */, Result_t2215385161 * ___result, int32_t ___xOffset, int32_t ___yOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.Multi.GenericMultipleBarcodeReader::decode(ZXing.BinaryBitmap)
extern "C"  Result_t2215385161 * GenericMultipleBarcodeReader_decode_m126466990 (GenericMultipleBarcodeReader_t1393436177 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.Multi.GenericMultipleBarcodeReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * GenericMultipleBarcodeReader_decode_m1024060255 (GenericMultipleBarcodeReader_t1393436177 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Multi.GenericMultipleBarcodeReader::reset()
extern "C"  void GenericMultipleBarcodeReader_reset_m2366550285 (GenericMultipleBarcodeReader_t1393436177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

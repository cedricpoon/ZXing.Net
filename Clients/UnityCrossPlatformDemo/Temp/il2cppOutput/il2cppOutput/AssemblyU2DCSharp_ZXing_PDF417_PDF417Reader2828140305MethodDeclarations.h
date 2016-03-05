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

// ZXing.PDF417.PDF417Reader
struct PDF417Reader_t2828140305;
// ZXing.Result
struct Result_t2215385161;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// ZXing.Result[]
struct ResultU5BU5D_t1359018100;
// ZXing.ResultPoint
struct ResultPoint_t887763807;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"
#include "AssemblyU2DCSharp_ZXing_ResultPoint887763807.h"

// System.Void ZXing.PDF417.PDF417Reader::.ctor()
extern "C"  void PDF417Reader__ctor_m3911001924 (PDF417Reader_t2828140305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.PDF417.PDF417Reader::decode(ZXing.BinaryBitmap)
extern "C"  Result_t2215385161 * PDF417Reader_decode_m3656904126 (PDF417Reader_t2828140305 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.PDF417.PDF417Reader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * PDF417Reader_decode_m2405569359 (PDF417Reader_t2828140305 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result[] ZXing.PDF417.PDF417Reader::decodeMultiple(ZXing.BinaryBitmap)
extern "C"  ResultU5BU5D_t1359018100* PDF417Reader_decodeMultiple_m3761042512 (PDF417Reader_t2828140305 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result[] ZXing.PDF417.PDF417Reader::decodeMultiple(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  ResultU5BU5D_t1359018100* PDF417Reader_decodeMultiple_m2046253565 (PDF417Reader_t2828140305 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result[] ZXing.PDF417.PDF417Reader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>,System.Boolean)
extern "C"  ResultU5BU5D_t1359018100* PDF417Reader_decode_m3259408048 (Object_t * __this /* static, unused */, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, bool ___multiple, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.PDF417Reader::getMaxWidth(ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  int32_t PDF417Reader_getMaxWidth_m847161604 (Object_t * __this /* static, unused */, ResultPoint_t887763807 * ___p1, ResultPoint_t887763807 * ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.PDF417Reader::getMinWidth(ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  int32_t PDF417Reader_getMinWidth_m1431543922 (Object_t * __this /* static, unused */, ResultPoint_t887763807 * ___p1, ResultPoint_t887763807 * ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.PDF417Reader::getMaxCodewordWidth(ZXing.ResultPoint[])
extern "C"  int32_t PDF417Reader_getMaxCodewordWidth_m1133681846 (Object_t * __this /* static, unused */, ResultPointU5BU5D_t128061510* ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.PDF417Reader::getMinCodewordWidth(ZXing.ResultPoint[])
extern "C"  int32_t PDF417Reader_getMinCodewordWidth_m3776242212 (Object_t * __this /* static, unused */, ResultPointU5BU5D_t128061510* ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.PDF417Reader::reset()
extern "C"  void PDF417Reader_reset_m4187748881 (PDF417Reader_t2828140305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

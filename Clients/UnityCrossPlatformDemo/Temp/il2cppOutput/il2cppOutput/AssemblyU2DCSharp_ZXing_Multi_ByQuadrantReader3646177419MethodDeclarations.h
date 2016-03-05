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

// ZXing.Multi.ByQuadrantReader
struct ByQuadrantReader_t3646177419;
// ZXing.Reader
struct Reader_t2214832367;
// ZXing.Result
struct Result_t2215385161;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"

// System.Void ZXing.Multi.ByQuadrantReader::.ctor(ZXing.Reader)
extern "C"  void ByQuadrantReader__ctor_m531617401 (ByQuadrantReader_t3646177419 * __this, Object_t * ___delegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.Multi.ByQuadrantReader::decode(ZXing.BinaryBitmap)
extern "C"  Result_t2215385161 * ByQuadrantReader_decode_m841223848 (ByQuadrantReader_t3646177419 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.Multi.ByQuadrantReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * ByQuadrantReader_decode_m1142853285 (ByQuadrantReader_t3646177419 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Multi.ByQuadrantReader::reset()
extern "C"  void ByQuadrantReader_reset_m2964467027 (ByQuadrantReader_t3646177419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Multi.ByQuadrantReader::makeAbsolute(ZXing.ResultPoint[],System.Int32,System.Int32)
extern "C"  void ByQuadrantReader_makeAbsolute_m1938477380 (Object_t * __this /* static, unused */, ResultPointU5BU5D_t128061510* ___points, int32_t ___leftOffset, int32_t ___topOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;

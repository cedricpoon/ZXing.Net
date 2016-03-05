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

// ZXing.Datamatrix.DataMatrixReader
struct DataMatrixReader_t3570985861;
// ZXing.Result
struct Result_t2215385161;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Datamatrix.DataMatrixReader::.ctor()
extern "C"  void DataMatrixReader__ctor_m1157426180 (DataMatrixReader_t3570985861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Datamatrix.DataMatrixReader::.cctor()
extern "C"  void DataMatrixReader__cctor_m1038377001 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.Datamatrix.DataMatrixReader::decode(ZXing.BinaryBitmap)
extern "C"  Result_t2215385161 * DataMatrixReader_decode_m769697534 (DataMatrixReader_t3570985861 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.Datamatrix.DataMatrixReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * DataMatrixReader_decode_m1221222927 (DataMatrixReader_t3570985861 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Datamatrix.DataMatrixReader::reset()
extern "C"  void DataMatrixReader_reset_m1434173137 (DataMatrixReader_t3570985861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Datamatrix.DataMatrixReader::extractPureBits(ZXing.Common.BitMatrix)
extern "C"  BitMatrix_t3148694213 * DataMatrixReader_extractPureBits_m2830478804 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Datamatrix.DataMatrixReader::moduleSize(System.Int32[],ZXing.Common.BitMatrix,System.Int32&)
extern "C"  bool DataMatrixReader_moduleSize_m3163149022 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___leftTopBlack, BitMatrix_t3148694213 * ___image, int32_t* ___modulesize, const MethodInfo* method) IL2CPP_METHOD_ATTR;

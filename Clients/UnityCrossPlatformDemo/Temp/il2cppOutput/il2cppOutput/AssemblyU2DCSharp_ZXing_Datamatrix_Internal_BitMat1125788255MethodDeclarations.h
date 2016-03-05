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

// ZXing.Datamatrix.Internal.BitMatrixParser
struct BitMatrixParser_t1125788255;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.Datamatrix.Internal.Version
struct Version_t1899058762;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Datamatrix.Internal.BitMatrixParser::.ctor(ZXing.Common.BitMatrix)
extern "C"  void BitMatrixParser__ctor_m39272705 (BitMatrixParser_t1125788255 * __this, BitMatrix_t3148694213 * ___bitMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Datamatrix.Internal.Version ZXing.Datamatrix.Internal.BitMatrixParser::get_Version()
extern "C"  Version_t1899058762 * BitMatrixParser_get_Version_m2846540566 (BitMatrixParser_t1125788255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Datamatrix.Internal.Version ZXing.Datamatrix.Internal.BitMatrixParser::readVersion(ZXing.Common.BitMatrix)
extern "C"  Version_t1899058762 * BitMatrixParser_readVersion_m236772052 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___bitMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.Datamatrix.Internal.BitMatrixParser::readCodewords()
extern "C"  ByteU5BU5D_t58506160* BitMatrixParser_readCodewords_m572060900 (BitMatrixParser_t1125788255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Datamatrix.Internal.BitMatrixParser::readModule(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool BitMatrixParser_readModule_m2838813386 (BitMatrixParser_t1125788255 * __this, int32_t ___row, int32_t ___column, int32_t ___numRows, int32_t ___numColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.BitMatrixParser::readUtah(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t BitMatrixParser_readUtah_m4060274698 (BitMatrixParser_t1125788255 * __this, int32_t ___row, int32_t ___column, int32_t ___numRows, int32_t ___numColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.BitMatrixParser::readCorner1(System.Int32,System.Int32)
extern "C"  int32_t BitMatrixParser_readCorner1_m1769622206 (BitMatrixParser_t1125788255 * __this, int32_t ___numRows, int32_t ___numColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.BitMatrixParser::readCorner2(System.Int32,System.Int32)
extern "C"  int32_t BitMatrixParser_readCorner2_m1514885661 (BitMatrixParser_t1125788255 * __this, int32_t ___numRows, int32_t ___numColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.BitMatrixParser::readCorner3(System.Int32,System.Int32)
extern "C"  int32_t BitMatrixParser_readCorner3_m1260149116 (BitMatrixParser_t1125788255 * __this, int32_t ___numRows, int32_t ___numColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.BitMatrixParser::readCorner4(System.Int32,System.Int32)
extern "C"  int32_t BitMatrixParser_readCorner4_m1005412571 (BitMatrixParser_t1125788255 * __this, int32_t ___numRows, int32_t ___numColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Datamatrix.Internal.BitMatrixParser::extractDataRegion(ZXing.Common.BitMatrix)
extern "C"  BitMatrix_t3148694213 * BitMatrixParser_extractDataRegion_m1999637446 (BitMatrixParser_t1125788255 * __this, BitMatrix_t3148694213 * ___bitMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;

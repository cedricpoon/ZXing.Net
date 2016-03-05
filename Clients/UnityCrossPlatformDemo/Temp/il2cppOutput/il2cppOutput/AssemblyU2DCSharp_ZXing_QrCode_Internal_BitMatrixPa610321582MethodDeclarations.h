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

// ZXing.QrCode.Internal.BitMatrixParser
struct BitMatrixParser_t610321582;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.QrCode.Internal.FormatInformation
struct FormatInformation_t2600783990;
// ZXing.QrCode.Internal.Version
struct Version_t1383592089;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.QrCode.Internal.BitMatrixParser::.ctor(ZXing.Common.BitMatrix)
extern "C"  void BitMatrixParser__ctor_m3859033284 (BitMatrixParser_t610321582 * __this, BitMatrix_t3148694213 * ___bitMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.BitMatrixParser ZXing.QrCode.Internal.BitMatrixParser::createBitMatrixParser(ZXing.Common.BitMatrix)
extern "C"  BitMatrixParser_t610321582 * BitMatrixParser_createBitMatrixParser_m2282151060 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___bitMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.FormatInformation ZXing.QrCode.Internal.BitMatrixParser::readFormatInformation()
extern "C"  FormatInformation_t2600783990 * BitMatrixParser_readFormatInformation_m3492854095 (BitMatrixParser_t610321582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.BitMatrixParser::readVersion()
extern "C"  Version_t1383592089 * BitMatrixParser_readVersion_m3084045103 (BitMatrixParser_t610321582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.BitMatrixParser::copyBit(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t BitMatrixParser_copyBit_m3971887278 (BitMatrixParser_t610321582 * __this, int32_t ___i, int32_t ___j, int32_t ___versionBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.QrCode.Internal.BitMatrixParser::readCodewords()
extern "C"  ByteU5BU5D_t58506160* BitMatrixParser_readCodewords_m75245287 (BitMatrixParser_t610321582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.BitMatrixParser::remask()
extern "C"  void BitMatrixParser_remask_m2665444746 (BitMatrixParser_t610321582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.BitMatrixParser::setMirror(System.Boolean)
extern "C"  void BitMatrixParser_setMirror_m1655150095 (BitMatrixParser_t610321582 * __this, bool ___mirror, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.BitMatrixParser::mirror()
extern "C"  void BitMatrixParser_mirror_m1955108266 (BitMatrixParser_t610321582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

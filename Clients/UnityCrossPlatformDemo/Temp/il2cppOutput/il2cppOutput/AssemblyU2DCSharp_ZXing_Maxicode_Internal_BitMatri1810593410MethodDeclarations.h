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

// ZXing.Maxicode.Internal.BitMatrixParser
struct BitMatrixParser_t1810593410;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.Maxicode.Internal.BitMatrixParser::.ctor(ZXing.Common.BitMatrix)
extern "C"  void BitMatrixParser__ctor_m3108403080 (BitMatrixParser_t1810593410 * __this, BitMatrix_t3148694213 * ___bitMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Maxicode.Internal.BitMatrixParser::.cctor()
extern "C"  void BitMatrixParser__cctor_m1084532656 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.Maxicode.Internal.BitMatrixParser::readCodewords()
extern "C"  ByteU5BU5D_t58506160* BitMatrixParser_readCodewords_m3469125163 (BitMatrixParser_t1810593410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

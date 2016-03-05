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

// ZXing.QrCode.Internal.ByteMatrix
struct ByteMatrix_t1667372778;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t1952051089;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_ByteMatrix1667372778.h"

// System.Int32 ZXing.QrCode.Internal.MaskUtil::applyMaskPenaltyRule1(ZXing.QrCode.Internal.ByteMatrix)
extern "C"  int32_t MaskUtil_applyMaskPenaltyRule1_m1004249796 (Object_t * __this /* static, unused */, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.MaskUtil::applyMaskPenaltyRule2(ZXing.QrCode.Internal.ByteMatrix)
extern "C"  int32_t MaskUtil_applyMaskPenaltyRule2_m2729730693 (Object_t * __this /* static, unused */, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.MaskUtil::applyMaskPenaltyRule3(ZXing.QrCode.Internal.ByteMatrix)
extern "C"  int32_t MaskUtil_applyMaskPenaltyRule3_m160244294 (Object_t * __this /* static, unused */, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.MaskUtil::isWhiteHorizontal(System.Byte[],System.Int32,System.Int32)
extern "C"  bool MaskUtil_isWhiteHorizontal_m338527402 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___rowArray, int32_t ___from, int32_t ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.MaskUtil::isWhiteVertical(System.Byte[][],System.Int32,System.Int32,System.Int32)
extern "C"  bool MaskUtil_isWhiteVertical_m884428257 (Object_t * __this /* static, unused */, ByteU5BU5DU5BU5D_t1952051089* ___array, int32_t ___col, int32_t ___from, int32_t ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.MaskUtil::applyMaskPenaltyRule4(ZXing.QrCode.Internal.ByteMatrix)
extern "C"  int32_t MaskUtil_applyMaskPenaltyRule4_m1885725191 (Object_t * __this /* static, unused */, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.MaskUtil::getDataMaskBit(System.Int32,System.Int32,System.Int32)
extern "C"  bool MaskUtil_getDataMaskBit_m3432164248 (Object_t * __this /* static, unused */, int32_t ___maskPattern, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.MaskUtil::applyMaskPenaltyRule1Internal(ZXing.QrCode.Internal.ByteMatrix,System.Boolean)
extern "C"  int32_t MaskUtil_applyMaskPenaltyRule1Internal_m2472265212 (Object_t * __this /* static, unused */, ByteMatrix_t1667372778 * ___matrix, bool ___isHorizontal, const MethodInfo* method) IL2CPP_METHOD_ATTR;

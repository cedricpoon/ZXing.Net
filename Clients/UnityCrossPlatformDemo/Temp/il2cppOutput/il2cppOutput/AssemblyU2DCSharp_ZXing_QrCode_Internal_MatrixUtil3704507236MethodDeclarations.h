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
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t2622323615;
// ZXing.QrCode.Internal.Version
struct Version_t1383592089;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_ByteMatrix1667372778.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_ErrorCorre2622323615.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_Version1383592089.h"

// System.Void ZXing.QrCode.Internal.MatrixUtil::.cctor()
extern "C"  void MatrixUtil__cctor_m42344528 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::clearMatrix(ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_clearMatrix_m476801349 (Object_t * __this /* static, unused */, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::buildMatrix(ZXing.Common.BitArray,ZXing.QrCode.Internal.ErrorCorrectionLevel,ZXing.QrCode.Internal.Version,System.Int32,ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_buildMatrix_m2125281668 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___dataBits, ErrorCorrectionLevel_t2622323615 * ___ecLevel, Version_t1383592089 * ___version, int32_t ___maskPattern, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::embedBasicPatterns(ZXing.QrCode.Internal.Version,ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_embedBasicPatterns_m3100516556 (Object_t * __this /* static, unused */, Version_t1383592089 * ___version, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::embedTypeInfo(ZXing.QrCode.Internal.ErrorCorrectionLevel,System.Int32,ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_embedTypeInfo_m708267886 (Object_t * __this /* static, unused */, ErrorCorrectionLevel_t2622323615 * ___ecLevel, int32_t ___maskPattern, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::maybeEmbedVersionInfo(ZXing.QrCode.Internal.Version,ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_maybeEmbedVersionInfo_m1098494141 (Object_t * __this /* static, unused */, Version_t1383592089 * ___version, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::embedDataBits(ZXing.Common.BitArray,System.Int32,ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_embedDataBits_m1188187284 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___dataBits, int32_t ___maskPattern, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.MatrixUtil::findMSBSet(System.Int32)
extern "C"  int32_t MatrixUtil_findMSBSet_m707452293 (Object_t * __this /* static, unused */, int32_t ___value_Renamed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.MatrixUtil::calculateBCHCode(System.Int32,System.Int32)
extern "C"  int32_t MatrixUtil_calculateBCHCode_m2966124259 (Object_t * __this /* static, unused */, int32_t ___value, int32_t ___poly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::makeTypeInfoBits(ZXing.QrCode.Internal.ErrorCorrectionLevel,System.Int32,ZXing.Common.BitArray)
extern "C"  void MatrixUtil_makeTypeInfoBits_m836599668 (Object_t * __this /* static, unused */, ErrorCorrectionLevel_t2622323615 * ___ecLevel, int32_t ___maskPattern, BitArray_t2845796643 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::makeVersionInfoBits(ZXing.QrCode.Internal.Version,ZXing.Common.BitArray)
extern "C"  void MatrixUtil_makeVersionInfoBits_m4023587235 (Object_t * __this /* static, unused */, Version_t1383592089 * ___version, BitArray_t2845796643 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.MatrixUtil::isEmpty(System.Int32)
extern "C"  bool MatrixUtil_isEmpty_m2742615643 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::embedTimingPatterns(ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_embedTimingPatterns_m1140660573 (Object_t * __this /* static, unused */, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::embedDarkDotAtLeftBottomCorner(ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_embedDarkDotAtLeftBottomCorner_m1942158455 (Object_t * __this /* static, unused */, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::embedHorizontalSeparationPattern(System.Int32,System.Int32,ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_embedHorizontalSeparationPattern_m2770808336 (Object_t * __this /* static, unused */, int32_t ___xStart, int32_t ___yStart, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::embedVerticalSeparationPattern(System.Int32,System.Int32,ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_embedVerticalSeparationPattern_m95809342 (Object_t * __this /* static, unused */, int32_t ___xStart, int32_t ___yStart, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::embedPositionAdjustmentPattern(System.Int32,System.Int32,ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_embedPositionAdjustmentPattern_m930355428 (Object_t * __this /* static, unused */, int32_t ___xStart, int32_t ___yStart, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::embedPositionDetectionPattern(System.Int32,System.Int32,ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_embedPositionDetectionPattern_m1712717636 (Object_t * __this /* static, unused */, int32_t ___xStart, int32_t ___yStart, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::embedPositionDetectionPatternsAndSeparators(ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_embedPositionDetectionPatternsAndSeparators_m3846722582 (Object_t * __this /* static, unused */, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.MatrixUtil::maybeEmbedPositionAdjustmentPatterns(ZXing.QrCode.Internal.Version,ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void MatrixUtil_maybeEmbedPositionAdjustmentPatterns_m2897966366 (Object_t * __this /* static, unused */, Version_t1383592089 * ___version, ByteMatrix_t1667372778 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;

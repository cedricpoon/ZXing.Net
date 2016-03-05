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

// ZXing.Common.DecoderResult
struct DecoderResult_t1348480280;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPoint
struct ResultPoint_t887763807;
// ZXing.PDF417.Internal.DetectionResult
struct DetectionResult_t2558765861;
// ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn
struct DetectionResultRowIndicatorColumn_t1991735248;
// ZXing.PDF417.Internal.BoundingBox
struct BoundingBox_t745095594;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.PDF417.Internal.BarcodeMetadata
struct BarcodeMetadata_t1740712946;
// ZXing.PDF417.Internal.BarcodeValue[][]
struct BarcodeValueU5BU5DU5BU5D_t1096892912;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;
// ZXing.PDF417.Internal.Codeword
struct Codeword_t3831973594;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_ResultPoint887763807.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_DetectionR1991735248.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_BoundingBox745095594.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_DetectionR2558765861.h"

// System.Void ZXing.PDF417.Internal.PDF417ScanningDecoder::.cctor()
extern "C"  void PDF417ScanningDecoder__cctor_m3782042776 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.PDF417.Internal.PDF417ScanningDecoder::decode(ZXing.Common.BitMatrix,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,System.Int32,System.Int32)
extern "C"  DecoderResult_t1348480280 * PDF417ScanningDecoder_decode_m2406156991 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, ResultPoint_t887763807 * ___imageTopLeft, ResultPoint_t887763807 * ___imageBottomLeft, ResultPoint_t887763807 * ___imageTopRight, ResultPoint_t887763807 * ___imageBottomRight, int32_t ___minCodewordWidth, int32_t ___maxCodewordWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.DetectionResult ZXing.PDF417.Internal.PDF417ScanningDecoder::merge(ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn,ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn)
extern "C"  DetectionResult_t2558765861 * PDF417ScanningDecoder_merge_m1078968925 (Object_t * __this /* static, unused */, DetectionResultRowIndicatorColumn_t1991735248 * ___leftRowIndicatorColumn, DetectionResultRowIndicatorColumn_t1991735248 * ___rightRowIndicatorColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.BoundingBox ZXing.PDF417.Internal.PDF417ScanningDecoder::adjustBoundingBox(ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn)
extern "C"  BoundingBox_t745095594 * PDF417ScanningDecoder_adjustBoundingBox_m3123255310 (Object_t * __this /* static, unused */, DetectionResultRowIndicatorColumn_t1991735248 * ___rowIndicatorColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.PDF417ScanningDecoder::getMax(System.Int32[])
extern "C"  int32_t PDF417ScanningDecoder_getMax_m349501598 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.BarcodeMetadata ZXing.PDF417.Internal.PDF417ScanningDecoder::getBarcodeMetadata(ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn,ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn)
extern "C"  BarcodeMetadata_t1740712946 * PDF417ScanningDecoder_getBarcodeMetadata_m2633362015 (Object_t * __this /* static, unused */, DetectionResultRowIndicatorColumn_t1991735248 * ___leftRowIndicatorColumn, DetectionResultRowIndicatorColumn_t1991735248 * ___rightRowIndicatorColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn ZXing.PDF417.Internal.PDF417ScanningDecoder::getRowIndicatorColumn(ZXing.Common.BitMatrix,ZXing.PDF417.Internal.BoundingBox,ZXing.ResultPoint,System.Boolean,System.Int32,System.Int32)
extern "C"  DetectionResultRowIndicatorColumn_t1991735248 * PDF417ScanningDecoder_getRowIndicatorColumn_m1142212262 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, BoundingBox_t745095594 * ___boundingBox, ResultPoint_t887763807 * ___startPoint, bool ___leftToRight, int32_t ___minCodewordWidth, int32_t ___maxCodewordWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.PDF417ScanningDecoder::adjustCodewordCount(ZXing.PDF417.Internal.DetectionResult,ZXing.PDF417.Internal.BarcodeValue[][])
extern "C"  bool PDF417ScanningDecoder_adjustCodewordCount_m2605120743 (Object_t * __this /* static, unused */, DetectionResult_t2558765861 * ___detectionResult, BarcodeValueU5BU5DU5BU5D_t1096892912* ___barcodeMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.PDF417.Internal.PDF417ScanningDecoder::createDecoderResult(ZXing.PDF417.Internal.DetectionResult)
extern "C"  DecoderResult_t1348480280 * PDF417ScanningDecoder_createDecoderResult_m3614540280 (Object_t * __this /* static, unused */, DetectionResult_t2558765861 * ___detectionResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.PDF417.Internal.PDF417ScanningDecoder::createDecoderResultFromAmbiguousValues(System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[][])
extern "C"  DecoderResult_t1348480280 * PDF417ScanningDecoder_createDecoderResultFromAmbiguousValues_m2255833096 (Object_t * __this /* static, unused */, int32_t ___ecLevel, Int32U5BU5D_t1809983122* ___codewords, Int32U5BU5D_t1809983122* ___erasureArray, Int32U5BU5D_t1809983122* ___ambiguousIndexes, Int32U5BU5DU5BU5D_t158556903* ___ambiguousIndexValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.BarcodeValue[][] ZXing.PDF417.Internal.PDF417ScanningDecoder::createBarcodeMatrix(ZXing.PDF417.Internal.DetectionResult)
extern "C"  BarcodeValueU5BU5DU5BU5D_t1096892912* PDF417ScanningDecoder_createBarcodeMatrix_m2033885530 (Object_t * __this /* static, unused */, DetectionResult_t2558765861 * ___detectionResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.PDF417ScanningDecoder::isValidBarcodeColumn(ZXing.PDF417.Internal.DetectionResult,System.Int32)
extern "C"  bool PDF417ScanningDecoder_isValidBarcodeColumn_m113262417 (Object_t * __this /* static, unused */, DetectionResult_t2558765861 * ___detectionResult, int32_t ___barcodeColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.PDF417ScanningDecoder::getStartColumn(ZXing.PDF417.Internal.DetectionResult,System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t PDF417ScanningDecoder_getStartColumn_m2133270139 (Object_t * __this /* static, unused */, DetectionResult_t2558765861 * ___detectionResult, int32_t ___barcodeColumn, int32_t ___imageRow, bool ___leftToRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.Codeword ZXing.PDF417.Internal.PDF417ScanningDecoder::detectCodeword(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Codeword_t3831973594 * PDF417ScanningDecoder_detectCodeword_m4224850234 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, int32_t ___minColumn, int32_t ___maxColumn, bool ___leftToRight, int32_t ___startColumn, int32_t ___imageRow, int32_t ___minCodewordWidth, int32_t ___maxCodewordWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.PDF417.Internal.PDF417ScanningDecoder::getModuleBitCount(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32)
extern "C"  Int32U5BU5D_t1809983122* PDF417ScanningDecoder_getModuleBitCount_m3139852079 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, int32_t ___minColumn, int32_t ___maxColumn, bool ___leftToRight, int32_t ___startColumn, int32_t ___imageRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.PDF417ScanningDecoder::getNumberOfECCodeWords(System.Int32)
extern "C"  int32_t PDF417ScanningDecoder_getNumberOfECCodeWords_m2068393306 (Object_t * __this /* static, unused */, int32_t ___barcodeECLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.PDF417ScanningDecoder::adjustCodewordStartColumn(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32)
extern "C"  int32_t PDF417ScanningDecoder_adjustCodewordStartColumn_m1174278207 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, int32_t ___minColumn, int32_t ___maxColumn, bool ___leftToRight, int32_t ___codewordStartColumn, int32_t ___imageRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.PDF417ScanningDecoder::checkCodewordSkew(System.Int32,System.Int32,System.Int32)
extern "C"  bool PDF417ScanningDecoder_checkCodewordSkew_m2775608609 (Object_t * __this /* static, unused */, int32_t ___codewordSize, int32_t ___minCodewordWidth, int32_t ___maxCodewordWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.DecoderResult ZXing.PDF417.Internal.PDF417ScanningDecoder::decodeCodewords(System.Int32[],System.Int32,System.Int32[])
extern "C"  DecoderResult_t1348480280 * PDF417ScanningDecoder_decodeCodewords_m2737692003 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___codewords, int32_t ___ecLevel, Int32U5BU5D_t1809983122* ___erasures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.PDF417ScanningDecoder::correctErrors(System.Int32[],System.Int32[],System.Int32)
extern "C"  int32_t PDF417ScanningDecoder_correctErrors_m2101252647 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___codewords, Int32U5BU5D_t1809983122* ___erasures, int32_t ___numECCodewords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.PDF417ScanningDecoder::verifyCodewordCount(System.Int32[],System.Int32)
extern "C"  bool PDF417ScanningDecoder_verifyCodewordCount_m3913848578 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___codewords, int32_t ___numECCodewords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.PDF417.Internal.PDF417ScanningDecoder::getBitCountForCodeword(System.Int32)
extern "C"  Int32U5BU5D_t1809983122* PDF417ScanningDecoder_getBitCountForCodeword_m3575567356 (Object_t * __this /* static, unused */, int32_t ___codeword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.PDF417ScanningDecoder::getCodewordBucketNumber(System.Int32)
extern "C"  int32_t PDF417ScanningDecoder_getCodewordBucketNumber_m3313490994 (Object_t * __this /* static, unused */, int32_t ___codeword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.PDF417ScanningDecoder::getCodewordBucketNumber(System.Int32[])
extern "C"  int32_t PDF417ScanningDecoder_getCodewordBucketNumber_m1694129872 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___moduleBitCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.PDF417.Internal.PDF417ScanningDecoder::ToString(ZXing.PDF417.Internal.BarcodeValue[][])
extern "C"  String_t* PDF417ScanningDecoder_ToString_m2495410830 (Object_t * __this /* static, unused */, BarcodeValueU5BU5DU5BU5D_t1096892912* ___barcodeMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;

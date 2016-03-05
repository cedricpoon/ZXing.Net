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

// ZXing.PDF417.Internal.DetectionResult
struct DetectionResult_t2558765861;
// ZXing.PDF417.Internal.BarcodeMetadata
struct BarcodeMetadata_t1740712946;
// ZXing.PDF417.Internal.BoundingBox
struct BoundingBox_t745095594;
// ZXing.PDF417.Internal.DetectionResultColumn[]
struct DetectionResultColumnU5BU5D_t3745312794;
// ZXing.PDF417.Internal.DetectionResultColumn
struct DetectionResultColumn_t907098395;
// ZXing.PDF417.Internal.Codeword
struct Codeword_t3831973594;
// ZXing.PDF417.Internal.Codeword[]
struct CodewordU5BU5D_t3356725375;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_BarcodeMet1740712946.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_BoundingBox745095594.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_DetectionRe907098395.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_Codeword3831973594.h"

// System.Void ZXing.PDF417.Internal.DetectionResult::.ctor(ZXing.PDF417.Internal.BarcodeMetadata,ZXing.PDF417.Internal.BoundingBox)
extern "C"  void DetectionResult__ctor_m2438564692 (DetectionResult_t2558765861 * __this, BarcodeMetadata_t1740712946 * ___metadata, BoundingBox_t745095594 * ___box, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.BarcodeMetadata ZXing.PDF417.Internal.DetectionResult::get_Metadata()
extern "C"  BarcodeMetadata_t1740712946 * DetectionResult_get_Metadata_m3816757029 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResult::set_Metadata(ZXing.PDF417.Internal.BarcodeMetadata)
extern "C"  void DetectionResult_set_Metadata_m399216934 (DetectionResult_t2558765861 * __this, BarcodeMetadata_t1740712946 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.DetectionResultColumn[] ZXing.PDF417.Internal.DetectionResult::get_DetectionResultColumns()
extern "C"  DetectionResultColumnU5BU5D_t3745312794* DetectionResult_get_DetectionResultColumns_m1066260412 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResult::set_DetectionResultColumns(ZXing.PDF417.Internal.DetectionResultColumn[])
extern "C"  void DetectionResult_set_DetectionResultColumns_m393694895 (DetectionResult_t2558765861 * __this, DetectionResultColumnU5BU5D_t3745312794* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.BoundingBox ZXing.PDF417.Internal.DetectionResult::get_Box()
extern "C"  BoundingBox_t745095594 * DetectionResult_get_Box_m1259503999 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResult::set_Box(ZXing.PDF417.Internal.BoundingBox)
extern "C"  void DetectionResult_set_Box_m1788236630 (DetectionResult_t2558765861 * __this, BoundingBox_t745095594 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResult::get_ColumnCount()
extern "C"  int32_t DetectionResult_get_ColumnCount_m4074497978 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResult::set_ColumnCount(System.Int32)
extern "C"  void DetectionResult_set_ColumnCount_m4172321033 (DetectionResult_t2558765861 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResult::get_RowCount()
extern "C"  int32_t DetectionResult_get_RowCount_m1841268086 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResult::get_ErrorCorrectionLevel()
extern "C"  int32_t DetectionResult_get_ErrorCorrectionLevel_m3499905919 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.DetectionResultColumn[] ZXing.PDF417.Internal.DetectionResult::getDetectionResultColumns()
extern "C"  DetectionResultColumnU5BU5D_t3745312794* DetectionResult_getDetectionResultColumns_m818116923 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResult::adjustIndicatorColumnRowNumbers(ZXing.PDF417.Internal.DetectionResultColumn)
extern "C"  void DetectionResult_adjustIndicatorColumnRowNumbers_m3220731629 (DetectionResult_t2558765861 * __this, DetectionResultColumn_t907098395 * ___detectionResultColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResult::adjustRowNumbers()
extern "C"  int32_t DetectionResult_adjustRowNumbers_m3825626999 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResult::adjustRowNumbersByRow()
extern "C"  int32_t DetectionResult_adjustRowNumbersByRow_m3512015214 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResult::adjustRowNumbersFromBothRI()
extern "C"  void DetectionResult_adjustRowNumbersFromBothRI_m2724747815 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResult::adjustRowNumbersFromRRI()
extern "C"  int32_t DetectionResult_adjustRowNumbersFromRRI_m1125329930 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResult::adjustRowNumbersFromLRI()
extern "C"  int32_t DetectionResult_adjustRowNumbersFromLRI_m1119788804 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResult::adjustRowNumberIfValid(System.Int32,System.Int32,ZXing.PDF417.Internal.Codeword)
extern "C"  int32_t DetectionResult_adjustRowNumberIfValid_m2612662967 (Object_t * __this /* static, unused */, int32_t ___rowIndicatorRowNumber, int32_t ___invalidRowCounts, Codeword_t3831973594 * ___codeword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResult::adjustRowNumbers(System.Int32,System.Int32,ZXing.PDF417.Internal.Codeword[])
extern "C"  void DetectionResult_adjustRowNumbers_m1532959959 (DetectionResult_t2558765861 * __this, int32_t ___barcodeColumn, int32_t ___codewordsRow, CodewordU5BU5D_t3356725375* ___codewords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.DetectionResult::adjustRowNumber(ZXing.PDF417.Internal.Codeword,ZXing.PDF417.Internal.Codeword)
extern "C"  bool DetectionResult_adjustRowNumber_m3790665090 (Object_t * __this /* static, unused */, Codeword_t3831973594 * ___codeword, Codeword_t3831973594 * ___otherCodeword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.PDF417.Internal.DetectionResult::ToString()
extern "C"  String_t* DetectionResult_ToString_m810694223 (DetectionResult_t2558765861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

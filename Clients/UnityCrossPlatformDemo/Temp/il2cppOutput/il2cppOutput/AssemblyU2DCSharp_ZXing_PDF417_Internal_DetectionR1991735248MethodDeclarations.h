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

// ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn
struct DetectionResultRowIndicatorColumn_t1991735248;
// ZXing.PDF417.Internal.BoundingBox
struct BoundingBox_t745095594;
// ZXing.PDF417.Internal.BarcodeMetadata
struct BarcodeMetadata_t1740712946;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.PDF417.Internal.Codeword[]
struct CodewordU5BU5D_t3356725375;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_BoundingBox745095594.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_BarcodeMet1740712946.h"

// System.Void ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn::.ctor(ZXing.PDF417.Internal.BoundingBox,System.Boolean)
extern "C"  void DetectionResultRowIndicatorColumn__ctor_m1233693328 (DetectionResultRowIndicatorColumn_t1991735248 * __this, BoundingBox_t745095594 * ___box, bool ___isLeft, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn::get_IsLeft()
extern "C"  bool DetectionResultRowIndicatorColumn_get_IsLeft_m2510913719 (DetectionResultRowIndicatorColumn_t1991735248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn::set_IsLeft(System.Boolean)
extern "C"  void DetectionResultRowIndicatorColumn_set_IsLeft_m629105302 (DetectionResultRowIndicatorColumn_t1991735248 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn::setRowNumbers()
extern "C"  void DetectionResultRowIndicatorColumn_setRowNumbers_m3413230755 (DetectionResultRowIndicatorColumn_t1991735248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn::adjustCompleteIndicatorColumnRowNumbers(ZXing.PDF417.Internal.BarcodeMetadata)
extern "C"  int32_t DetectionResultRowIndicatorColumn_adjustCompleteIndicatorColumnRowNumbers_m2672941932 (DetectionResultRowIndicatorColumn_t1991735248 * __this, BarcodeMetadata_t1740712946 * ___metadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn::getRowHeights()
extern "C"  Int32U5BU5D_t1809983122* DetectionResultRowIndicatorColumn_getRowHeights_m1371535461 (DetectionResultRowIndicatorColumn_t1991735248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn::adjustIncompleteIndicatorColumnRowNumbers(ZXing.PDF417.Internal.BarcodeMetadata)
extern "C"  int32_t DetectionResultRowIndicatorColumn_adjustIncompleteIndicatorColumnRowNumbers_m1027349329 (DetectionResultRowIndicatorColumn_t1991735248 * __this, BarcodeMetadata_t1740712946 * ___metadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.BarcodeMetadata ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn::getBarcodeMetadata()
extern "C"  BarcodeMetadata_t1740712946 * DetectionResultRowIndicatorColumn_getBarcodeMetadata_m3062750545 (DetectionResultRowIndicatorColumn_t1991735248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn::removeIncorrectCodewords(ZXing.PDF417.Internal.Codeword[],ZXing.PDF417.Internal.BarcodeMetadata)
extern "C"  void DetectionResultRowIndicatorColumn_removeIncorrectCodewords_m1013954288 (DetectionResultRowIndicatorColumn_t1991735248 * __this, CodewordU5BU5D_t3356725375* ___codewords, BarcodeMetadata_t1740712946 * ___metadata, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.PDF417.Internal.DetectionResultRowIndicatorColumn::ToString()
extern "C"  String_t* DetectionResultRowIndicatorColumn_ToString_m2709254778 (DetectionResultRowIndicatorColumn_t1991735248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

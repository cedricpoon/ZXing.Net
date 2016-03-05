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

// ZXing.PDF417.Internal.DetectionResultColumn
struct DetectionResultColumn_t907098395;
// ZXing.PDF417.Internal.BoundingBox
struct BoundingBox_t745095594;
// ZXing.PDF417.Internal.Codeword[]
struct CodewordU5BU5D_t3356725375;
// ZXing.PDF417.Internal.Codeword
struct Codeword_t3831973594;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_BoundingBox745095594.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_Codeword3831973594.h"

// System.Void ZXing.PDF417.Internal.DetectionResultColumn::.ctor(ZXing.PDF417.Internal.BoundingBox)
extern "C"  void DetectionResultColumn__ctor_m2962617688 (DetectionResultColumn_t907098395 * __this, BoundingBox_t745095594 * ___box, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.BoundingBox ZXing.PDF417.Internal.DetectionResultColumn::get_Box()
extern "C"  BoundingBox_t745095594 * DetectionResultColumn_get_Box_m2700242761 (DetectionResultColumn_t907098395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResultColumn::set_Box(ZXing.PDF417.Internal.BoundingBox)
extern "C"  void DetectionResultColumn_set_Box_m492483084 (DetectionResultColumn_t907098395 * __this, BoundingBox_t745095594 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.Codeword[] ZXing.PDF417.Internal.DetectionResultColumn::get_Codewords()
extern "C"  CodewordU5BU5D_t3356725375* DetectionResultColumn_get_Codewords_m1270607464 (DetectionResultColumn_t907098395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResultColumn::set_Codewords(ZXing.PDF417.Internal.Codeword[])
extern "C"  void DetectionResultColumn_set_Codewords_m3580294199 (DetectionResultColumn_t907098395 * __this, CodewordU5BU5D_t3356725375* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResultColumn::IndexForRow(System.Int32)
extern "C"  int32_t DetectionResultColumn_IndexForRow_m2297085224 (DetectionResultColumn_t907098395 * __this, int32_t ___imageRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResultColumn::RowForIndex(System.Int32)
extern "C"  int32_t DetectionResultColumn_RowForIndex_m1561612008 (DetectionResultColumn_t907098395 * __this, int32_t ___codewordIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.Codeword ZXing.PDF417.Internal.DetectionResultColumn::getCodeword(System.Int32)
extern "C"  Codeword_t3831973594 * DetectionResultColumn_getCodeword_m3153574901 (DetectionResultColumn_t907098395 * __this, int32_t ___imageRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.Codeword ZXing.PDF417.Internal.DetectionResultColumn::getCodewordNearby(System.Int32)
extern "C"  Codeword_t3831973594 * DetectionResultColumn_getCodewordNearby_m443099668 (DetectionResultColumn_t907098395 * __this, int32_t ___imageRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.DetectionResultColumn::imageRowToCodewordIndex(System.Int32)
extern "C"  int32_t DetectionResultColumn_imageRowToCodewordIndex_m1458110950 (DetectionResultColumn_t907098395 * __this, int32_t ___imageRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.DetectionResultColumn::setCodeword(System.Int32,ZXing.PDF417.Internal.Codeword)
extern "C"  void DetectionResultColumn_setCodeword_m563410602 (DetectionResultColumn_t907098395 * __this, int32_t ___imageRow, Codeword_t3831973594 * ___codeword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.PDF417.Internal.DetectionResultColumn::ToString()
extern "C"  String_t* DetectionResultColumn_ToString_m3448638277 (DetectionResultColumn_t907098395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

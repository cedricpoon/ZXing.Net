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

// ZXing.PDF417.Internal.BoundingBox
struct BoundingBox_t745095594;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPoint
struct ResultPoint_t887763807;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_ResultPoint887763807.h"
#include "AssemblyU2DCSharp_ZXing_PDF417_Internal_BoundingBox745095594.h"

// System.Void ZXing.PDF417.Internal.BoundingBox::.ctor(ZXing.Common.BitMatrix,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  void BoundingBox__ctor_m1406609776 (BoundingBox_t745095594 * __this, BitMatrix_t3148694213 * ___image, ResultPoint_t887763807 * ___topLeft, ResultPoint_t887763807 * ___bottomLeft, ResultPoint_t887763807 * ___topRight, ResultPoint_t887763807 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::get_TopLeft()
extern "C"  ResultPoint_t887763807 * BoundingBox_get_TopLeft_m3675976980 (BoundingBox_t745095594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.BoundingBox::set_TopLeft(ZXing.ResultPoint)
extern "C"  void BoundingBox_set_TopLeft_m203692499 (BoundingBox_t745095594 * __this, ResultPoint_t887763807 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::get_TopRight()
extern "C"  ResultPoint_t887763807 * BoundingBox_get_TopRight_m3431347153 (BoundingBox_t745095594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.BoundingBox::set_TopRight(ZXing.ResultPoint)
extern "C"  void BoundingBox_set_TopRight_m2687245242 (BoundingBox_t745095594 * __this, ResultPoint_t887763807 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::get_BottomLeft()
extern "C"  ResultPoint_t887763807 * BoundingBox_get_BottomLeft_m934679004 (BoundingBox_t745095594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.BoundingBox::set_BottomLeft(ZXing.ResultPoint)
extern "C"  void BoundingBox_set_BottomLeft_m3355632783 (BoundingBox_t745095594 * __this, ResultPoint_t887763807 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.ResultPoint ZXing.PDF417.Internal.BoundingBox::get_BottomRight()
extern "C"  ResultPoint_t887763807 * BoundingBox_get_BottomRight_m55488521 (BoundingBox_t745095594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.BoundingBox::set_BottomRight(ZXing.ResultPoint)
extern "C"  void BoundingBox_set_BottomRight_m1613146238 (BoundingBox_t745095594 * __this, ResultPoint_t887763807 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.BoundingBox::get_MinX()
extern "C"  int32_t BoundingBox_get_MinX_m1448340396 (BoundingBox_t745095594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.BoundingBox::set_MinX(System.Int32)
extern "C"  void BoundingBox_set_MinX_m1178590399 (BoundingBox_t745095594 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.BoundingBox::get_MaxX()
extern "C"  int32_t BoundingBox_get_MaxX_m1441250138 (BoundingBox_t745095594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.BoundingBox::set_MaxX(System.Int32)
extern "C"  void BoundingBox_set_MaxX_m2426640237 (BoundingBox_t745095594 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.BoundingBox::get_MinY()
extern "C"  int32_t BoundingBox_get_MinY_m1448341357 (BoundingBox_t745095594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.BoundingBox::set_MinY(System.Int32)
extern "C"  void BoundingBox_set_MinY_m2686142208 (BoundingBox_t745095594 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.PDF417.Internal.BoundingBox::get_MaxY()
extern "C"  int32_t BoundingBox_get_MaxY_m1441251099 (BoundingBox_t745095594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.BoundingBox::set_MaxY(System.Int32)
extern "C"  void BoundingBox_set_MaxY_m3934192046 (BoundingBox_t745095594 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.BoundingBox ZXing.PDF417.Internal.BoundingBox::Create(ZXing.Common.BitMatrix,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
extern "C"  BoundingBox_t745095594 * BoundingBox_Create_m1079218141 (Object_t * __this /* static, unused */, BitMatrix_t3148694213 * ___image, ResultPoint_t887763807 * ___topLeft, ResultPoint_t887763807 * ___bottomLeft, ResultPoint_t887763807 * ___topRight, ResultPoint_t887763807 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.BoundingBox ZXing.PDF417.Internal.BoundingBox::Create(ZXing.PDF417.Internal.BoundingBox)
extern "C"  BoundingBox_t745095594 * BoundingBox_Create_m3054078298 (Object_t * __this /* static, unused */, BoundingBox_t745095594 * ___box, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.BoundingBox ZXing.PDF417.Internal.BoundingBox::merge(ZXing.PDF417.Internal.BoundingBox,ZXing.PDF417.Internal.BoundingBox)
extern "C"  BoundingBox_t745095594 * BoundingBox_merge_m173305258 (Object_t * __this /* static, unused */, BoundingBox_t745095594 * ___leftBox, BoundingBox_t745095594 * ___rightBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.PDF417.Internal.BoundingBox ZXing.PDF417.Internal.BoundingBox::addMissingRows(System.Int32,System.Int32,System.Boolean)
extern "C"  BoundingBox_t745095594 * BoundingBox_addMissingRows_m332030751 (BoundingBox_t745095594 * __this, int32_t ___missingStartRows, int32_t ___missingEndRows, bool ___isLeft, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.BoundingBox::calculateMinMaxValues()
extern "C"  void BoundingBox_calculateMinMaxValues_m500511921 (BoundingBox_t745095594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.BoundingBox::SetBottomRight(ZXing.ResultPoint)
extern "C"  void BoundingBox_SetBottomRight_m3635328111 (BoundingBox_t745095594 * __this, ResultPoint_t887763807 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;

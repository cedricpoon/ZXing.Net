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

// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// ZXing.Binarizer
struct Binarizer_t776273154;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Binarizer776273154.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"

// System.Void ZXing.BinaryBitmap::.ctor(ZXing.Binarizer)
extern "C"  void BinaryBitmap__ctor_m2129980421 (BinaryBitmap_t3743800508 * __this, Binarizer_t776273154 * ___binarizer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.BinaryBitmap::.ctor(ZXing.Common.BitMatrix)
extern "C"  void BinaryBitmap__ctor_m2296144972 (BinaryBitmap_t3743800508 * __this, BitMatrix_t3148694213 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.BinaryBitmap::get_Width()
extern "C"  int32_t BinaryBitmap_get_Width_m3943810574 (BinaryBitmap_t3743800508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.BinaryBitmap::get_Height()
extern "C"  int32_t BinaryBitmap_get_Height_m2502857857 (BinaryBitmap_t3743800508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitArray ZXing.BinaryBitmap::getBlackRow(System.Int32,ZXing.Common.BitArray)
extern "C"  BitArray_t2845796643 * BinaryBitmap_getBlackRow_m3243401882 (BinaryBitmap_t3743800508 * __this, int32_t ___y, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.BinaryBitmap::get_BlackMatrix()
extern "C"  BitMatrix_t3148694213 * BinaryBitmap_get_BlackMatrix_m1319068814 (BinaryBitmap_t3743800508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.BinaryBitmap::get_CropSupported()
extern "C"  bool BinaryBitmap_get_CropSupported_m1943745504 (BinaryBitmap_t3743800508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.BinaryBitmap ZXing.BinaryBitmap::crop(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  BinaryBitmap_t3743800508 * BinaryBitmap_crop_m630868880 (BinaryBitmap_t3743800508 * __this, int32_t ___left, int32_t ___top, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.BinaryBitmap::get_RotateSupported()
extern "C"  bool BinaryBitmap_get_RotateSupported_m2196168693 (BinaryBitmap_t3743800508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.BinaryBitmap ZXing.BinaryBitmap::rotateCounterClockwise()
extern "C"  BinaryBitmap_t3743800508 * BinaryBitmap_rotateCounterClockwise_m2756201015 (BinaryBitmap_t3743800508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.BinaryBitmap ZXing.BinaryBitmap::rotateCounterClockwise45()
extern "C"  BinaryBitmap_t3743800508 * BinaryBitmap_rotateCounterClockwise45_m3009691384 (BinaryBitmap_t3743800508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.BinaryBitmap::ToString()
extern "C"  String_t* BinaryBitmap_ToString_m785948434 (BinaryBitmap_t3743800508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

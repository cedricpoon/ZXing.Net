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

// ZXing.InvertedLuminanceSource
struct InvertedLuminanceSource_t751762282;
// ZXing.LuminanceSource
struct LuminanceSource_t1843403551;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_LuminanceSource1843403551.h"

// System.Void ZXing.InvertedLuminanceSource::.ctor(ZXing.LuminanceSource)
extern "C"  void InvertedLuminanceSource__ctor_m175066258 (InvertedLuminanceSource_t751762282 * __this, LuminanceSource_t1843403551 * ___delegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.InvertedLuminanceSource::getRow(System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* InvertedLuminanceSource_getRow_m3700738043 (InvertedLuminanceSource_t751762282 * __this, int32_t ___y, ByteU5BU5D_t58506160* ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.InvertedLuminanceSource::get_Matrix()
extern "C"  ByteU5BU5D_t58506160* InvertedLuminanceSource_get_Matrix_m298798573 (InvertedLuminanceSource_t751762282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.InvertedLuminanceSource::get_CropSupported()
extern "C"  bool InvertedLuminanceSource_get_CropSupported_m1487416062 (InvertedLuminanceSource_t751762282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.InvertedLuminanceSource::crop(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  LuminanceSource_t1843403551 * InvertedLuminanceSource_crop_m3688165779 (InvertedLuminanceSource_t751762282 * __this, int32_t ___left, int32_t ___top, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.InvertedLuminanceSource::get_RotateSupported()
extern "C"  bool InvertedLuminanceSource_get_RotateSupported_m1750239123 (InvertedLuminanceSource_t751762282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.InvertedLuminanceSource::invert()
extern "C"  LuminanceSource_t1843403551 * InvertedLuminanceSource_invert_m391220185 (InvertedLuminanceSource_t751762282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.InvertedLuminanceSource::rotateCounterClockwise()
extern "C"  LuminanceSource_t1843403551 * InvertedLuminanceSource_rotateCounterClockwise_m1625623508 (InvertedLuminanceSource_t751762282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.InvertedLuminanceSource::rotateCounterClockwise45()
extern "C"  LuminanceSource_t1843403551 * InvertedLuminanceSource_rotateCounterClockwise45_m3151433045 (InvertedLuminanceSource_t751762282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

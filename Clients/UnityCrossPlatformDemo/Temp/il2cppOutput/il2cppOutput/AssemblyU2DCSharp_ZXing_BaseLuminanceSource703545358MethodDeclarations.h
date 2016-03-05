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

// ZXing.BaseLuminanceSource
struct BaseLuminanceSource_t703545358;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// ZXing.LuminanceSource
struct LuminanceSource_t1843403551;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.BaseLuminanceSource::.ctor(System.Int32,System.Int32)
extern "C"  void BaseLuminanceSource__ctor_m182587667 (BaseLuminanceSource_t703545358 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.BaseLuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void BaseLuminanceSource__ctor_m222664470 (BaseLuminanceSource_t703545358 * __this, ByteU5BU5D_t58506160* ___luminanceArray, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.BaseLuminanceSource::getRow(System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* BaseLuminanceSource_getRow_m1330568351 (BaseLuminanceSource_t703545358 * __this, int32_t ___y, ByteU5BU5D_t58506160* ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.BaseLuminanceSource::get_Matrix()
extern "C"  ByteU5BU5D_t58506160* BaseLuminanceSource_get_Matrix_m3567941009 (BaseLuminanceSource_t703545358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.BaseLuminanceSource::rotateCounterClockwise()
extern "C"  LuminanceSource_t1843403551 * BaseLuminanceSource_rotateCounterClockwise_m991190392 (BaseLuminanceSource_t703545358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.BaseLuminanceSource::rotateCounterClockwise45()
extern "C"  LuminanceSource_t1843403551 * BaseLuminanceSource_rotateCounterClockwise45_m3346564601 (BaseLuminanceSource_t703545358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.BaseLuminanceSource::get_RotateSupported()
extern "C"  bool BaseLuminanceSource_get_RotateSupported_m2424614255 (BaseLuminanceSource_t703545358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.BaseLuminanceSource::crop(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  LuminanceSource_t1843403551 * BaseLuminanceSource_crop_m2028823663 (BaseLuminanceSource_t703545358 * __this, int32_t ___left, int32_t ___top, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.BaseLuminanceSource::get_CropSupported()
extern "C"  bool BaseLuminanceSource_get_CropSupported_m1470240730 (BaseLuminanceSource_t703545358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.BaseLuminanceSource::get_InversionSupported()
extern "C"  bool BaseLuminanceSource_get_InversionSupported_m3282676385 (BaseLuminanceSource_t703545358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.BaseLuminanceSource::invert()
extern "C"  LuminanceSource_t1843403551 * BaseLuminanceSource_invert_m3959465341 (BaseLuminanceSource_t703545358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.LuminanceSource
struct LuminanceSource_t1843403551;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.LuminanceSource::.ctor(System.Int32,System.Int32)
extern "C"  void LuminanceSource__ctor_m3076251364 (LuminanceSource_t1843403551 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.LuminanceSource::get_Width()
extern "C"  int32_t LuminanceSource_get_Width_m3641199371 (LuminanceSource_t1843403551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.LuminanceSource::set_Width(System.Int32)
extern "C"  void LuminanceSource_set_Width_m1206664538 (LuminanceSource_t1843403551 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.LuminanceSource::get_Height()
extern "C"  int32_t LuminanceSource_get_Height_m1711845156 (LuminanceSource_t1843403551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.LuminanceSource::set_Height(System.Int32)
extern "C"  void LuminanceSource_set_Height_m72747191 (LuminanceSource_t1843403551 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.LuminanceSource::get_CropSupported()
extern "C"  bool LuminanceSource_get_CropSupported_m3583976553 (LuminanceSource_t1843403551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.LuminanceSource::crop(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  LuminanceSource_t1843403551 * LuminanceSource_crop_m2846103742 (LuminanceSource_t1843403551 * __this, int32_t ___left, int32_t ___top, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.LuminanceSource::get_RotateSupported()
extern "C"  bool LuminanceSource_get_RotateSupported_m2205209150 (LuminanceSource_t1843403551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.LuminanceSource::rotateCounterClockwise()
extern "C"  LuminanceSource_t1843403551 * LuminanceSource_rotateCounterClockwise_m1591863113 (LuminanceSource_t1843403551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.LuminanceSource::rotateCounterClockwise45()
extern "C"  LuminanceSource_t1843403551 * LuminanceSource_rotateCounterClockwise45_m772464522 (LuminanceSource_t1843403551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.LuminanceSource::get_InversionSupported()
extern "C"  bool LuminanceSource_get_InversionSupported_m3925417842 (LuminanceSource_t1843403551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.LuminanceSource::invert()
extern "C"  LuminanceSource_t1843403551 * LuminanceSource_invert_m991293774 (LuminanceSource_t1843403551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.LuminanceSource::ToString()
extern "C"  String_t* LuminanceSource_ToString_m2816049067 (LuminanceSource_t1843403551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

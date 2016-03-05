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

// ZXing.Color32LuminanceSource
struct Color32LuminanceSource_t2812574205;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;
// ZXing.LuminanceSource
struct LuminanceSource_t1843403551;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.Color32LuminanceSource::.ctor(System.Int32,System.Int32)
extern "C"  void Color32LuminanceSource__ctor_m2294430054 (Color32LuminanceSource_t2812574205 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Color32LuminanceSource::.ctor(UnityEngine.Color32[],System.Int32,System.Int32)
extern "C"  void Color32LuminanceSource__ctor_m86719781 (Color32LuminanceSource_t2812574205 * __this, Color32U5BU5D_t1677970742* ___color32s, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Color32LuminanceSource::SetPixels(UnityEngine.Color32[])
extern "C"  void Color32LuminanceSource_SetPixels_m2469398936 (Color32LuminanceSource_t2812574205 * __this, Color32U5BU5D_t1677970742* ___color32s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.Color32LuminanceSource::CreateLuminanceSource(System.Byte[],System.Int32,System.Int32)
extern "C"  LuminanceSource_t1843403551 * Color32LuminanceSource_CreateLuminanceSource_m451453822 (Color32LuminanceSource_t2812574205 * __this, ByteU5BU5D_t58506160* ___newLuminances, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;

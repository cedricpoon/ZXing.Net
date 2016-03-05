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

// ZXing.RGBLuminanceSource
struct RGBLuminanceSource_t3948039890;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// ZXing.LuminanceSource
struct LuminanceSource_t1843403551;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_RGBLuminanceSource_BitmapF3738520102.h"

// System.Void ZXing.RGBLuminanceSource::.ctor(System.Int32,System.Int32)
extern "C"  void RGBLuminanceSource__ctor_m1346388475 (RGBLuminanceSource_t3948039890 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void RGBLuminanceSource__ctor_m686297598 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___rgbRawBytes, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void RGBLuminanceSource__ctor_m1942898111 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___luminanceArray, int32_t ___width, int32_t ___height, bool ___is8Bit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat)
extern "C"  void RGBLuminanceSource__ctor_m2331711813 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___rgbRawBytes, int32_t ___width, int32_t ___height, int32_t ___bitmapFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.RGBLuminanceSource::CreateLuminanceSource(System.Byte[],System.Int32,System.Int32)
extern "C"  LuminanceSource_t1843403551 * RGBLuminanceSource_CreateLuminanceSource_m3219340883 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___newLuminances, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.RGBLuminanceSource/BitmapFormat ZXing.RGBLuminanceSource::DetermineBitmapFormat(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t RGBLuminanceSource_DetermineBitmapFormat_m1843652341 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___rgbRawBytes, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminance(System.Byte[],ZXing.RGBLuminanceSource/BitmapFormat)
extern "C"  void RGBLuminanceSource_CalculateLuminance_m3514361573 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___rgbRawBytes, int32_t ___bitmapFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB565(System.Byte[])
extern "C"  void RGBLuminanceSource_CalculateLuminanceRGB565_m979318359 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___rgb565RawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB24(System.Byte[])
extern "C"  void RGBLuminanceSource_CalculateLuminanceRGB24_m3708339043 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___rgbRawBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR24(System.Byte[])
extern "C"  void RGBLuminanceSource_CalculateLuminanceBGR24_m2886303587 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___rgbRawBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB32(System.Byte[])
extern "C"  void RGBLuminanceSource_CalculateLuminanceRGB32_m1787749798 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___rgbRawBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR32(System.Byte[])
extern "C"  void RGBLuminanceSource_CalculateLuminanceBGR32_m965714342 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___rgbRawBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGRA32(System.Byte[])
extern "C"  void RGBLuminanceSource_CalculateLuminanceBGRA32_m3952697387 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___rgbRawBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGBA32(System.Byte[])
extern "C"  void RGBLuminanceSource_CalculateLuminanceRGBA32_m3665992747 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___rgbRawBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceARGB32(System.Byte[])
extern "C"  void RGBLuminanceSource_CalculateLuminanceARGB32_m3241430931 (RGBLuminanceSource_t3948039890 * __this, ByteU5BU5D_t58506160* ___rgbRawBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;

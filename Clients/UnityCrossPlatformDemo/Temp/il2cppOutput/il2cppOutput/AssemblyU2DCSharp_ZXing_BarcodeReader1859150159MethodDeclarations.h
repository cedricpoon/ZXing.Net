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

// ZXing.BarcodeReader
struct BarcodeReader_t1859150159;
// ZXing.Reader
struct Reader_t2214832367;
// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource>
struct Func_4_t248019771;
// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>
struct Func_2_t723793039;
// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>
struct Func_5_t58836280;
// ZXing.LuminanceSource
struct LuminanceSource_t1843403551;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.BarcodeReader::.ctor()
extern "C"  void BarcodeReader__ctor_m4097105618 (BarcodeReader_t1859150159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.BarcodeReader::.ctor(ZXing.Reader,System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource>,System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>)
extern "C"  void BarcodeReader__ctor_m3066222818 (BarcodeReader_t1859150159 * __this, Object_t * ___reader, Func_4_t248019771 * ___createLuminanceSource, Func_2_t723793039 * ___createBinarizer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.BarcodeReader::.ctor(ZXing.Reader,System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource>,System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>,System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>)
extern "C"  void BarcodeReader__ctor_m3141810753 (BarcodeReader_t1859150159 * __this, Object_t * ___reader, Func_4_t248019771 * ___createLuminanceSource, Func_2_t723793039 * ___createBinarizer, Func_5_t58836280 * ___createRGBLuminanceSource, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.BarcodeReader::.cctor()
extern "C"  void BarcodeReader__cctor_m1974126363 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.BarcodeReader::<defaultCreateLuminanceSource>m__4(UnityEngine.Color32[],System.Int32,System.Int32)
extern "C"  LuminanceSource_t1843403551 * BarcodeReader_U3CdefaultCreateLuminanceSourceU3Em__4_m3981002858 (Object_t * __this /* static, unused */, Color32U5BU5D_t1677970742* ___rawColor32, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;

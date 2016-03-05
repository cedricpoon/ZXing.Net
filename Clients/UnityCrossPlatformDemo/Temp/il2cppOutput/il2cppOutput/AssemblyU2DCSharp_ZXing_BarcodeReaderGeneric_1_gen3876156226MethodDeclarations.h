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

// ZXing.BarcodeReaderGeneric`1<System.Object>
struct BarcodeReaderGeneric_1_t3876156226;
// ZXing.Reader
struct Reader_t2214832367;
// System.Func`4<System.Object,System.Int32,System.Int32,ZXing.LuminanceSource>
struct Func_4_t1275807285;
// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>
struct Func_2_t723793039;
// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>
struct Func_5_t58836280;
// System.Action`1<ZXing.ResultPoint>
struct Action_1_t1036216512;
// System.Action`1<ZXing.Result>
struct Action_1_t2363837866;
// ZXing.Common.DecodingOptions
struct DecodingOptions_t3893884042;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<ZXing.BarcodeFormat>
struct IList_1_t3691842845;
// ZXing.Result
struct Result_t2215385161;
// System.Object
struct Object_t;
// ZXing.LuminanceSource
struct LuminanceSource_t1843403551;
// ZXing.Result[]
struct ResultU5BU5D_t1359018100;
// System.Collections.Generic.IEnumerable`1<ZXing.Result>
struct IEnumerable_1_t792572221;
// ZXing.ResultPoint
struct ResultPoint_t887763807;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.EventArgs
struct EventArgs_t516466188;
// ZXing.Binarizer
struct Binarizer_t776273154;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_DecodingOptions3893884042.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_ZXing_LuminanceSource1843403551.h"
#include "AssemblyU2DCSharp_ZXing_Result2215385161.h"
#include "AssemblyU2DCSharp_ZXing_ResultPoint887763807.h"
#include "AssemblyU2DCSharp_ZXing_RGBLuminanceSource_BitmapF3738520102.h"
#include "mscorlib_System_EventArgs516466188.h"

// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::.ctor()
extern "C"  void BarcodeReaderGeneric_1__ctor_m3566926270_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, const MethodInfo* method);
#define BarcodeReaderGeneric_1__ctor_m3566926270(__this, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, const MethodInfo*))BarcodeReaderGeneric_1__ctor_m3566926270_gshared)(__this, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::.ctor(ZXing.Reader,System.Func`4<T,System.Int32,System.Int32,ZXing.LuminanceSource>,System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>)
extern "C"  void BarcodeReaderGeneric_1__ctor_m385709991_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Object_t * ___reader, Func_4_t1275807285 * ___createLuminanceSource, Func_2_t723793039 * ___createBinarizer, const MethodInfo* method);
#define BarcodeReaderGeneric_1__ctor_m385709991(__this, ___reader, ___createLuminanceSource, ___createBinarizer, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Object_t *, Func_4_t1275807285 *, Func_2_t723793039 *, const MethodInfo*))BarcodeReaderGeneric_1__ctor_m385709991_gshared)(__this, ___reader, ___createLuminanceSource, ___createBinarizer, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::.ctor(ZXing.Reader,System.Func`4<T,System.Int32,System.Int32,ZXing.LuminanceSource>,System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>,System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>)
extern "C"  void BarcodeReaderGeneric_1__ctor_m2903068508_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Object_t * ___reader, Func_4_t1275807285 * ___createLuminanceSource, Func_2_t723793039 * ___createBinarizer, Func_5_t58836280 * ___createRGBLuminanceSource, const MethodInfo* method);
#define BarcodeReaderGeneric_1__ctor_m2903068508(__this, ___reader, ___createLuminanceSource, ___createBinarizer, ___createRGBLuminanceSource, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Object_t *, Func_4_t1275807285 *, Func_2_t723793039 *, Func_5_t58836280 *, const MethodInfo*))BarcodeReaderGeneric_1__ctor_m2903068508_gshared)(__this, ___reader, ___createLuminanceSource, ___createBinarizer, ___createRGBLuminanceSource, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::.cctor()
extern "C"  void BarcodeReaderGeneric_1__cctor_m2718435759_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define BarcodeReaderGeneric_1__cctor_m2718435759(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))BarcodeReaderGeneric_1__cctor_m2718435759_gshared)(__this /* static, unused */, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::add_ResultPointFound(System.Action`1<ZXing.ResultPoint>)
extern "C"  void BarcodeReaderGeneric_1_add_ResultPointFound_m3017558504_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Action_1_t1036216512 * ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_add_ResultPointFound_m3017558504(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Action_1_t1036216512 *, const MethodInfo*))BarcodeReaderGeneric_1_add_ResultPointFound_m3017558504_gshared)(__this, ___value, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::remove_ResultPointFound(System.Action`1<ZXing.ResultPoint>)
extern "C"  void BarcodeReaderGeneric_1_remove_ResultPointFound_m612007163_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Action_1_t1036216512 * ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_remove_ResultPointFound_m612007163(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Action_1_t1036216512 *, const MethodInfo*))BarcodeReaderGeneric_1_remove_ResultPointFound_m612007163_gshared)(__this, ___value, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::add_explicitResultPointFound(System.Action`1<ZXing.ResultPoint>)
extern "C"  void BarcodeReaderGeneric_1_add_explicitResultPointFound_m2091305756_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Action_1_t1036216512 * ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_add_explicitResultPointFound_m2091305756(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Action_1_t1036216512 *, const MethodInfo*))BarcodeReaderGeneric_1_add_explicitResultPointFound_m2091305756_gshared)(__this, ___value, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::remove_explicitResultPointFound(System.Action`1<ZXing.ResultPoint>)
extern "C"  void BarcodeReaderGeneric_1_remove_explicitResultPointFound_m309738287_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Action_1_t1036216512 * ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_remove_explicitResultPointFound_m309738287(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Action_1_t1036216512 *, const MethodInfo*))BarcodeReaderGeneric_1_remove_explicitResultPointFound_m309738287_gshared)(__this, ___value, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::add_ResultFound(System.Action`1<ZXing.Result>)
extern "C"  void BarcodeReaderGeneric_1_add_ResultFound_m534221006_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Action_1_t2363837866 * ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_add_ResultFound_m534221006(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Action_1_t2363837866 *, const MethodInfo*))BarcodeReaderGeneric_1_add_ResultFound_m534221006_gshared)(__this, ___value, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::remove_ResultFound(System.Action`1<ZXing.Result>)
extern "C"  void BarcodeReaderGeneric_1_remove_ResultFound_m2303979425_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Action_1_t2363837866 * ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_remove_ResultFound_m2303979425(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Action_1_t2363837866 *, const MethodInfo*))BarcodeReaderGeneric_1_remove_ResultFound_m2303979425_gshared)(__this, ___value, method)
// ZXing.Common.DecodingOptions ZXing.BarcodeReaderGeneric`1<System.Object>::get_Options()
extern "C"  DecodingOptions_t3893884042 * BarcodeReaderGeneric_1_get_Options_m3098010004_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, const MethodInfo* method);
#define BarcodeReaderGeneric_1_get_Options_m3098010004(__this, method) ((  DecodingOptions_t3893884042 * (*) (BarcodeReaderGeneric_1_t3876156226 *, const MethodInfo*))BarcodeReaderGeneric_1_get_Options_m3098010004_gshared)(__this, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::set_Options(ZXing.Common.DecodingOptions)
extern "C"  void BarcodeReaderGeneric_1_set_Options_m1687808803_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, DecodingOptions_t3893884042 * ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_set_Options_m1687808803(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, DecodingOptions_t3893884042 *, const MethodInfo*))BarcodeReaderGeneric_1_set_Options_m1687808803_gshared)(__this, ___value, method)
// ZXing.Reader ZXing.BarcodeReaderGeneric`1<System.Object>::get_Reader()
extern "C"  Object_t * BarcodeReaderGeneric_1_get_Reader_m1426843426_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, const MethodInfo* method);
#define BarcodeReaderGeneric_1_get_Reader_m1426843426(__this, method) ((  Object_t * (*) (BarcodeReaderGeneric_1_t3876156226 *, const MethodInfo*))BarcodeReaderGeneric_1_get_Reader_m1426843426_gshared)(__this, method)
// System.Boolean ZXing.BarcodeReaderGeneric`1<System.Object>::get_TryHarder()
extern "C"  bool BarcodeReaderGeneric_1_get_TryHarder_m2224082138_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, const MethodInfo* method);
#define BarcodeReaderGeneric_1_get_TryHarder_m2224082138(__this, method) ((  bool (*) (BarcodeReaderGeneric_1_t3876156226 *, const MethodInfo*))BarcodeReaderGeneric_1_get_TryHarder_m2224082138_gshared)(__this, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::set_TryHarder(System.Boolean)
extern "C"  void BarcodeReaderGeneric_1_set_TryHarder_m4220728617_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, bool ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_set_TryHarder_m4220728617(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, bool, const MethodInfo*))BarcodeReaderGeneric_1_set_TryHarder_m4220728617_gshared)(__this, ___value, method)
// System.Boolean ZXing.BarcodeReaderGeneric`1<System.Object>::get_PureBarcode()
extern "C"  bool BarcodeReaderGeneric_1_get_PureBarcode_m2710358031_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, const MethodInfo* method);
#define BarcodeReaderGeneric_1_get_PureBarcode_m2710358031(__this, method) ((  bool (*) (BarcodeReaderGeneric_1_t3876156226 *, const MethodInfo*))BarcodeReaderGeneric_1_get_PureBarcode_m2710358031_gshared)(__this, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::set_PureBarcode(System.Boolean)
extern "C"  void BarcodeReaderGeneric_1_set_PureBarcode_m2612803998_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, bool ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_set_PureBarcode_m2612803998(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, bool, const MethodInfo*))BarcodeReaderGeneric_1_set_PureBarcode_m2612803998_gshared)(__this, ___value, method)
// System.String ZXing.BarcodeReaderGeneric`1<System.Object>::get_CharacterSet()
extern "C"  String_t* BarcodeReaderGeneric_1_get_CharacterSet_m3737041925_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, const MethodInfo* method);
#define BarcodeReaderGeneric_1_get_CharacterSet_m3737041925(__this, method) ((  String_t* (*) (BarcodeReaderGeneric_1_t3876156226 *, const MethodInfo*))BarcodeReaderGeneric_1_get_CharacterSet_m3737041925_gshared)(__this, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::set_CharacterSet(System.String)
extern "C"  void BarcodeReaderGeneric_1_set_CharacterSet_m2318971014_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, String_t* ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_set_CharacterSet_m2318971014(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, String_t*, const MethodInfo*))BarcodeReaderGeneric_1_set_CharacterSet_m2318971014_gshared)(__this, ___value, method)
// System.Collections.Generic.IList`1<ZXing.BarcodeFormat> ZXing.BarcodeReaderGeneric`1<System.Object>::get_PossibleFormats()
extern "C"  Object_t* BarcodeReaderGeneric_1_get_PossibleFormats_m77712557_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, const MethodInfo* method);
#define BarcodeReaderGeneric_1_get_PossibleFormats_m77712557(__this, method) ((  Object_t* (*) (BarcodeReaderGeneric_1_t3876156226 *, const MethodInfo*))BarcodeReaderGeneric_1_get_PossibleFormats_m77712557_gshared)(__this, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::set_PossibleFormats(System.Collections.Generic.IList`1<ZXing.BarcodeFormat>)
extern "C"  void BarcodeReaderGeneric_1_set_PossibleFormats_m4074190020_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Object_t* ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_set_PossibleFormats_m4074190020(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Object_t*, const MethodInfo*))BarcodeReaderGeneric_1_set_PossibleFormats_m4074190020_gshared)(__this, ___value, method)
// System.Boolean ZXing.BarcodeReaderGeneric`1<System.Object>::get_AutoRotate()
extern "C"  bool BarcodeReaderGeneric_1_get_AutoRotate_m1899494149_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, const MethodInfo* method);
#define BarcodeReaderGeneric_1_get_AutoRotate_m1899494149(__this, method) ((  bool (*) (BarcodeReaderGeneric_1_t3876156226 *, const MethodInfo*))BarcodeReaderGeneric_1_get_AutoRotate_m1899494149_gshared)(__this, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::set_AutoRotate(System.Boolean)
extern "C"  void BarcodeReaderGeneric_1_set_AutoRotate_m2042844772_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, bool ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_set_AutoRotate_m2042844772(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, bool, const MethodInfo*))BarcodeReaderGeneric_1_set_AutoRotate_m2042844772_gshared)(__this, ___value, method)
// System.Boolean ZXing.BarcodeReaderGeneric`1<System.Object>::get_TryInverted()
extern "C"  bool BarcodeReaderGeneric_1_get_TryInverted_m170315127_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, const MethodInfo* method);
#define BarcodeReaderGeneric_1_get_TryInverted_m170315127(__this, method) ((  bool (*) (BarcodeReaderGeneric_1_t3876156226 *, const MethodInfo*))BarcodeReaderGeneric_1_get_TryInverted_m170315127_gshared)(__this, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::set_TryInverted(System.Boolean)
extern "C"  void BarcodeReaderGeneric_1_set_TryInverted_m3104614662_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, bool ___value, const MethodInfo* method);
#define BarcodeReaderGeneric_1_set_TryInverted_m3104614662(__this, ___value, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, bool, const MethodInfo*))BarcodeReaderGeneric_1_set_TryInverted_m3104614662_gshared)(__this, ___value, method)
// System.Func`4<T,System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1<System.Object>::get_CreateLuminanceSource()
extern "C"  Func_4_t1275807285 * BarcodeReaderGeneric_1_get_CreateLuminanceSource_m327264213_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, const MethodInfo* method);
#define BarcodeReaderGeneric_1_get_CreateLuminanceSource_m327264213(__this, method) ((  Func_4_t1275807285 * (*) (BarcodeReaderGeneric_1_t3876156226 *, const MethodInfo*))BarcodeReaderGeneric_1_get_CreateLuminanceSource_m327264213_gshared)(__this, method)
// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric`1<System.Object>::get_CreateBinarizer()
extern "C"  Func_2_t723793039 * BarcodeReaderGeneric_1_get_CreateBinarizer_m3861735534_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, const MethodInfo* method);
#define BarcodeReaderGeneric_1_get_CreateBinarizer_m3861735534(__this, method) ((  Func_2_t723793039 * (*) (BarcodeReaderGeneric_1_t3876156226 *, const MethodInfo*))BarcodeReaderGeneric_1_get_CreateBinarizer_m3861735534_gshared)(__this, method)
// ZXing.Result ZXing.BarcodeReaderGeneric`1<System.Object>::Decode(T,System.Int32,System.Int32)
extern "C"  Result_t2215385161 * BarcodeReaderGeneric_1_Decode_m2789274976_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Object_t * ___rawRGB, int32_t ___width, int32_t ___height, const MethodInfo* method);
#define BarcodeReaderGeneric_1_Decode_m2789274976(__this, ___rawRGB, ___width, ___height, method) ((  Result_t2215385161 * (*) (BarcodeReaderGeneric_1_t3876156226 *, Object_t *, int32_t, int32_t, const MethodInfo*))BarcodeReaderGeneric_1_Decode_m2789274976_gshared)(__this, ___rawRGB, ___width, ___height, method)
// ZXing.Result ZXing.BarcodeReaderGeneric`1<System.Object>::Decode(ZXing.LuminanceSource)
extern "C"  Result_t2215385161 * BarcodeReaderGeneric_1_Decode_m641567339_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, LuminanceSource_t1843403551 * ___luminanceSource, const MethodInfo* method);
#define BarcodeReaderGeneric_1_Decode_m641567339(__this, ___luminanceSource, method) ((  Result_t2215385161 * (*) (BarcodeReaderGeneric_1_t3876156226 *, LuminanceSource_t1843403551 *, const MethodInfo*))BarcodeReaderGeneric_1_Decode_m641567339_gshared)(__this, ___luminanceSource, method)
// ZXing.Result[] ZXing.BarcodeReaderGeneric`1<System.Object>::DecodeMultiple(T,System.Int32,System.Int32)
extern "C"  ResultU5BU5D_t1359018100* BarcodeReaderGeneric_1_DecodeMultiple_m272039310_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Object_t * ___rawRGB, int32_t ___width, int32_t ___height, const MethodInfo* method);
#define BarcodeReaderGeneric_1_DecodeMultiple_m272039310(__this, ___rawRGB, ___width, ___height, method) ((  ResultU5BU5D_t1359018100* (*) (BarcodeReaderGeneric_1_t3876156226 *, Object_t *, int32_t, int32_t, const MethodInfo*))BarcodeReaderGeneric_1_DecodeMultiple_m272039310_gshared)(__this, ___rawRGB, ___width, ___height, method)
// ZXing.Result[] ZXing.BarcodeReaderGeneric`1<System.Object>::DecodeMultiple(ZXing.LuminanceSource)
extern "C"  ResultU5BU5D_t1359018100* BarcodeReaderGeneric_1_DecodeMultiple_m2729495833_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, LuminanceSource_t1843403551 * ___luminanceSource, const MethodInfo* method);
#define BarcodeReaderGeneric_1_DecodeMultiple_m2729495833(__this, ___luminanceSource, method) ((  ResultU5BU5D_t1359018100* (*) (BarcodeReaderGeneric_1_t3876156226 *, LuminanceSource_t1843403551 *, const MethodInfo*))BarcodeReaderGeneric_1_DecodeMultiple_m2729495833_gshared)(__this, ___luminanceSource, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::OnResultsFound(System.Collections.Generic.IEnumerable`1<ZXing.Result>)
extern "C"  void BarcodeReaderGeneric_1_OnResultsFound_m34779811_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Object_t* ___results, const MethodInfo* method);
#define BarcodeReaderGeneric_1_OnResultsFound_m34779811(__this, ___results, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Object_t*, const MethodInfo*))BarcodeReaderGeneric_1_OnResultsFound_m34779811_gshared)(__this, ___results, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::OnResultFound(ZXing.Result)
extern "C"  void BarcodeReaderGeneric_1_OnResultFound_m3701926459_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Result_t2215385161 * ___result, const MethodInfo* method);
#define BarcodeReaderGeneric_1_OnResultFound_m3701926459(__this, ___result, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Result_t2215385161 *, const MethodInfo*))BarcodeReaderGeneric_1_OnResultFound_m3701926459_gshared)(__this, ___result, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::OnResultPointFound(ZXing.ResultPoint)
extern "C"  void BarcodeReaderGeneric_1_OnResultPointFound_m3511863605_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, ResultPoint_t887763807 * ___resultPoint, const MethodInfo* method);
#define BarcodeReaderGeneric_1_OnResultPointFound_m3511863605(__this, ___resultPoint, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, ResultPoint_t887763807 *, const MethodInfo*))BarcodeReaderGeneric_1_OnResultPointFound_m3511863605_gshared)(__this, ___resultPoint, method)
// ZXing.Result ZXing.BarcodeReaderGeneric`1<System.Object>::Decode(System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat)
extern "C"  Result_t2215385161 * BarcodeReaderGeneric_1_Decode_m495755922_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, ByteU5BU5D_t58506160* ___rawRGB, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method);
#define BarcodeReaderGeneric_1_Decode_m495755922(__this, ___rawRGB, ___width, ___height, ___format, method) ((  Result_t2215385161 * (*) (BarcodeReaderGeneric_1_t3876156226 *, ByteU5BU5D_t58506160*, int32_t, int32_t, int32_t, const MethodInfo*))BarcodeReaderGeneric_1_Decode_m495755922_gshared)(__this, ___rawRGB, ___width, ___height, ___format, method)
// ZXing.Result[] ZXing.BarcodeReaderGeneric`1<System.Object>::DecodeMultiple(System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat)
extern "C"  ResultU5BU5D_t1359018100* BarcodeReaderGeneric_1_DecodeMultiple_m1508901696_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, ByteU5BU5D_t58506160* ___rawRGB, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method);
#define BarcodeReaderGeneric_1_DecodeMultiple_m1508901696(__this, ___rawRGB, ___width, ___height, ___format, method) ((  ResultU5BU5D_t1359018100* (*) (BarcodeReaderGeneric_1_t3876156226 *, ByteU5BU5D_t58506160*, int32_t, int32_t, int32_t, const MethodInfo*))BarcodeReaderGeneric_1_DecodeMultiple_m1508901696_gshared)(__this, ___rawRGB, ___width, ___height, ___format, method)
// System.Void ZXing.BarcodeReaderGeneric`1<System.Object>::<BarcodeReaderGeneric>m__1(System.Object,System.EventArgs)
extern "C"  void BarcodeReaderGeneric_1_U3CBarcodeReaderGenericU3Em__1_m2279804658_gshared (BarcodeReaderGeneric_1_t3876156226 * __this, Object_t * ___o, EventArgs_t516466188 * ___args, const MethodInfo* method);
#define BarcodeReaderGeneric_1_U3CBarcodeReaderGenericU3Em__1_m2279804658(__this, ___o, ___args, method) ((  void (*) (BarcodeReaderGeneric_1_t3876156226 *, Object_t *, EventArgs_t516466188 *, const MethodInfo*))BarcodeReaderGeneric_1_U3CBarcodeReaderGenericU3Em__1_m2279804658_gshared)(__this, ___o, ___args, method)
// ZXing.Binarizer ZXing.BarcodeReaderGeneric`1<System.Object>::<defaultCreateBinarizer>m__2(ZXing.LuminanceSource)
extern "C"  Binarizer_t776273154 * BarcodeReaderGeneric_1_U3CdefaultCreateBinarizerU3Em__2_m3001849692_gshared (Object_t * __this /* static, unused */, LuminanceSource_t1843403551 * ___luminanceSource, const MethodInfo* method);
#define BarcodeReaderGeneric_1_U3CdefaultCreateBinarizerU3Em__2_m3001849692(__this /* static, unused */, ___luminanceSource, method) ((  Binarizer_t776273154 * (*) (Object_t * /* static, unused */, LuminanceSource_t1843403551 *, const MethodInfo*))BarcodeReaderGeneric_1_U3CdefaultCreateBinarizerU3Em__2_m3001849692_gshared)(__this /* static, unused */, ___luminanceSource, method)
// ZXing.LuminanceSource ZXing.BarcodeReaderGeneric`1<System.Object>::<defaultCreateRGBLuminanceSource>m__3(System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat)
extern "C"  LuminanceSource_t1843403551 * BarcodeReaderGeneric_1_U3CdefaultCreateRGBLuminanceSourceU3Em__3_m2441739565_gshared (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___rawBytes, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method);
#define BarcodeReaderGeneric_1_U3CdefaultCreateRGBLuminanceSourceU3Em__3_m2441739565(__this /* static, unused */, ___rawBytes, ___width, ___height, ___format, method) ((  LuminanceSource_t1843403551 * (*) (Object_t * /* static, unused */, ByteU5BU5D_t58506160*, int32_t, int32_t, int32_t, const MethodInfo*))BarcodeReaderGeneric_1_U3CdefaultCreateRGBLuminanceSourceU3Em__3_m2441739565_gshared)(__this /* static, unused */, ___rawBytes, ___width, ___height, ___format, method)

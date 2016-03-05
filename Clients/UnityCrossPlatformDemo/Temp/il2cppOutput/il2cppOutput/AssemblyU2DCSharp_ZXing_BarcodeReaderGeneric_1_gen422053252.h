#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>
struct Func_2_t723793039;
// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>
struct Func_5_t58836280;
// ZXing.Reader
struct Reader_t2214832367;
// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource>
struct Func_4_t248019771;
// ZXing.Common.DecodingOptions
struct DecodingOptions_t3893884042;
// System.Action`1<ZXing.ResultPoint>
struct Action_1_t1036216512;
// System.Action`1<ZXing.Result>
struct Action_1_t2363837866;

#include "mscorlib_System_Object837106420.h"

// ZXing.BarcodeReaderGeneric`1<UnityEngine.Color32[]>
struct  BarcodeReaderGeneric_1_t422053252  : public Object_t
{
	// ZXing.Reader ZXing.BarcodeReaderGeneric`1::reader
	Object_t * ___reader_2;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1::createRGBLuminanceSource
	Func_5_t58836280 * ___createRGBLuminanceSource_3;
	// System.Func`4<T,System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1::createLuminanceSource
	Func_4_t248019771 * ___createLuminanceSource_4;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric`1::createBinarizer
	Func_2_t723793039 * ___createBinarizer_5;
	// System.Boolean ZXing.BarcodeReaderGeneric`1::usePreviousState
	bool ___usePreviousState_6;
	// ZXing.Common.DecodingOptions ZXing.BarcodeReaderGeneric`1::options
	DecodingOptions_t3893884042 * ___options_7;
	// System.Action`1<ZXing.ResultPoint> ZXing.BarcodeReaderGeneric`1::explicitResultPointFound
	Action_1_t1036216512 * ___explicitResultPointFound_8;
	// System.Action`1<ZXing.Result> ZXing.BarcodeReaderGeneric`1::ResultFound
	Action_1_t2363837866 * ___ResultFound_9;
	// System.Boolean ZXing.BarcodeReaderGeneric`1::<AutoRotate>k__BackingField
	bool ___U3CAutoRotateU3Ek__BackingField_10;
	// System.Boolean ZXing.BarcodeReaderGeneric`1::<TryInverted>k__BackingField
	bool ___U3CTryInvertedU3Ek__BackingField_11;
};
struct BarcodeReaderGeneric_1_t422053252_StaticFields{
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric`1::defaultCreateBinarizer
	Func_2_t723793039 * ___defaultCreateBinarizer_0;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1::defaultCreateRGBLuminanceSource
	Func_5_t58836280 * ___defaultCreateRGBLuminanceSource_1;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric`1::<>f__am$cacheC
	Func_2_t723793039 * ___U3CU3Ef__amU24cacheC_12;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1::<>f__am$cacheD
	Func_5_t58836280 * ___U3CU3Ef__amU24cacheD_13;
};

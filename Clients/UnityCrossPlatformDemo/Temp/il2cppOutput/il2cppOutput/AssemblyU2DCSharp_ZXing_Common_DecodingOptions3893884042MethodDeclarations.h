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

// ZXing.Common.DecodingOptions
struct DecodingOptions_t3893884042;
// System.Action`2<System.Object,System.EventArgs>
struct Action_2_t3784819686;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<ZXing.BarcodeFormat>
struct IList_1_t3691842845;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t516466188;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_EventArgs516466188.h"

// System.Void ZXing.Common.DecodingOptions::.ctor()
extern "C"  void DecodingOptions__ctor_m1645560737 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::add_ValueChanged(System.Action`2<System.Object,System.EventArgs>)
extern "C"  void DecodingOptions_add_ValueChanged_m2419893547 (DecodingOptions_t3893884042 * __this, Action_2_t3784819686 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::remove_ValueChanged(System.Action`2<System.Object,System.EventArgs>)
extern "C"  void DecodingOptions_remove_ValueChanged_m817950802 (DecodingOptions_t3893884042 * __this, Action_2_t3784819686 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object> ZXing.Common.DecodingOptions::get_Hints()
extern "C"  Object_t* DecodingOptions_get_Hints_m2997480606 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_Hints(System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  void DecodingOptions_set_Hints_m3159353973 (DecodingOptions_t3893884042 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.DecodingOptions::get_TryHarder()
extern "C"  bool DecodingOptions_get_TryHarder_m1206591701 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_TryHarder(System.Boolean)
extern "C"  void DecodingOptions_set_TryHarder_m3225133772 (DecodingOptions_t3893884042 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.DecodingOptions::get_PureBarcode()
extern "C"  bool DecodingOptions_get_PureBarcode_m4154591562 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_PureBarcode(System.Boolean)
extern "C"  void DecodingOptions_set_PureBarcode_m3623864961 (DecodingOptions_t3893884042 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Common.DecodingOptions::get_CharacterSet()
extern "C"  String_t* DecodingOptions_get_CharacterSet_m228438248 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_CharacterSet(System.String)
extern "C"  void DecodingOptions_set_CharacterSet_m3330031977 (DecodingOptions_t3893884042 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<ZXing.BarcodeFormat> ZXing.Common.DecodingOptions::get_PossibleFormats()
extern "C"  Object_t* DecodingOptions_get_PossibleFormats_m3463545234 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_PossibleFormats(System.Collections.Generic.IList`1<ZXing.BarcodeFormat>)
extern "C"  void DecodingOptions_set_PossibleFormats_m4229970113 (DecodingOptions_t3893884042 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.DecodingOptions::get_UseCode39ExtendedMode()
extern "C"  bool DecodingOptions_get_UseCode39ExtendedMode_m512476984 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_UseCode39ExtendedMode(System.Boolean)
extern "C"  void DecodingOptions_set_UseCode39ExtendedMode_m3975020527 (DecodingOptions_t3893884042 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.DecodingOptions::get_UseCode39RelaxedExtendedMode()
extern "C"  bool DecodingOptions_get_UseCode39RelaxedExtendedMode_m943772273 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_UseCode39RelaxedExtendedMode(System.Boolean)
extern "C"  void DecodingOptions_set_UseCode39RelaxedExtendedMode_m1646330088 (DecodingOptions_t3893884042 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.DecodingOptions::get_ReturnCodabarStartEnd()
extern "C"  bool DecodingOptions_get_ReturnCodabarStartEnd_m1840243797 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_ReturnCodabarStartEnd(System.Boolean)
extern "C"  void DecodingOptions_set_ReturnCodabarStartEnd_m4126565964 (DecodingOptions_t3893884042 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.DecodingOptions::get_AssumeGS1()
extern "C"  bool DecodingOptions_get_AssumeGS1_m1529844091 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_AssumeGS1(System.Boolean)
extern "C"  void DecodingOptions_set_AssumeGS1_m256047346 (DecodingOptions_t3893884042 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.DecodingOptions::get_AssumeMSICheckDigit()
extern "C"  bool DecodingOptions_get_AssumeMSICheckDigit_m1405192830 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_AssumeMSICheckDigit(System.Boolean)
extern "C"  void DecodingOptions_set_AssumeMSICheckDigit_m1664213173 (DecodingOptions_t3893884042 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.Common.DecodingOptions::get_AllowedLengths()
extern "C"  Int32U5BU5D_t1809983122* DecodingOptions_get_AllowedLengths_m923586685 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_AllowedLengths(System.Int32[])
extern "C"  void DecodingOptions_set_AllowedLengths_m3214346740 (DecodingOptions_t3893884042 * __this, Int32U5BU5D_t1809983122* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.Common.DecodingOptions::get_AllowedEANExtensions()
extern "C"  Int32U5BU5D_t1809983122* DecodingOptions_get_AllowedEANExtensions_m2874466742 (DecodingOptions_t3893884042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::set_AllowedEANExtensions(System.Int32[])
extern "C"  void DecodingOptions_set_AllowedEANExtensions_m1251532141 (DecodingOptions_t3893884042 * __this, Int32U5BU5D_t1809983122* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.DecodingOptions::<DecodingOptions>m__5(System.Object,System.EventArgs)
extern "C"  void DecodingOptions_U3CDecodingOptionsU3Em__5_m4234958024 (DecodingOptions_t3893884042 * __this, Object_t * ___o, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;

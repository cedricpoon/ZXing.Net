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

// ZXing.MultiFormatReader
struct MultiFormatReader_t3687638879;
// ZXing.Result
struct Result_t2215385161;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"

// System.Void ZXing.MultiFormatReader::.ctor()
extern "C"  void MultiFormatReader__ctor_m3480928706 (MultiFormatReader_t3687638879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.MultiFormatReader::decode(ZXing.BinaryBitmap)
extern "C"  Result_t2215385161 * MultiFormatReader_decode_m542284032 (MultiFormatReader_t3687638879 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.MultiFormatReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * MultiFormatReader_decode_m254038861 (MultiFormatReader_t3687638879 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.MultiFormatReader::decodeWithState(ZXing.BinaryBitmap)
extern "C"  Result_t2215385161 * MultiFormatReader_decodeWithState_m4098267769 (MultiFormatReader_t3687638879 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.MultiFormatReader::set_Hints(System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  void MultiFormatReader_set_Hints_m3215818390 (MultiFormatReader_t3687638879 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.MultiFormatReader::reset()
extern "C"  void MultiFormatReader_reset_m3757675663 (MultiFormatReader_t3687638879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.MultiFormatReader::decodeInternal(ZXing.BinaryBitmap)
extern "C"  Result_t2215385161 * MultiFormatReader_decodeInternal_m4159138397 (MultiFormatReader_t3687638879 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.Aztec.AztecReader
struct AztecReader_t880595345;
// ZXing.Result
struct Result_t2215385161;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"

// System.Void ZXing.Aztec.AztecReader::.ctor()
extern "C"  void AztecReader__ctor_m4128958894 (AztecReader_t880595345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.Aztec.AztecReader::decode(ZXing.BinaryBitmap)
extern "C"  Result_t2215385161 * AztecReader_decode_m1720496532 (AztecReader_t880595345 * __this, BinaryBitmap_t3743800508 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.Aztec.AztecReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * AztecReader_decode_m2610195257 (AztecReader_t880595345 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Aztec.AztecReader::reset()
extern "C"  void AztecReader_reset_m110738555 (AztecReader_t880595345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

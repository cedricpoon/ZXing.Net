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

// ZXing.OneD.RSS.Expanded.Decoders.AI013x0x1xDecoder
struct AI013x0x1xDecoder_t2415261149;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI013x0x1xDecoder::.ctor(ZXing.Common.BitArray,System.String,System.String)
extern "C"  void AI013x0x1xDecoder__ctor_m2452723045 (AI013x0x1xDecoder_t2415261149 * __this, BitArray_t2845796643 * ___information, String_t* ___firstAIdigits, String_t* ___dateCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI013x0x1xDecoder::.cctor()
extern "C"  void AI013x0x1xDecoder__cctor_m1984510381 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.RSS.Expanded.Decoders.AI013x0x1xDecoder::parseInformation()
extern "C"  String_t* AI013x0x1xDecoder_parseInformation_m1550809280 (AI013x0x1xDecoder_t2415261149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI013x0x1xDecoder::encodeCompressedDate(System.Text.StringBuilder,System.Int32)
extern "C"  void AI013x0x1xDecoder_encodeCompressedDate_m3369498838 (AI013x0x1xDecoder_t2415261149 * __this, StringBuilder_t3822575854 * ___buf, int32_t ___currentPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI013x0x1xDecoder::addWeightCode(System.Text.StringBuilder,System.Int32)
extern "C"  void AI013x0x1xDecoder_addWeightCode_m2746393329 (AI013x0x1xDecoder_t2415261149 * __this, StringBuilder_t3822575854 * ___buf, int32_t ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.RSS.Expanded.Decoders.AI013x0x1xDecoder::checkWeight(System.Int32)
extern "C"  int32_t AI013x0x1xDecoder_checkWeight_m250220577 (AI013x0x1xDecoder_t2415261149 * __this, int32_t ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;

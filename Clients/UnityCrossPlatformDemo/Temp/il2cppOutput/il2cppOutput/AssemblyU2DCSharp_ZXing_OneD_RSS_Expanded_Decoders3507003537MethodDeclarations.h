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

// ZXing.OneD.RSS.Expanded.Decoders.AI01decoder
struct AI01decoder_t3507003537;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI01decoder::.ctor(ZXing.Common.BitArray)
extern "C"  void AI01decoder__ctor_m2472505377 (AI01decoder_t3507003537 * __this, BitArray_t2845796643 * ___information, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI01decoder::.cctor()
extern "C"  void AI01decoder__cctor_m359168097 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI01decoder::encodeCompressedGtin(System.Text.StringBuilder,System.Int32)
extern "C"  void AI01decoder_encodeCompressedGtin_m3617600686 (AI01decoder_t3507003537 * __this, StringBuilder_t3822575854 * ___buf, int32_t ___currentPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI01decoder::encodeCompressedGtinWithoutAI(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  void AI01decoder_encodeCompressedGtinWithoutAI_m3055463577 (AI01decoder_t3507003537 * __this, StringBuilder_t3822575854 * ___buf, int32_t ___currentPos, int32_t ___initialBufferPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI01decoder::appendCheckDigit(System.Text.StringBuilder,System.Int32)
extern "C"  void AI01decoder_appendCheckDigit_m196326468 (Object_t * __this /* static, unused */, StringBuilder_t3822575854 * ___buf, int32_t ___currentPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.OneD.RSS.Expanded.Decoders.AI01weightDecoder
struct AI01weightDecoder_t2177817017;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI01weightDecoder::.ctor(ZXing.Common.BitArray)
extern "C"  void AI01weightDecoder__ctor_m1546931785 (AI01weightDecoder_t2177817017 * __this, BitArray_t2845796643 * ___information, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI01weightDecoder::encodeCompressedWeight(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  void AI01weightDecoder_encodeCompressedWeight_m2648514395 (AI01weightDecoder_t2177817017 * __this, StringBuilder_t3822575854 * ___buf, int32_t ___currentPos, int32_t ___weightSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;

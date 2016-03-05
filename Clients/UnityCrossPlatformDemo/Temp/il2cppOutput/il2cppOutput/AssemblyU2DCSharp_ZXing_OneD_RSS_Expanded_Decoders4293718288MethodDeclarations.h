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

// ZXing.OneD.RSS.Expanded.Decoders.AI013103decoder
struct AI013103decoder_t4293718288;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI013103decoder::.ctor(ZXing.Common.BitArray)
extern "C"  void AI013103decoder__ctor_m2995219040 (AI013103decoder_t4293718288 * __this, BitArray_t2845796643 * ___information, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.Decoders.AI013103decoder::addWeightCode(System.Text.StringBuilder,System.Int32)
extern "C"  void AI013103decoder_addWeightCode_m28341086 (AI013103decoder_t4293718288 * __this, StringBuilder_t3822575854 * ___buf, int32_t ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.RSS.Expanded.Decoders.AI013103decoder::checkWeight(System.Int32)
extern "C"  int32_t AI013103decoder_checkWeight_m2495371918 (AI013103decoder_t4293718288 * __this, int32_t ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.OneD.RSS.Expanded.Decoders.AbstractExpandedDecoder
struct AbstractExpandedDecoder_t1354466623;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder
struct GeneralAppIdDecoder_t1500692230;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"

// System.Void ZXing.OneD.RSS.Expanded.Decoders.AbstractExpandedDecoder::.ctor(ZXing.Common.BitArray)
extern "C"  void AbstractExpandedDecoder__ctor_m3302319695 (AbstractExpandedDecoder_t1354466623 * __this, BitArray_t2845796643 * ___information, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitArray ZXing.OneD.RSS.Expanded.Decoders.AbstractExpandedDecoder::getInformation()
extern "C"  BitArray_t2845796643 * AbstractExpandedDecoder_getInformation_m1208881354 (AbstractExpandedDecoder_t1354466623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder ZXing.OneD.RSS.Expanded.Decoders.AbstractExpandedDecoder::getGeneralDecoder()
extern "C"  GeneralAppIdDecoder_t1500692230 * AbstractExpandedDecoder_getGeneralDecoder_m1467953493 (AbstractExpandedDecoder_t1354466623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.Decoders.AbstractExpandedDecoder ZXing.OneD.RSS.Expanded.Decoders.AbstractExpandedDecoder::createDecoder(ZXing.Common.BitArray)
extern "C"  AbstractExpandedDecoder_t1354466623 * AbstractExpandedDecoder_createDecoder_m3670332201 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___information, const MethodInfo* method) IL2CPP_METHOD_ATTR;

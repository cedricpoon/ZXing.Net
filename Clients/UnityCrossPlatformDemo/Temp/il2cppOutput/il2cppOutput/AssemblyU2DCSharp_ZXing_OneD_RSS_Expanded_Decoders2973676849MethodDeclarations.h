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

// ZXing.OneD.RSS.Expanded.Decoders.BlockParsedResult
struct BlockParsedResult_t2973676849;
// ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation
struct DecodedInformation_t3102832588;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_OneD_RSS_Expanded_Decoders3102832588.h"

// System.Void ZXing.OneD.RSS.Expanded.Decoders.BlockParsedResult::.ctor(System.Boolean)
extern "C"  void BlockParsedResult__ctor_m1408715171 (BlockParsedResult_t2973676849 * __this, bool ___finished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.Decoders.BlockParsedResult::.ctor(ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation,System.Boolean)
extern "C"  void BlockParsedResult__ctor_m3472242297 (BlockParsedResult_t2973676849 * __this, DecodedInformation_t3102832588 * ___information, bool ___finished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.Expanded.Decoders.DecodedInformation ZXing.OneD.RSS.Expanded.Decoders.BlockParsedResult::getDecodedInformation()
extern "C"  DecodedInformation_t3102832588 * BlockParsedResult_getDecodedInformation_m513191685 (BlockParsedResult_t2973676849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.Decoders.BlockParsedResult::isFinished()
extern "C"  bool BlockParsedResult_isFinished_m1117609128 (BlockParsedResult_t2973676849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

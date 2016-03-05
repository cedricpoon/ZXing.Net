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

// ZXing.QrCode.Internal.AlignmentPattern
struct AlignmentPattern_t3015969838;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.QrCode.Internal.AlignmentPattern::.ctor(System.Single,System.Single,System.Single)
extern "C"  void AlignmentPattern__ctor_m2910971362 (AlignmentPattern_t3015969838 * __this, float ___posX, float ___posY, float ___estimatedModuleSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.AlignmentPattern::aboutEquals(System.Single,System.Single,System.Single)
extern "C"  bool AlignmentPattern_aboutEquals_m894476524 (AlignmentPattern_t3015969838 * __this, float ___moduleSize, float ___i, float ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.AlignmentPattern ZXing.QrCode.Internal.AlignmentPattern::combineEstimate(System.Single,System.Single,System.Single)
extern "C"  AlignmentPattern_t3015969838 * AlignmentPattern_combineEstimate_m803167314 (AlignmentPattern_t3015969838 * __this, float ___i, float ___j, float ___newModuleSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;

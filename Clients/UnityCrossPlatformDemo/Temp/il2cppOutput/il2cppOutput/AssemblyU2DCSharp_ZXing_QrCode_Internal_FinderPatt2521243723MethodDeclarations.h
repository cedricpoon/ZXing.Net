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

// ZXing.QrCode.Internal.FinderPattern
struct FinderPattern_t2521243723;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.QrCode.Internal.FinderPattern::.ctor(System.Single,System.Single,System.Single)
extern "C"  void FinderPattern__ctor_m2234693657 (FinderPattern_t2521243723 * __this, float ___posX, float ___posY, float ___estimatedModuleSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.FinderPattern::.ctor(System.Single,System.Single,System.Single,System.Int32)
extern "C"  void FinderPattern__ctor_m1657017694 (FinderPattern_t2521243723 * __this, float ___posX, float ___posY, float ___estimatedModuleSize, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ZXing.QrCode.Internal.FinderPattern::get_EstimatedModuleSize()
extern "C"  float FinderPattern_get_EstimatedModuleSize_m2263670726 (FinderPattern_t2521243723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.FinderPattern::get_Count()
extern "C"  int32_t FinderPattern_get_Count_m1084814254 (FinderPattern_t2521243723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.FinderPattern::aboutEquals(System.Single,System.Single,System.Single)
extern "C"  bool FinderPattern_aboutEquals_m1612067579 (FinderPattern_t2521243723 * __this, float ___moduleSize, float ___i, float ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.FinderPattern ZXing.QrCode.Internal.FinderPattern::combineEstimate(System.Single,System.Single,System.Single)
extern "C"  FinderPattern_t2521243723 * FinderPattern_combineEstimate_m3998439856 (FinderPattern_t2521243723 * __this, float ___i, float ___j, float ___newModuleSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;

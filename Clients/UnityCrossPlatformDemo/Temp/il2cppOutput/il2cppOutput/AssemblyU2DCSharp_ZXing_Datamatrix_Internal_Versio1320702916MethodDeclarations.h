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

// ZXing.Datamatrix.Internal.Version/ECBlocks
struct ECBlocks_t1320702916;
// ZXing.Datamatrix.Internal.Version/ECB
struct ECB_t68452;
// ZXing.Datamatrix.Internal.Version/ECB[]
struct ECBU5BU5D_t3116500621;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Datamatrix_Internal_Version_ECB68452.h"

// System.Void ZXing.Datamatrix.Internal.Version/ECBlocks::.ctor(System.Int32,ZXing.Datamatrix.Internal.Version/ECB)
extern "C"  void ECBlocks__ctor_m3799007056 (ECBlocks_t1320702916 * __this, int32_t ___ecCodewords, ECB_t68452 * ___ecBlocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Datamatrix.Internal.Version/ECBlocks::.ctor(System.Int32,ZXing.Datamatrix.Internal.Version/ECB,ZXing.Datamatrix.Internal.Version/ECB)
extern "C"  void ECBlocks__ctor_m1049181159 (ECBlocks_t1320702916 * __this, int32_t ___ecCodewords, ECB_t68452 * ___ecBlocks1, ECB_t68452 * ___ecBlocks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.Version/ECBlocks::get_ECCodewords()
extern "C"  int32_t ECBlocks_get_ECCodewords_m1228001549 (ECBlocks_t1320702916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Datamatrix.Internal.Version/ECB[] ZXing.Datamatrix.Internal.Version/ECBlocks::get_ECBlocksValue()
extern "C"  ECBU5BU5D_t3116500621* ECBlocks_get_ECBlocksValue_m873269870 (ECBlocks_t1320702916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

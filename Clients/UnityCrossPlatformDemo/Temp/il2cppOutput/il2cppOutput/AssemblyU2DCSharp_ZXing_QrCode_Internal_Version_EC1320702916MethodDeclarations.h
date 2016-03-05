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

// ZXing.QrCode.Internal.Version/ECBlocks
struct ECBlocks_t1320702917;
// ZXing.QrCode.Internal.Version/ECB[]
struct ECBU5BU5D_t3116500622;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.QrCode.Internal.Version/ECBlocks::.ctor(System.Int32,ZXing.QrCode.Internal.Version/ECB[])
extern "C"  void ECBlocks__ctor_m4030359182 (ECBlocks_t1320702917 * __this, int32_t ___ecCodewordsPerBlock, ECBU5BU5D_t3116500622* ___ecBlocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_ECCodewordsPerBlock()
extern "C"  int32_t ECBlocks_get_ECCodewordsPerBlock_m265952954 (ECBlocks_t1320702917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_NumBlocks()
extern "C"  int32_t ECBlocks_get_NumBlocks_m1838044184 (ECBlocks_t1320702917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_TotalECCodewords()
extern "C"  int32_t ECBlocks_get_TotalECCodewords_m2175179472 (ECBlocks_t1320702917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Version/ECB[] ZXing.QrCode.Internal.Version/ECBlocks::getECBlocks()
extern "C"  ECBU5BU5D_t3116500622* ECBlocks_getECBlocks_m3316757790 (ECBlocks_t1320702917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

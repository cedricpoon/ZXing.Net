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

// ZXing.Datamatrix.Internal.Version
struct Version_t1899058762;
// ZXing.Datamatrix.Internal.Version/ECBlocks
struct ECBlocks_t1320702916;
// System.String
struct String_t;
// ZXing.Datamatrix.Internal.Version[]
struct VersionU5BU5D_t1779672399;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Datamatrix_Internal_Versio1320702916.h"

// System.Void ZXing.Datamatrix.Internal.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,ZXing.Datamatrix.Internal.Version/ECBlocks)
extern "C"  void Version__ctor_m1457747831 (Version_t1899058762 * __this, int32_t ___versionNumber, int32_t ___symbolSizeRows, int32_t ___symbolSizeColumns, int32_t ___dataRegionSizeRows, int32_t ___dataRegionSizeColumns, ECBlocks_t1320702916 * ___ecBlocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Datamatrix.Internal.Version::.cctor()
extern "C"  void Version__cctor_m96650946 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.Version::getVersionNumber()
extern "C"  int32_t Version_getVersionNumber_m3623992310 (Version_t1899058762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.Version::getSymbolSizeRows()
extern "C"  int32_t Version_getSymbolSizeRows_m3708251455 (Version_t1899058762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.Version::getSymbolSizeColumns()
extern "C"  int32_t Version_getSymbolSizeColumns_m1957831385 (Version_t1899058762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.Version::getDataRegionSizeRows()
extern "C"  int32_t Version_getDataRegionSizeRows_m3717076325 (Version_t1899058762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.Version::getDataRegionSizeColumns()
extern "C"  int32_t Version_getDataRegionSizeColumns_m2866528499 (Version_t1899058762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.Version::getTotalCodewords()
extern "C"  int32_t Version_getTotalCodewords_m3253137029 (Version_t1899058762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Datamatrix.Internal.Version/ECBlocks ZXing.Datamatrix.Internal.Version::getECBlocks()
extern "C"  ECBlocks_t1320702916 * Version_getECBlocks_m2435811373 (Version_t1899058762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Datamatrix.Internal.Version ZXing.Datamatrix.Internal.Version::getVersionForDimensions(System.Int32,System.Int32)
extern "C"  Version_t1899058762 * Version_getVersionForDimensions_m666131702 (Object_t * __this /* static, unused */, int32_t ___numRows, int32_t ___numColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Datamatrix.Internal.Version::ToString()
extern "C"  String_t* Version_ToString_m3648956354 (Version_t1899058762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Datamatrix.Internal.Version[] ZXing.Datamatrix.Internal.Version::buildVersions()
extern "C"  VersionU5BU5D_t1779672399* Version_buildVersions_m2358445699 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.QrCode.Internal.Version
struct Version_t1383592089;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.QrCode.Internal.Version/ECBlocks[]
struct ECBlocksU5BU5D_t974762157;
// ZXing.QrCode.Internal.Version/ECBlocks
struct ECBlocks_t1320702917;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t2622323615;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// System.String
struct String_t;
// ZXing.QrCode.Internal.Version[]
struct VersionU5BU5D_t608543972;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_ErrorCorre2622323615.h"

// System.Void ZXing.QrCode.Internal.Version::.ctor(System.Int32,System.Int32[],ZXing.QrCode.Internal.Version/ECBlocks[])
extern "C"  void Version__ctor_m3461390808 (Version_t1383592089 * __this, int32_t ___versionNumber, Int32U5BU5D_t1809983122* ___alignmentPatternCenters, ECBlocksU5BU5D_t974762157* ___ecBlocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.Version::.cctor()
extern "C"  void Version__cctor_m2748797983 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.Version::get_VersionNumber()
extern "C"  int32_t Version_get_VersionNumber_m3737468818 (Version_t1383592089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.QrCode.Internal.Version::get_AlignmentPatternCenters()
extern "C"  Int32U5BU5D_t1809983122* Version_get_AlignmentPatternCenters_m1442997632 (Version_t1383592089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.Version::get_TotalCodewords()
extern "C"  int32_t Version_get_TotalCodewords_m2475941481 (Version_t1383592089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.Version::get_DimensionForVersion()
extern "C"  int32_t Version_get_DimensionForVersion_m3875815974 (Version_t1383592089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Version/ECBlocks ZXing.QrCode.Internal.Version::getECBlocksForLevel(ZXing.QrCode.Internal.ErrorCorrectionLevel)
extern "C"  ECBlocks_t1320702917 * Version_getECBlocksForLevel_m768001135 (Version_t1383592089 * __this, ErrorCorrectionLevel_t2622323615 * ___ecLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.Version::getProvisionalVersionForDimension(System.Int32)
extern "C"  Version_t1383592089 * Version_getProvisionalVersionForDimension_m321404926 (Object_t * __this /* static, unused */, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.Version::getVersionForNumber(System.Int32)
extern "C"  Version_t1383592089 * Version_getVersionForNumber_m2850947907 (Object_t * __this /* static, unused */, int32_t ___versionNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.Version::decodeVersionInformation(System.Int32)
extern "C"  Version_t1383592089 * Version_decodeVersionInformation_m4117861939 (Object_t * __this /* static, unused */, int32_t ___versionBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.QrCode.Internal.Version::buildFunctionPattern()
extern "C"  BitMatrix_t3148694213 * Version_buildFunctionPattern_m3414216696 (Version_t1383592089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.QrCode.Internal.Version::ToString()
extern "C"  String_t* Version_ToString_m1968584799 (Version_t1383592089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Version[] ZXing.QrCode.Internal.Version::buildVersions()
extern "C"  VersionU5BU5D_t608543972* Version_buildVersions_m2113059977 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

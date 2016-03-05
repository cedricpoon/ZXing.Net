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

// ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder
struct MultiFinderPatternFinder_t3424559009;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPointCallback
struct ResultPointCallback_t108115140;
// ZXing.QrCode.Internal.FinderPattern[][]
struct FinderPatternU5BU5DU5BU5D_t1136626159;
// ZXing.QrCode.Internal.FinderPatternInfo[]
struct FinderPatternInfoU5BU5D_t1484448612;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_ResultPointCallback108115140.h"

// System.Void ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::.ctor(ZXing.Common.BitMatrix)
extern "C"  void MultiFinderPatternFinder__ctor_m2348245855 (MultiFinderPatternFinder_t3424559009 * __this, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::.ctor(ZXing.Common.BitMatrix,ZXing.ResultPointCallback)
extern "C"  void MultiFinderPatternFinder__ctor_m1726688029 (MultiFinderPatternFinder_t3424559009 * __this, BitMatrix_t3148694213 * ___image, ResultPointCallback_t108115140 * ___resultPointCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::.cctor()
extern "C"  void MultiFinderPatternFinder__cctor_m2537431929 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.FinderPattern[][] ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::selectMutipleBestPatterns()
extern "C"  FinderPatternU5BU5DU5BU5D_t1136626159* MultiFinderPatternFinder_selectMutipleBestPatterns_m3120002761 (MultiFinderPatternFinder_t3424559009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.FinderPatternInfo[] ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::findMulti(System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  FinderPatternInfoU5BU5D_t1484448612* MultiFinderPatternFinder_findMulti_m533002405 (MultiFinderPatternFinder_t3424559009 * __this, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;

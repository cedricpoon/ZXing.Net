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

// ZXing.QrCode.Internal.FinderPatternFinder
struct FinderPatternFinder_t449776913;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPointCallback
struct ResultPointCallback_t108115140;
// System.Collections.Generic.List`1<ZXing.QrCode.Internal.FinderPattern>
struct List_1_t3318202692;
// ZXing.QrCode.Internal.FinderPatternInfo
struct FinderPatternInfo_t3408770073;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.QrCode.Internal.FinderPattern[]
struct FinderPatternU5BU5D_t1317410346;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_ResultPointCallback108115140.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"

// System.Void ZXing.QrCode.Internal.FinderPatternFinder::.ctor(ZXing.Common.BitMatrix)
extern "C"  void FinderPatternFinder__ctor_m3293724289 (FinderPatternFinder_t449776913 * __this, BitMatrix_t3148694213 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.FinderPatternFinder::.ctor(ZXing.Common.BitMatrix,ZXing.ResultPointCallback)
extern "C"  void FinderPatternFinder__ctor_m2027847615 (FinderPatternFinder_t449776913 * __this, BitMatrix_t3148694213 * ___image, ResultPointCallback_t108115140 * ___resultPointCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.QrCode.Internal.FinderPatternFinder::get_Image()
extern "C"  BitMatrix_t3148694213 * FinderPatternFinder_get_Image_m4038890126 (FinderPatternFinder_t449776913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ZXing.QrCode.Internal.FinderPattern> ZXing.QrCode.Internal.FinderPatternFinder::get_PossibleCenters()
extern "C"  List_1_t3318202692 * FinderPatternFinder_get_PossibleCenters_m1324856904 (FinderPatternFinder_t449776913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.FinderPatternInfo ZXing.QrCode.Internal.FinderPatternFinder::find(System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  FinderPatternInfo_t3408770073 * FinderPatternFinder_find_m866935256 (FinderPatternFinder_t449776913 * __this, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Single> ZXing.QrCode.Internal.FinderPatternFinder::centerFromEnd(System.Int32[],System.Int32)
extern "C"  Nullable_1_t3844246929  FinderPatternFinder_centerFromEnd_m271027677 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___stateCount, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.FinderPatternFinder::foundPatternCross(System.Int32[])
extern "C"  bool FinderPatternFinder_foundPatternCross_m570002729 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___stateCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.QrCode.Internal.FinderPatternFinder::get_CrossCheckStateCount()
extern "C"  Int32U5BU5D_t1809983122* FinderPatternFinder_get_CrossCheckStateCount_m770905105 (FinderPatternFinder_t449776913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.FinderPatternFinder::crossCheckDiagonal(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool FinderPatternFinder_crossCheckDiagonal_m3005647567 (FinderPatternFinder_t449776913 * __this, int32_t ___startI, int32_t ___centerJ, int32_t ___maxCount, int32_t ___originalStateCountTotal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Single> ZXing.QrCode.Internal.FinderPatternFinder::crossCheckVertical(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Nullable_1_t3844246929  FinderPatternFinder_crossCheckVertical_m3255587445 (FinderPatternFinder_t449776913 * __this, int32_t ___startI, int32_t ___centerJ, int32_t ___maxCount, int32_t ___originalStateCountTotal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Single> ZXing.QrCode.Internal.FinderPatternFinder::crossCheckHorizontal(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Nullable_1_t3844246929  FinderPatternFinder_crossCheckHorizontal_m613442823 (FinderPatternFinder_t449776913 * __this, int32_t ___startJ, int32_t ___centerI, int32_t ___maxCount, int32_t ___originalStateCountTotal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.FinderPatternFinder::handlePossibleCenter(System.Int32[],System.Int32,System.Int32,System.Boolean)
extern "C"  bool FinderPatternFinder_handlePossibleCenter_m6602502 (FinderPatternFinder_t449776913 * __this, Int32U5BU5D_t1809983122* ___stateCount, int32_t ___i, int32_t ___j, bool ___pureBarcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.FinderPatternFinder::findRowSkip()
extern "C"  int32_t FinderPatternFinder_findRowSkip_m2110388450 (FinderPatternFinder_t449776913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.FinderPatternFinder::haveMultiplyConfirmedCenters()
extern "C"  bool FinderPatternFinder_haveMultiplyConfirmedCenters_m2253049669 (FinderPatternFinder_t449776913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.FinderPattern[] ZXing.QrCode.Internal.FinderPatternFinder::selectBestPatterns()
extern "C"  FinderPatternU5BU5D_t1317410346* FinderPatternFinder_selectBestPatterns_m1856347567 (FinderPatternFinder_t449776913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

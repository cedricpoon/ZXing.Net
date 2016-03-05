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

// ZXing.QrCode.Internal.AlignmentPatternFinder
struct AlignmentPatternFinder_t1809203892;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// ZXing.ResultPointCallback
struct ResultPointCallback_t108115140;
// ZXing.QrCode.Internal.AlignmentPattern
struct AlignmentPattern_t3015969838;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_ResultPointCallback108115140.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"

// System.Void ZXing.QrCode.Internal.AlignmentPatternFinder::.ctor(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,ZXing.ResultPointCallback)
extern "C"  void AlignmentPatternFinder__ctor_m2450609147 (AlignmentPatternFinder_t1809203892 * __this, BitMatrix_t3148694213 * ___image, int32_t ___startX, int32_t ___startY, int32_t ___width, int32_t ___height, float ___moduleSize, ResultPointCallback_t108115140 * ___resultPointCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.AlignmentPattern ZXing.QrCode.Internal.AlignmentPatternFinder::find()
extern "C"  AlignmentPattern_t3015969838 * AlignmentPatternFinder_find_m2936857957 (AlignmentPatternFinder_t1809203892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Single> ZXing.QrCode.Internal.AlignmentPatternFinder::centerFromEnd(System.Int32[],System.Int32)
extern "C"  Nullable_1_t3844246929  AlignmentPatternFinder_centerFromEnd_m3621502268 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___stateCount, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.AlignmentPatternFinder::foundPatternCross(System.Int32[])
extern "C"  bool AlignmentPatternFinder_foundPatternCross_m1236867928 (AlignmentPatternFinder_t1809203892 * __this, Int32U5BU5D_t1809983122* ___stateCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Single> ZXing.QrCode.Internal.AlignmentPatternFinder::crossCheckVertical(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Nullable_1_t3844246929  AlignmentPatternFinder_crossCheckVertical_m4201526134 (AlignmentPatternFinder_t1809203892 * __this, int32_t ___startI, int32_t ___centerJ, int32_t ___maxCount, int32_t ___originalStateCountTotal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.AlignmentPattern ZXing.QrCode.Internal.AlignmentPatternFinder::handlePossibleCenter(System.Int32[],System.Int32,System.Int32)
extern "C"  AlignmentPattern_t3015969838 * AlignmentPatternFinder_handlePossibleCenter_m3659559081 (AlignmentPatternFinder_t1809203892 * __this, Int32U5BU5D_t1809983122* ___stateCount, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;

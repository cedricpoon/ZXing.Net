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

// ZXing.QrCode.Internal.FinderPatternInfo
struct FinderPatternInfo_t3408770073;
// ZXing.QrCode.Internal.FinderPattern[]
struct FinderPatternU5BU5D_t1317410346;
// ZXing.QrCode.Internal.FinderPattern
struct FinderPattern_t2521243723;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.QrCode.Internal.FinderPatternInfo::.ctor(ZXing.QrCode.Internal.FinderPattern[])
extern "C"  void FinderPatternInfo__ctor_m479565619 (FinderPatternInfo_t3408770073 * __this, FinderPatternU5BU5D_t1317410346* ___patternCenters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.FinderPattern ZXing.QrCode.Internal.FinderPatternInfo::get_BottomLeft()
extern "C"  FinderPattern_t2521243723 * FinderPatternInfo_get_BottomLeft_m240372365 (FinderPatternInfo_t3408770073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.FinderPattern ZXing.QrCode.Internal.FinderPatternInfo::get_TopLeft()
extern "C"  FinderPattern_t2521243723 * FinderPatternInfo_get_TopLeft_m4104282627 (FinderPatternInfo_t3408770073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.FinderPattern ZXing.QrCode.Internal.FinderPatternInfo::get_TopRight()
extern "C"  FinderPattern_t2521243723 * FinderPatternInfo_get_TopRight_m3823920322 (FinderPatternInfo_t3408770073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

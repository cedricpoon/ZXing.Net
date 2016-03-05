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

// ZXing.OneD.EAN8Reader
struct EAN8Reader_t3630080513;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "AssemblyU2DCSharp_ZXing_BarcodeFormat1525350531.h"

// System.Void ZXing.OneD.EAN8Reader::.ctor()
extern "C"  void EAN8Reader__ctor_m1508320124 (EAN8Reader_t3630080513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.EAN8Reader::decodeMiddle(ZXing.Common.BitArray,System.Int32[],System.Text.StringBuilder)
extern "C"  int32_t EAN8Reader_decodeMiddle_m2981669577 (EAN8Reader_t3630080513 * __this, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___startRange, StringBuilder_t3822575854 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.BarcodeFormat ZXing.OneD.EAN8Reader::get_BarcodeFormat()
extern "C"  int32_t EAN8Reader_get_BarcodeFormat_m3019610574 (EAN8Reader_t3630080513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.OneD.EAN13Reader
struct EAN13Reader_t3814027535;
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

// System.Void ZXing.OneD.EAN13Reader::.ctor()
extern "C"  void EAN13Reader__ctor_m356332394 (EAN13Reader_t3814027535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.EAN13Reader::.cctor()
extern "C"  void EAN13Reader__cctor_m1974273411 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.EAN13Reader::decodeMiddle(ZXing.Common.BitArray,System.Int32[],System.Text.StringBuilder)
extern "C"  int32_t EAN13Reader_decodeMiddle_m1228009335 (EAN13Reader_t3814027535 * __this, BitArray_t2845796643 * ___row, Int32U5BU5D_t1809983122* ___startRange, StringBuilder_t3822575854 * ___resultString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.BarcodeFormat ZXing.OneD.EAN13Reader::get_BarcodeFormat()
extern "C"  int32_t EAN13Reader_get_BarcodeFormat_m3684059120 (EAN13Reader_t3814027535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.EAN13Reader::determineFirstDigit(System.Text.StringBuilder,System.Int32)
extern "C"  bool EAN13Reader_determineFirstDigit_m235836785 (Object_t * __this /* static, unused */, StringBuilder_t3822575854 * ___resultString, int32_t ___lgPatternFound, const MethodInfo* method) IL2CPP_METHOD_ATTR;

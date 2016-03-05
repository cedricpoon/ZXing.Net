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

// ZXing.PDF417.Internal.PDF417DetectorResult
struct PDF417DetectorResult_t3676013870;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// System.Collections.Generic.List`1<ZXing.ResultPoint[]>
struct List_1_t925020479;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.PDF417.Internal.PDF417DetectorResult::.ctor(ZXing.Common.BitMatrix,System.Collections.Generic.List`1<ZXing.ResultPoint[]>)
extern "C"  void PDF417DetectorResult__ctor_m1029238191 (PDF417DetectorResult_t3676013870 * __this, BitMatrix_t3148694213 * ___bits, List_1_t925020479 * ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.PDF417.Internal.PDF417DetectorResult::get_Bits()
extern "C"  BitMatrix_t3148694213 * PDF417DetectorResult_get_Bits_m1203531200 (PDF417DetectorResult_t3676013870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.PDF417DetectorResult::set_Bits(ZXing.Common.BitMatrix)
extern "C"  void PDF417DetectorResult_set_Bits_m102616311 (PDF417DetectorResult_t3676013870 * __this, BitMatrix_t3148694213 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ZXing.ResultPoint[]> ZXing.PDF417.Internal.PDF417DetectorResult::get_Points()
extern "C"  List_1_t925020479 * PDF417DetectorResult_get_Points_m4034470881 (PDF417DetectorResult_t3676013870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.PDF417.Internal.PDF417DetectorResult::set_Points(System.Collections.Generic.List`1<ZXing.ResultPoint[]>)
extern "C"  void PDF417DetectorResult_set_Points_m3255790680 (PDF417DetectorResult_t3676013870 * __this, List_1_t925020479 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

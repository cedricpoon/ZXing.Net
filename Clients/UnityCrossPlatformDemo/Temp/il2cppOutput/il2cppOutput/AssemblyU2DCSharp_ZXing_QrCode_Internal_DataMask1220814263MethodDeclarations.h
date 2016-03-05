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

// ZXing.QrCode.Internal.DataMask
struct DataMask_t1220814263;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"

// System.Void ZXing.QrCode.Internal.DataMask::.ctor()
extern "C"  void DataMask__ctor_m1461395786 (DataMask_t1220814263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.DataMask::.cctor()
extern "C"  void DataMask__cctor_m1871500195 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.DataMask::unmaskBitMatrix(ZXing.Common.BitMatrix,System.Int32)
extern "C"  void DataMask_unmaskBitMatrix_m1909763643 (DataMask_t1220814263 * __this, BitMatrix_t3148694213 * ___bits, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.DataMask ZXing.QrCode.Internal.DataMask::forReference(System.Int32)
extern "C"  DataMask_t1220814263 * DataMask_forReference_m830839961 (Object_t * __this /* static, unused */, int32_t ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;

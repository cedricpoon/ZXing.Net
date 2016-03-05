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

// ZXing.OneD.MultiFormatOneDReader
struct MultiFormatOneDReader_t4268680681;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// ZXing.Result
struct Result_t2215385161;
// ZXing.Common.BitArray
struct BitArray_t2845796643;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"

// System.Void ZXing.OneD.MultiFormatOneDReader::.ctor(System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  void MultiFormatOneDReader__ctor_m730929943 (MultiFormatOneDReader_t4268680681 * __this, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.MultiFormatOneDReader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * MultiFormatOneDReader_decodeRow_m3470571089 (MultiFormatOneDReader_t4268680681 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.MultiFormatOneDReader::reset()
extern "C"  void MultiFormatOneDReader_reset_m2850902301 (MultiFormatOneDReader_t4268680681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

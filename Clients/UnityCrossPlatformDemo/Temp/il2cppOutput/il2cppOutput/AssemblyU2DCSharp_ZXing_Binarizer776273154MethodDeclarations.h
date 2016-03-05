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

// ZXing.Binarizer
struct Binarizer_t776273154;
// ZXing.LuminanceSource
struct LuminanceSource_t1843403551;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_LuminanceSource1843403551.h"

// System.Void ZXing.Binarizer::.ctor(ZXing.LuminanceSource)
extern "C"  void Binarizer__ctor_m4121699498 (Binarizer_t776273154 * __this, LuminanceSource_t1843403551 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.LuminanceSource ZXing.Binarizer::get_LuminanceSource()
extern "C"  LuminanceSource_t1843403551 * Binarizer_get_LuminanceSource_m3158689233 (Binarizer_t776273154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Binarizer::get_Width()
extern "C"  int32_t Binarizer_get_Width_m3609379336 (Binarizer_t776273154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Binarizer::get_Height()
extern "C"  int32_t Binarizer_get_Height_m725424071 (Binarizer_t776273154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

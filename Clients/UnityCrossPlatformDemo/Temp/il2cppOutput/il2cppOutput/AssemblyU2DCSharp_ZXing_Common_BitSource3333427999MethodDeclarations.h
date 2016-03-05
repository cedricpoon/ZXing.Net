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

// ZXing.Common.BitSource
struct BitSource_t3333427999;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.Common.BitSource::.ctor(System.Byte[])
extern "C"  void BitSource__ctor_m3478581725 (BitSource_t3333427999 * __this, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitSource::get_BitOffset()
extern "C"  int32_t BitSource_get_BitOffset_m184971347 (BitSource_t3333427999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitSource::get_ByteOffset()
extern "C"  int32_t BitSource_get_ByteOffset_m4148813034 (BitSource_t3333427999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitSource::readBits(System.Int32)
extern "C"  int32_t BitSource_readBits_m3981823059 (BitSource_t3333427999 * __this, int32_t ___numBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitSource::available()
extern "C"  int32_t BitSource_available_m1196801509 (BitSource_t3333427999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.QrCode.Internal.BlockPair
struct BlockPair_t2243619016;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.QrCode.Internal.BlockPair::.ctor(System.Byte[],System.Byte[])
extern "C"  void BlockPair__ctor_m1892551789 (BlockPair_t2243619016 * __this, ByteU5BU5D_t58506160* ___data, ByteU5BU5D_t58506160* ___errorCorrection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.QrCode.Internal.BlockPair::get_DataBytes()
extern "C"  ByteU5BU5D_t58506160* BlockPair_get_DataBytes_m1771467903 (BlockPair_t2243619016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.QrCode.Internal.BlockPair::get_ErrorCorrectionBytes()
extern "C"  ByteU5BU5D_t58506160* BlockPair_get_ErrorCorrectionBytes_m3111543625 (BlockPair_t2243619016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

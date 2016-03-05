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

// ZXing.Datamatrix.Internal.DataBlock
struct DataBlock_t1496375413;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// ZXing.Datamatrix.Internal.DataBlock[]
struct DataBlockU5BU5D_t958139928;
// ZXing.Datamatrix.Internal.Version
struct Version_t1899058762;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Datamatrix_Internal_Versio1899058762.h"

// System.Void ZXing.Datamatrix.Internal.DataBlock::.ctor(System.Int32,System.Byte[])
extern "C"  void DataBlock__ctor_m1776165140 (DataBlock_t1496375413 * __this, int32_t ___numDataCodewords, ByteU5BU5D_t58506160* ___codewords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Datamatrix.Internal.DataBlock[] ZXing.Datamatrix.Internal.DataBlock::getDataBlocks(System.Byte[],ZXing.Datamatrix.Internal.Version)
extern "C"  DataBlockU5BU5D_t958139928* DataBlock_getDataBlocks_m1010953483 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___rawCodewords, Version_t1899058762 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Datamatrix.Internal.DataBlock::get_NumDataCodewords()
extern "C"  int32_t DataBlock_get_NumDataCodewords_m3274114795 (DataBlock_t1496375413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.Datamatrix.Internal.DataBlock::get_Codewords()
extern "C"  ByteU5BU5D_t58506160* DataBlock_get_Codewords_m2025673979 (DataBlock_t1496375413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

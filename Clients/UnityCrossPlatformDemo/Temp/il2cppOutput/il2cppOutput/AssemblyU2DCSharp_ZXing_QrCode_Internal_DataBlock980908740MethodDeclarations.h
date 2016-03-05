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

// ZXing.QrCode.Internal.DataBlock
struct DataBlock_t980908740;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// ZXing.QrCode.Internal.DataBlock[]
struct DataBlockU5BU5D_t4081978797;
// ZXing.QrCode.Internal.Version
struct Version_t1383592089;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t2622323615;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_Version1383592089.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_ErrorCorre2622323615.h"

// System.Void ZXing.QrCode.Internal.DataBlock::.ctor(System.Int32,System.Byte[])
extern "C"  void DataBlock__ctor_m1011425687 (DataBlock_t980908740 * __this, int32_t ___numDataCodewords, ByteU5BU5D_t58506160* ___codewords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.DataBlock[] ZXing.QrCode.Internal.DataBlock::getDataBlocks(System.Byte[],ZXing.QrCode.Internal.Version,ZXing.QrCode.Internal.ErrorCorrectionLevel)
extern "C"  DataBlockU5BU5D_t4081978797* DataBlock_getDataBlocks_m1141505157 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___rawCodewords, Version_t1383592089 * ___version, ErrorCorrectionLevel_t2622323615 * ___ecLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.DataBlock::get_NumDataCodewords()
extern "C"  int32_t DataBlock_get_NumDataCodewords_m2675549000 (DataBlock_t980908740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.QrCode.Internal.DataBlock::get_Codewords()
extern "C"  ByteU5BU5D_t58506160* DataBlock_get_Codewords_m1776485694 (DataBlock_t980908740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

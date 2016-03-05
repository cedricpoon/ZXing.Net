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

// ZXing.QrCode.Internal.ByteMatrix
struct ByteMatrix_t1667372778;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t1952051089;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.QrCode.Internal.ByteMatrix::.ctor(System.Int32,System.Int32)
extern "C"  void ByteMatrix__ctor_m3238861007 (ByteMatrix_t1667372778 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Height()
extern "C"  int32_t ByteMatrix_get_Height_m2113065707 (ByteMatrix_t1667372778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Width()
extern "C"  int32_t ByteMatrix_get_Width_m2130121316 (ByteMatrix_t1667372778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Item(System.Int32,System.Int32)
extern "C"  int32_t ByteMatrix_get_Item_m3067176047 (ByteMatrix_t1667372778 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.ByteMatrix::set_Item(System.Int32,System.Int32,System.Int32)
extern "C"  void ByteMatrix_set_Item_m1382658222 (ByteMatrix_t1667372778 * __this, int32_t ___x, int32_t ___y, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[][] ZXing.QrCode.Internal.ByteMatrix::get_Array()
extern "C"  ByteU5BU5DU5BU5D_t1952051089* ByteMatrix_get_Array_m4071620413 (ByteMatrix_t1667372778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.ByteMatrix::set(System.Int32,System.Int32,System.Byte)
extern "C"  void ByteMatrix_set_m49323860 (ByteMatrix_t1667372778 * __this, int32_t ___x, int32_t ___y, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.ByteMatrix::set(System.Int32,System.Int32,System.Boolean)
extern "C"  void ByteMatrix_set_m108398830 (ByteMatrix_t1667372778 * __this, int32_t ___x, int32_t ___y, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.ByteMatrix::clear(System.Byte)
extern "C"  void ByteMatrix_clear_m2028873641 (ByteMatrix_t1667372778 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.QrCode.Internal.ByteMatrix::ToString()
extern "C"  String_t* ByteMatrix_ToString_m2931488572 (ByteMatrix_t1667372778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.String
struct String_t;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ZXing.Common.BitMatrix::.ctor(System.Int32)
extern "C"  void BitMatrix__ctor_m3160237271 (BitMatrix_t3148694213 * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitMatrix::.ctor(System.Int32,System.Int32)
extern "C"  void BitMatrix__ctor_m1173130592 (BitMatrix_t3148694213 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitMatrix::.ctor(System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  void BitMatrix__ctor_m2312077790 (BitMatrix_t3148694213 * __this, int32_t ___width, int32_t ___height, int32_t ___rowSize, Int32U5BU5D_t1809983122* ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitMatrix::.ctor(System.Int32,System.Int32,System.Int32[])
extern "C"  void BitMatrix__ctor_m1162547413 (BitMatrix_t3148694213 * __this, int32_t ___width, int32_t ___height, Int32U5BU5D_t1809983122* ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitMatrix::get_Width()
extern "C"  int32_t BitMatrix_get_Width_m821402547 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitMatrix::get_Height()
extern "C"  int32_t BitMatrix_get_Height_m197489532 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitMatrix::get_Dimension()
extern "C"  int32_t BitMatrix_get_Dimension_m350379347 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitMatrix::get_RowSize()
extern "C"  int32_t BitMatrix_get_RowSize_m149494440 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitMatrix ZXing.Common.BitMatrix::parse(System.String,System.String,System.String)
extern "C"  BitMatrix_t3148694213 * BitMatrix_parse_m1124978827 (Object_t * __this /* static, unused */, String_t* ___stringRepresentation, String_t* ___setString, String_t* ___unsetString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.BitMatrix::get_Item(System.Int32,System.Int32)
extern "C"  bool BitMatrix_get_Item_m2399421528 (BitMatrix_t3148694213 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitMatrix::set_Item(System.Int32,System.Int32,System.Boolean)
extern "C"  void BitMatrix_set_Item_m337453029 (BitMatrix_t3148694213 * __this, int32_t ___x, int32_t ___y, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitMatrix::flip(System.Int32,System.Int32)
extern "C"  void BitMatrix_flip_m3319078011 (BitMatrix_t3148694213 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitMatrix::xor(ZXing.Common.BitMatrix)
extern "C"  void BitMatrix_xor_m3464348298 (BitMatrix_t3148694213 * __this, BitMatrix_t3148694213 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitMatrix::clear()
extern "C"  void BitMatrix_clear_m1586654417 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitMatrix::setRegion(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void BitMatrix_setRegion_m2014231052 (BitMatrix_t3148694213 * __this, int32_t ___left, int32_t ___top, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Common.BitArray ZXing.Common.BitMatrix::getRow(System.Int32,ZXing.Common.BitArray)
extern "C"  BitArray_t2845796643 * BitMatrix_getRow_m272484360 (BitMatrix_t3148694213 * __this, int32_t ___y, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitMatrix::setRow(System.Int32,ZXing.Common.BitArray)
extern "C"  void BitMatrix_setRow_m2903970414 (BitMatrix_t3148694213 * __this, int32_t ___y, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitMatrix::rotate180()
extern "C"  void BitMatrix_rotate180_m3685869682 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.Common.BitMatrix::getEnclosingRectangle()
extern "C"  Int32U5BU5D_t1809983122* BitMatrix_getEnclosingRectangle_m3275508593 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.Common.BitMatrix::getTopLeftOnBit()
extern "C"  Int32U5BU5D_t1809983122* BitMatrix_getTopLeftOnBit_m332338080 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.Common.BitMatrix::getBottomRightOnBit()
extern "C"  Int32U5BU5D_t1809983122* BitMatrix_getBottomRightOnBit_m2006804427 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.BitMatrix::Equals(System.Object)
extern "C"  bool BitMatrix_Equals_m10192323 (BitMatrix_t3148694213 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitMatrix::GetHashCode()
extern "C"  int32_t BitMatrix_GetHashCode_m1626726247 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Common.BitMatrix::ToString()
extern "C"  String_t* BitMatrix_ToString_m2292469325 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Common.BitMatrix::ToString(System.String,System.String)
extern "C"  String_t* BitMatrix_ToString_m4090070353 (BitMatrix_t3148694213 * __this, String_t* ___setString, String_t* ___unsetString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Common.BitMatrix::ToString(System.String,System.String,System.String)
extern "C"  String_t* BitMatrix_ToString_m2636286925 (BitMatrix_t3148694213 * __this, String_t* ___setString, String_t* ___unsetString, String_t* ___lineSeparator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ZXing.Common.BitMatrix::Clone()
extern "C"  Object_t * BitMatrix_Clone_m3792467052 (BitMatrix_t3148694213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

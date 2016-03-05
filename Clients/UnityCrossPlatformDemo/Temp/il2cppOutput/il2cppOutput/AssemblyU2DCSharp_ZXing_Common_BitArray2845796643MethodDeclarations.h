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

// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ZXing.Common.BitArray::.ctor()
extern "C"  void BitArray__ctor_m1677924134 (BitArray_t2845796643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::.ctor(System.Int32)
extern "C"  void BitArray__ctor_m3138995063 (BitArray_t2845796643 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::.ctor(System.Int32[],System.Int32)
extern "C"  void BitArray__ctor_m1719784994 (BitArray_t2845796643 * __this, Int32U5BU5D_t1809983122* ___bits, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::.cctor()
extern "C"  void BitArray__cctor_m4288911687 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitArray::get_Size()
extern "C"  int32_t BitArray_get_Size_m219942746 (BitArray_t2845796643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitArray::get_SizeInBytes()
extern "C"  int32_t BitArray_get_SizeInBytes_m2266639662 (BitArray_t2845796643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.BitArray::get_Item(System.Int32)
extern "C"  bool BitArray_get_Item_m2014046807 (BitArray_t2845796643 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::set_Item(System.Int32,System.Boolean)
extern "C"  void BitArray_set_Item_m2331357598 (BitArray_t2845796643 * __this, int32_t ___i, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::ensureCapacity(System.Int32)
extern "C"  void BitArray_ensureCapacity_m1358273127 (BitArray_t2845796643 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::flip(System.Int32)
extern "C"  void BitArray_flip_m609301308 (BitArray_t2845796643 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitArray::numberOfTrailingZeros(System.Int32)
extern "C"  int32_t BitArray_numberOfTrailingZeros_m3315848434 (Object_t * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitArray::getNextSet(System.Int32)
extern "C"  int32_t BitArray_getNextSet_m1049362554 (BitArray_t2845796643 * __this, int32_t ___from, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitArray::getNextUnset(System.Int32)
extern "C"  int32_t BitArray_getNextUnset_m4238294401 (BitArray_t2845796643 * __this, int32_t ___from, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::setBulk(System.Int32,System.Int32)
extern "C"  void BitArray_setBulk_m3207438062 (BitArray_t2845796643 * __this, int32_t ___i, int32_t ___newBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::setRange(System.Int32,System.Int32)
extern "C"  void BitArray_setRange_m580296525 (BitArray_t2845796643 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::clear()
extern "C"  void BitArray_clear_m1714371441 (BitArray_t2845796643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.BitArray::isRange(System.Int32,System.Int32,System.Boolean)
extern "C"  bool BitArray_isRange_m289113186 (BitArray_t2845796643 * __this, int32_t ___start, int32_t ___end, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::appendBit(System.Boolean)
extern "C"  void BitArray_appendBit_m375091950 (BitArray_t2845796643 * __this, bool ___bit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.Common.BitArray::get_Array()
extern "C"  Int32U5BU5D_t1809983122* BitArray_get_Array_m513023328 (BitArray_t2845796643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::appendBits(System.Int32,System.Int32)
extern "C"  void BitArray_appendBits_m3973316136 (BitArray_t2845796643 * __this, int32_t ___value, int32_t ___numBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::appendBitArray(ZXing.Common.BitArray)
extern "C"  void BitArray_appendBitArray_m2699589097 (BitArray_t2845796643 * __this, BitArray_t2845796643 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::xor(ZXing.Common.BitArray)
extern "C"  void BitArray_xor_m2289998862 (BitArray_t2845796643 * __this, BitArray_t2845796643 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::toBytes(System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void BitArray_toBytes_m1300570440 (BitArray_t2845796643 * __this, int32_t ___bitOffset, ByteU5BU5D_t58506160* ___array, int32_t ___offset, int32_t ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Common.BitArray::reverse()
extern "C"  void BitArray_reverse_m4201167366 (BitArray_t2845796643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.Common.BitArray::makeArray(System.Int32)
extern "C"  Int32U5BU5D_t1809983122* BitArray_makeArray_m3749565548 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.Common.BitArray::Equals(System.Object)
extern "C"  bool BitArray_Equals_m641697611 (BitArray_t2845796643 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.Common.BitArray::GetHashCode()
extern "C"  int32_t BitArray_GetHashCode_m230570595 (BitArray_t2845796643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.Common.BitArray::ToString()
extern "C"  String_t* BitArray_ToString_m4002242695 (BitArray_t2845796643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ZXing.Common.BitArray::Clone()
extern "C"  Object_t * BitArray_Clone_m2990139478 (BitArray_t2845796643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

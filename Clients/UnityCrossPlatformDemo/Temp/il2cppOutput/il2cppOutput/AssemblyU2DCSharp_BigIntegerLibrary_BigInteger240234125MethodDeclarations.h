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

// BigIntegerLibrary.BigInteger
struct BigInteger_t240234125;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BigIntegerLibrary_BigInteger240234125.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"

// System.Void BigIntegerLibrary.BigInteger::.ctor()
extern "C"  void BigInteger__ctor_m3309446988 (BigInteger_t240234125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.BigInteger::.ctor(System.Int64)
extern "C"  void BigInteger__ctor_m3451082270 (BigInteger_t240234125 * __this, int64_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.BigInteger::.ctor(BigIntegerLibrary.BigInteger)
extern "C"  void BigInteger__ctor_m2814610045 (BigInteger_t240234125 * __this, BigInteger_t240234125 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.BigInteger::.ctor(System.String)
extern "C"  void BigInteger__ctor_m65975094 (BigInteger_t240234125 * __this, String_t* ___numberString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m2303136765 (BigInteger_t240234125 * __this, ByteU5BU5D_t58506160* ___byteArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.BigInteger::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void BigInteger__ctor_m1312874125 (BigInteger_t240234125 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m3326512609 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.BigInteger::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void BigInteger_GetObjectData_m2423605482 (BigInteger_t240234125 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::Equals(BigIntegerLibrary.BigInteger)
extern "C"  bool BigInteger_Equals_m3740650780 (BigInteger_t240234125 * __this, BigInteger_t240234125 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m853969161 (BigInteger_t240234125 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BigIntegerLibrary.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m887079981 (BigInteger_t240234125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BigIntegerLibrary.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m2644368263 (BigInteger_t240234125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Parse(System.String)
extern "C"  BigInteger_t240234125 * BigInteger_Parse_m2241240627 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BigIntegerLibrary.BigInteger::CompareTo(BigIntegerLibrary.BigInteger)
extern "C"  int32_t BigInteger_CompareTo_m4066620173 (BigInteger_t240234125 * __this, BigInteger_t240234125 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BigIntegerLibrary.BigInteger::CompareTo(System.Object)
extern "C"  int32_t BigInteger_CompareTo_m2599526200 (BigInteger_t240234125 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BigIntegerLibrary.BigInteger::SizeInBinaryDigits(BigIntegerLibrary.BigInteger)
extern "C"  int32_t BigInteger_SizeInBinaryDigits_m2800854692 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Opposite(BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_Opposite_m1427042750 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::Greater(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  bool BigInteger_Greater_m3029833910 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::GreaterOrEqual(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  bool BigInteger_GreaterOrEqual_m1768891171 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::Smaller(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  bool BigInteger_Smaller_m96978044 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::SmallerOrEqual(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  bool BigInteger_SmallerOrEqual_m2364624029 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Abs(BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_Abs_m1678728735 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Addition(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_Addition_m3498861188 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Subtraction(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_Subtraction_m4057757878 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Multiplication(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_Multiplication_m3671949178 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Division(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_Division_m4205144627 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Modulo(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_Modulo_m3880793482 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Power(BigIntegerLibrary.BigInteger,System.Int32)
extern "C"  BigInteger_t240234125 * BigInteger_Power_m2104464741 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, int32_t ___exponent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::IntegerSqrt(BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_IntegerSqrt_m3470229803 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Gcd(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_Gcd_m700262050 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::ExtendedEuclidGcd(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger&,BigIntegerLibrary.BigInteger&)
extern "C"  BigInteger_t240234125 * BigInteger_ExtendedEuclidGcd_m2857361529 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, BigInteger_t240234125 ** ___u, BigInteger_t240234125 ** ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::ModularInverse(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_ModularInverse_m3496464954 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::ModularExponentiation(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_ModularExponentiation_m2396262354 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___exponent, BigInteger_t240234125 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Add(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_Add_m1790716265 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Subtract(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_Subtract_m24908652 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Multiply(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_Multiply_m2957008476 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::DivideByOneDigitNumber(BigIntegerLibrary.BigInteger,System.Int64)
extern "C"  BigInteger_t240234125 * BigInteger_DivideByOneDigitNumber_m1135292929 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, int64_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::DivideByBigNumber(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_DivideByBigNumber_m3499373233 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::DivideByBigNumberSmaller(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger,System.Int32,System.Int32)
extern "C"  bool BigInteger_DivideByBigNumberSmaller_m1978516127 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___r, BigInteger_t240234125 * ___dq, int32_t ___k, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.BigInteger::Difference(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger,System.Int32,System.Int32)
extern "C"  void BigInteger_Difference_m3054665649 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___r, BigInteger_t240234125 * ___dq, int32_t ___k, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 BigIntegerLibrary.BigInteger::Trial(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger,System.Int32,System.Int32)
extern "C"  int64_t BigInteger_Trial_m1375466901 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___r, BigInteger_t240234125 * ___d, int32_t ___k, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::op_Implicit(System.Int64)
extern "C"  BigInteger_t240234125 * BigInteger_op_Implicit_m1524441937 (Object_t * __this /* static, unused */, int64_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t240234125 * BigInteger_op_Implicit_m1524438992 (Object_t * __this /* static, unused */, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BigIntegerLibrary.BigInteger::op_Explicit(BigIntegerLibrary.BigInteger)
extern "C"  int32_t BigInteger_op_Explicit_m3766717855 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 BigIntegerLibrary.BigInteger::op_Explicit(BigIntegerLibrary.BigInteger)
extern "C"  uint64_t BigInteger_op_Explicit_m693357649 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::op_Equality(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  bool BigInteger_op_Equality_m2158301848 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::op_Inequality(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  bool BigInteger_op_Inequality_m3026481171 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::op_GreaterThan(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m1966516733 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::op_LessThan(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m1299246264 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::op_GreaterThanOrEqual(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m1264477180 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.BigInteger::op_LessThanOrEqual(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  bool BigInteger_op_LessThanOrEqual_m2364647649 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::op_UnaryNegation(BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_op_UnaryNegation_m3939754285 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::op_Addition(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_op_Addition_m3890523536 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::op_Subtraction(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_op_Subtraction_m2644623914 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::op_Multiply(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_op_Multiply_m3348670824 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::op_Division(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_op_Division_m301839679 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::op_Modulus(BigIntegerLibrary.BigInteger,BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_op_Modulus_m3640419271 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___a, BigInteger_t240234125 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::op_Increment(BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_op_Increment_m4149667112 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::op_Decrement(BigIntegerLibrary.BigInteger)
extern "C"  BigInteger_t240234125 * BigInteger_op_Decrement_m2657783628 (Object_t * __this /* static, unused */, BigInteger_t240234125 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;

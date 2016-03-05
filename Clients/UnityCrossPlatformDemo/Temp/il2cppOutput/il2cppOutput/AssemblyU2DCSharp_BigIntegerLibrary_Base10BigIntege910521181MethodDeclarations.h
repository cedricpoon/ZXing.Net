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

// BigIntegerLibrary.Base10BigInteger
struct Base10BigInteger_t910521181;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BigIntegerLibrary_Base10BigIntege910521181.h"
#include "AssemblyU2DCSharp_BigIntegerLibrary_Sign2683381804.h"
#include "mscorlib_System_Object837106420.h"

// System.Void BigIntegerLibrary.Base10BigInteger::.ctor()
extern "C"  void Base10BigInteger__ctor_m1283488572 (Base10BigInteger_t910521181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.Base10BigInteger::.ctor(System.Int64)
extern "C"  void Base10BigInteger__ctor_m2112045582 (Base10BigInteger_t910521181 * __this, int64_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.Base10BigInteger::.ctor(BigIntegerLibrary.Base10BigInteger)
extern "C"  void Base10BigInteger__ctor_m2165756445 (Base10BigInteger_t910521181 * __this, Base10BigInteger_t910521181 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.Base10BigInteger::.cctor()
extern "C"  void Base10BigInteger__cctor_m651343857 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BigIntegerLibrary.Base10BigInteger::set_NumberSign(BigIntegerLibrary.Sign)
extern "C"  void Base10BigInteger_set_NumberSign_m3405945693 (Base10BigInteger_t910521181 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::Equals(BigIntegerLibrary.Base10BigInteger)
extern "C"  bool Base10BigInteger_Equals_m263510172 (Base10BigInteger_t910521181 * __this, Base10BigInteger_t910521181 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::Equals(System.Object)
extern "C"  bool Base10BigInteger_Equals_m4260196345 (Base10BigInteger_t910521181 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BigIntegerLibrary.Base10BigInteger::GetHashCode()
extern "C"  int32_t Base10BigInteger_GetHashCode_m2035693213 (Base10BigInteger_t910521181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BigIntegerLibrary.Base10BigInteger::ToString()
extern "C"  String_t* Base10BigInteger_ToString_m2388761431 (Base10BigInteger_t910521181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::Opposite(BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_Opposite_m393396846 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::Greater(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  bool Base10BigInteger_Greater_m3631840774 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::GreaterOrEqual(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  bool Base10BigInteger_GreaterOrEqual_m1974316243 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::Smaller(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  bool Base10BigInteger_Smaller_m1561866444 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::SmallerOrEqual(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  bool Base10BigInteger_SmallerOrEqual_m212561741 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::Abs(BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_Abs_m1331945103 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::Addition(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_Addition_m685411844 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::Subtraction(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_Subtraction_m105684150 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::Multiplication(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_Multiplication_m1409497594 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::Add(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_Add_m3066271977 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::Subtract(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_Subtract_m2793415404 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::Multiply(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_Multiply_m3388704220 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::op_Implicit(System.Int64)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_op_Implicit_m2675271057 (Object_t * __this /* static, unused */, int64_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::op_Equality(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  bool Base10BigInteger_op_Equality_m4220202216 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::op_Inequality(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  bool Base10BigInteger_op_Inequality_m2251793891 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::op_GreaterThan(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  bool Base10BigInteger_op_GreaterThan_m3220159661 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::op_LessThan(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  bool Base10BigInteger_op_LessThan_m1405146888 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::op_GreaterThanOrEqual(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  bool Base10BigInteger_op_GreaterThanOrEqual_m2855924812 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BigIntegerLibrary.Base10BigInteger::op_LessThanOrEqual(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  bool Base10BigInteger_op_LessThanOrEqual_m618827153 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::op_UnaryNegation(BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_op_UnaryNegation_m3117048477 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::op_Addition(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_op_Addition_m3912915600 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::op_Subtraction(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_op_Subtraction_m3532190890 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::op_Multiply(BigIntegerLibrary.Base10BigInteger,BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_op_Multiply_m2321240680 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___a, Base10BigInteger_t910521181 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::op_Increment(BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_op_Increment_m1804344920 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::op_Decrement(BigIntegerLibrary.Base10BigInteger)
extern "C"  Base10BigInteger_t910521181 * Base10BigInteger_op_Decrement_m2350423420 (Object_t * __this /* static, unused */, Base10BigInteger_t910521181 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;

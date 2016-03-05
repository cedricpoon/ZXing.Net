#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BigIntegerLibrary.BigInteger
struct BigInteger_t240234125;
// BigIntegerLibrary.BigInteger/DigitContainer
struct DigitContainer_t220774901;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_BigIntegerLibrary_Sign2683381804.h"

// BigIntegerLibrary.BigInteger
struct  BigInteger_t240234125  : public Object_t
{
	// BigIntegerLibrary.BigInteger/DigitContainer BigIntegerLibrary.BigInteger::digits
	DigitContainer_t220774901 * ___digits_7;
	// System.Int32 BigIntegerLibrary.BigInteger::size
	int32_t ___size_8;
	// BigIntegerLibrary.Sign BigIntegerLibrary.BigInteger::sign
	int32_t ___sign_9;
};
struct BigInteger_t240234125_StaticFields{
	// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Zero
	BigInteger_t240234125 * ___Zero_3;
	// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::One
	BigInteger_t240234125 * ___One_4;
	// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Two
	BigInteger_t240234125 * ___Two_5;
	// BigIntegerLibrary.BigInteger BigIntegerLibrary.BigInteger::Ten
	BigInteger_t240234125 * ___Ten_6;
};

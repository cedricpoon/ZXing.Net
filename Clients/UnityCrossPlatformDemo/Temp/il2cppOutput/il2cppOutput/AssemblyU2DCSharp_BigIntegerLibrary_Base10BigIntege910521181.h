#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BigIntegerLibrary.Base10BigInteger
struct Base10BigInteger_t910521181;
// BigIntegerLibrary.Base10BigInteger/DigitContainer
struct DigitContainer_t220774900;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_BigIntegerLibrary_Sign2683381804.h"

// BigIntegerLibrary.Base10BigInteger
struct  Base10BigInteger_t910521181  : public Object_t
{
	// BigIntegerLibrary.Base10BigInteger/DigitContainer BigIntegerLibrary.Base10BigInteger::digits
	DigitContainer_t220774900 * ___digits_4;
	// System.Int32 BigIntegerLibrary.Base10BigInteger::size
	int32_t ___size_5;
	// BigIntegerLibrary.Sign BigIntegerLibrary.Base10BigInteger::sign
	int32_t ___sign_6;
};
struct Base10BigInteger_t910521181_StaticFields{
	// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::Zero
	Base10BigInteger_t910521181 * ___Zero_2;
	// BigIntegerLibrary.Base10BigInteger BigIntegerLibrary.Base10BigInteger::One
	Base10BigInteger_t910521181 * ___One_3;
};

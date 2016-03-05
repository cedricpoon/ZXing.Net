#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.PDF417.Internal.EC.ModulusGF
struct ModulusGF_t1405733207;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "mscorlib_System_Object837106420.h"

// ZXing.PDF417.Internal.EC.ModulusPoly
struct  ModulusPoly_t1901871780  : public Object_t
{
	// ZXing.PDF417.Internal.EC.ModulusGF ZXing.PDF417.Internal.EC.ModulusPoly::field
	ModulusGF_t1405733207 * ___field_0;
	// System.Int32[] ZXing.PDF417.Internal.EC.ModulusPoly::coefficients
	Int32U5BU5D_t1809983122* ___coefficients_1;
};

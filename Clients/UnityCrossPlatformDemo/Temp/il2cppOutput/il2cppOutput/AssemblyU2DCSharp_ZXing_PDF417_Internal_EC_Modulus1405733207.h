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
// ZXing.PDF417.Internal.EC.ModulusPoly
struct ModulusPoly_t1901871780;

#include "mscorlib_System_Object837106420.h"

// ZXing.PDF417.Internal.EC.ModulusGF
struct  ModulusGF_t1405733207  : public Object_t
{
	// System.Int32[] ZXing.PDF417.Internal.EC.ModulusGF::expTable
	Int32U5BU5D_t1809983122* ___expTable_1;
	// System.Int32[] ZXing.PDF417.Internal.EC.ModulusGF::logTable
	Int32U5BU5D_t1809983122* ___logTable_2;
	// System.Int32 ZXing.PDF417.Internal.EC.ModulusGF::modulus
	int32_t ___modulus_3;
	// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusGF::<Zero>k__BackingField
	ModulusPoly_t1901871780 * ___U3CZeroU3Ek__BackingField_4;
	// ZXing.PDF417.Internal.EC.ModulusPoly ZXing.PDF417.Internal.EC.ModulusGF::<One>k__BackingField
	ModulusPoly_t1901871780 * ___U3COneU3Ek__BackingField_5;
};
struct ModulusGF_t1405733207_StaticFields{
	// ZXing.PDF417.Internal.EC.ModulusGF ZXing.PDF417.Internal.EC.ModulusGF::PDF417_GF
	ModulusGF_t1405733207 * ___PDF417_GF_0;
};

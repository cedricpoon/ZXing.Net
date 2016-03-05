#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.Common.ReedSolomon.GenericGF
struct GenericGF_t561507308;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.Common.ReedSolomon.GenericGFPoly
struct GenericGFPoly_t3080297688;

#include "mscorlib_System_Object837106420.h"

// ZXing.Common.ReedSolomon.GenericGF
struct  GenericGF_t561507308  : public Object_t
{
	// System.Int32[] ZXing.Common.ReedSolomon.GenericGF::expTable
	Int32U5BU5D_t1809983122* ___expTable_8;
	// System.Int32[] ZXing.Common.ReedSolomon.GenericGF::logTable
	Int32U5BU5D_t1809983122* ___logTable_9;
	// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.GenericGF::zero
	GenericGFPoly_t3080297688 * ___zero_10;
	// ZXing.Common.ReedSolomon.GenericGFPoly ZXing.Common.ReedSolomon.GenericGF::one
	GenericGFPoly_t3080297688 * ___one_11;
	// System.Int32 ZXing.Common.ReedSolomon.GenericGF::size
	int32_t ___size_12;
	// System.Int32 ZXing.Common.ReedSolomon.GenericGF::primitive
	int32_t ___primitive_13;
	// System.Int32 ZXing.Common.ReedSolomon.GenericGF::generatorBase
	int32_t ___generatorBase_14;
};
struct GenericGF_t561507308_StaticFields{
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::AZTEC_DATA_12
	GenericGF_t561507308 * ___AZTEC_DATA_12_0;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::AZTEC_DATA_10
	GenericGF_t561507308 * ___AZTEC_DATA_10_1;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::AZTEC_DATA_6
	GenericGF_t561507308 * ___AZTEC_DATA_6_2;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::AZTEC_PARAM
	GenericGF_t561507308 * ___AZTEC_PARAM_3;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::QR_CODE_FIELD_256
	GenericGF_t561507308 * ___QR_CODE_FIELD_256_4;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::DATA_MATRIX_FIELD_256
	GenericGF_t561507308 * ___DATA_MATRIX_FIELD_256_5;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::AZTEC_DATA_8
	GenericGF_t561507308 * ___AZTEC_DATA_8_6;
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGF::MAXICODE_FIELD_64
	GenericGF_t561507308 * ___MAXICODE_FIELD_64_7;
};

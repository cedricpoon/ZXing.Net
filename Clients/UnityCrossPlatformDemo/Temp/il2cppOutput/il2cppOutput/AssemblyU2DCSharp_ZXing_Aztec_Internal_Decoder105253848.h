#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.Generic.IDictionary`2<ZXing.Aztec.Internal.Decoder/Table,System.String[]>
struct IDictionary_2_t2636144582;
// System.Collections.Generic.IDictionary`2<System.Char,ZXing.Aztec.Internal.Decoder/Table>
struct IDictionary_2_t3353915296;
// ZXing.Aztec.Internal.AztecDetectorResult
struct AztecDetectorResult_t2648621232;

#include "mscorlib_System_Object837106420.h"

// ZXing.Aztec.Internal.Decoder
struct  Decoder_t105253848  : public Object_t
{
	// ZXing.Aztec.Internal.AztecDetectorResult ZXing.Aztec.Internal.Decoder::ddata
	AztecDetectorResult_t2648621232 * ___ddata_7;
};
struct Decoder_t105253848_StaticFields{
	// System.String[] ZXing.Aztec.Internal.Decoder::UPPER_TABLE
	StringU5BU5D_t2956870243* ___UPPER_TABLE_0;
	// System.String[] ZXing.Aztec.Internal.Decoder::LOWER_TABLE
	StringU5BU5D_t2956870243* ___LOWER_TABLE_1;
	// System.String[] ZXing.Aztec.Internal.Decoder::MIXED_TABLE
	StringU5BU5D_t2956870243* ___MIXED_TABLE_2;
	// System.String[] ZXing.Aztec.Internal.Decoder::PUNCT_TABLE
	StringU5BU5D_t2956870243* ___PUNCT_TABLE_3;
	// System.String[] ZXing.Aztec.Internal.Decoder::DIGIT_TABLE
	StringU5BU5D_t2956870243* ___DIGIT_TABLE_4;
	// System.Collections.Generic.IDictionary`2<ZXing.Aztec.Internal.Decoder/Table,System.String[]> ZXing.Aztec.Internal.Decoder::codeTables
	Object_t* ___codeTables_5;
	// System.Collections.Generic.IDictionary`2<System.Char,ZXing.Aztec.Internal.Decoder/Table> ZXing.Aztec.Internal.Decoder::codeTableMap
	Object_t* ___codeTableMap_6;
};

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "AssemblyU2DCSharp_ZXing_OneD_OneDReader1128947577.h"

// ZXing.OneD.CodaBarReader
struct  CodaBarReader_t3258084613  : public OneDReader_t1128947577
{
	// System.Text.StringBuilder ZXing.OneD.CodaBarReader::decodeRowResult
	StringBuilder_t3822575854 * ___decodeRowResult_9;
	// System.Int32[] ZXing.OneD.CodaBarReader::counters
	Int32U5BU5D_t1809983122* ___counters_10;
	// System.Int32 ZXing.OneD.CodaBarReader::counterLength
	int32_t ___counterLength_11;
};
struct CodaBarReader_t3258084613_StaticFields{
	// System.Int32 ZXing.OneD.CodaBarReader::MAX_ACCEPTABLE
	int32_t ___MAX_ACCEPTABLE_4;
	// System.Int32 ZXing.OneD.CodaBarReader::PADDING
	int32_t ___PADDING_5;
	// System.Char[] ZXing.OneD.CodaBarReader::ALPHABET
	CharU5BU5D_t3416858730* ___ALPHABET_6;
	// System.Int32[] ZXing.OneD.CodaBarReader::CHARACTER_ENCODINGS
	Int32U5BU5D_t1809983122* ___CHARACTER_ENCODINGS_7;
	// System.Char[] ZXing.OneD.CodaBarReader::STARTEND_ENCODING
	CharU5BU5D_t3416858730* ___STARTEND_ENCODING_8;
};

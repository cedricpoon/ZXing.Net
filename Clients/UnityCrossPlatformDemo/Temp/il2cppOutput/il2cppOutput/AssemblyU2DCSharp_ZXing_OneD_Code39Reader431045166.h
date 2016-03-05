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

// ZXing.OneD.Code39Reader
struct  Code39Reader_t431045166  : public OneDReader_t1128947577
{
	// System.Boolean ZXing.OneD.Code39Reader::usingCheckDigit
	bool ___usingCheckDigit_6;
	// System.Boolean ZXing.OneD.Code39Reader::extendedMode
	bool ___extendedMode_7;
	// System.Text.StringBuilder ZXing.OneD.Code39Reader::decodeRowResult
	StringBuilder_t3822575854 * ___decodeRowResult_8;
	// System.Int32[] ZXing.OneD.Code39Reader::counters
	Int32U5BU5D_t1809983122* ___counters_9;
};
struct Code39Reader_t431045166_StaticFields{
	// System.String ZXing.OneD.Code39Reader::ALPHABET_STRING
	String_t* ___ALPHABET_STRING_2;
	// System.Char[] ZXing.OneD.Code39Reader::ALPHABET
	CharU5BU5D_t3416858730* ___ALPHABET_3;
	// System.Int32[] ZXing.OneD.Code39Reader::CHARACTER_ENCODINGS
	Int32U5BU5D_t1809983122* ___CHARACTER_ENCODINGS_4;
	// System.Int32 ZXing.OneD.Code39Reader::ASTERISK_ENCODING
	int32_t ___ASTERISK_ENCODING_5;
};

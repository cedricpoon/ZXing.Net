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

// ZXing.OneD.Code93Reader
struct  Code93Reader_t1267917794  : public OneDReader_t1128947577
{
	// System.Text.StringBuilder ZXing.OneD.Code93Reader::decodeRowResult
	StringBuilder_t3822575854 * ___decodeRowResult_6;
	// System.Int32[] ZXing.OneD.Code93Reader::counters
	Int32U5BU5D_t1809983122* ___counters_7;
};
struct Code93Reader_t1267917794_StaticFields{
	// System.Char[] ZXing.OneD.Code93Reader::ALPHABET
	CharU5BU5D_t3416858730* ___ALPHABET_3;
	// System.Int32[] ZXing.OneD.Code93Reader::CHARACTER_ENCODINGS
	Int32U5BU5D_t1809983122* ___CHARACTER_ENCODINGS_4;
	// System.Int32 ZXing.OneD.Code93Reader::ASTERISK_ENCODING
	int32_t ___ASTERISK_ENCODING_5;
};

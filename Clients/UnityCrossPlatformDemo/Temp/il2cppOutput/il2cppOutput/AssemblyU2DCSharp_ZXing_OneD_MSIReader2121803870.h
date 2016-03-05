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

// ZXing.OneD.MSIReader
struct  MSIReader_t2121803870  : public OneDReader_t1128947577
{
	// System.Boolean ZXing.OneD.MSIReader::usingCheckDigit
	bool ___usingCheckDigit_7;
	// System.Text.StringBuilder ZXing.OneD.MSIReader::decodeRowResult
	StringBuilder_t3822575854 * ___decodeRowResult_8;
	// System.Int32[] ZXing.OneD.MSIReader::counters
	Int32U5BU5D_t1809983122* ___counters_9;
	// System.Int32 ZXing.OneD.MSIReader::averageCounterWidth
	int32_t ___averageCounterWidth_10;
};
struct MSIReader_t2121803870_StaticFields{
	// System.String ZXing.OneD.MSIReader::ALPHABET_STRING
	String_t* ___ALPHABET_STRING_4;
	// System.Char[] ZXing.OneD.MSIReader::ALPHABET
	CharU5BU5D_t3416858730* ___ALPHABET_5;
	// System.Int32[] ZXing.OneD.MSIReader::CHARACTER_ENCODINGS
	Int32U5BU5D_t1809983122* ___CHARACTER_ENCODINGS_6;
	// System.Int32[] ZXing.OneD.MSIReader::doubleAndCrossSum
	Int32U5BU5D_t1809983122* ___doubleAndCrossSum_11;
};

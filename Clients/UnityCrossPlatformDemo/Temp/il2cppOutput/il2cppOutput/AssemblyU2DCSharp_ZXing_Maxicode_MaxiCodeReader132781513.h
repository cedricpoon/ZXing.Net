#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;
// ZXing.Maxicode.Internal.Decoder
struct Decoder_t3774689753;

#include "mscorlib_System_Object837106420.h"

// ZXing.Maxicode.MaxiCodeReader
struct  MaxiCodeReader_t132781513  : public Object_t
{
	// ZXing.Maxicode.Internal.Decoder ZXing.Maxicode.MaxiCodeReader::decoder
	Decoder_t3774689753 * ___decoder_3;
};
struct MaxiCodeReader_t132781513_StaticFields{
	// ZXing.ResultPoint[] ZXing.Maxicode.MaxiCodeReader::NO_POINTS
	ResultPointU5BU5D_t128061510* ___NO_POINTS_2;
};

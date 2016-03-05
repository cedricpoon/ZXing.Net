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
// ZXing.Datamatrix.Internal.Decoder
struct Decoder_t3089884598;

#include "mscorlib_System_Object837106420.h"

// ZXing.Datamatrix.DataMatrixReader
struct  DataMatrixReader_t3570985861  : public Object_t
{
	// ZXing.Datamatrix.Internal.Decoder ZXing.Datamatrix.DataMatrixReader::decoder
	Decoder_t3089884598 * ___decoder_1;
};
struct DataMatrixReader_t3570985861_StaticFields{
	// ZXing.ResultPoint[] ZXing.Datamatrix.DataMatrixReader::NO_POINTS
	ResultPointU5BU5D_t128061510* ___NO_POINTS_0;
};

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
// ZXing.QrCode.Internal.Decoder
struct Decoder_t2574417925;

#include "mscorlib_System_Object837106420.h"

// ZXing.QrCode.QRCodeReader
struct  QRCodeReader_t3928000921  : public Object_t
{
	// ZXing.QrCode.Internal.Decoder ZXing.QrCode.QRCodeReader::decoder
	Decoder_t2574417925 * ___decoder_1;
};
struct QRCodeReader_t3928000921_StaticFields{
	// ZXing.ResultPoint[] ZXing.QrCode.QRCodeReader::NO_POINTS
	ResultPointU5BU5D_t128061510* ___NO_POINTS_0;
};

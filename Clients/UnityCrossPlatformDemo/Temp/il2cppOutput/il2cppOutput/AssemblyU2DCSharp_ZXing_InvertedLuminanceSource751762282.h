#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.LuminanceSource
struct LuminanceSource_t1843403551;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "AssemblyU2DCSharp_ZXing_LuminanceSource1843403551.h"

// ZXing.InvertedLuminanceSource
struct  InvertedLuminanceSource_t751762282  : public LuminanceSource_t1843403551
{
	// ZXing.LuminanceSource ZXing.InvertedLuminanceSource::delegate
	LuminanceSource_t1843403551 * ___delegate_2;
	// System.Byte[] ZXing.InvertedLuminanceSource::invertedMatrix
	ByteU5BU5D_t58506160* ___invertedMatrix_3;
};

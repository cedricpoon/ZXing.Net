#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "AssemblyU2DCSharp_ZXing_Binarizer776273154.h"

// ZXing.Common.GlobalHistogramBinarizer
struct  GlobalHistogramBinarizer_t2902272236  : public Binarizer_t776273154
{
	// System.Byte[] ZXing.Common.GlobalHistogramBinarizer::luminances
	ByteU5BU5D_t58506160* ___luminances_5;
	// System.Int32[] ZXing.Common.GlobalHistogramBinarizer::buckets
	Int32U5BU5D_t1809983122* ___buckets_6;
};
struct GlobalHistogramBinarizer_t2902272236_StaticFields{
	// System.Byte[] ZXing.Common.GlobalHistogramBinarizer::EMPTY
	ByteU5BU5D_t58506160* ___EMPTY_4;
};

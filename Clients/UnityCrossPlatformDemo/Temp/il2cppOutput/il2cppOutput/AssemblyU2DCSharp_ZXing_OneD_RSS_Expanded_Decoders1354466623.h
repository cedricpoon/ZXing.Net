#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ZXing.Common.BitArray
struct BitArray_t2845796643;
// ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder
struct GeneralAppIdDecoder_t1500692230;

#include "mscorlib_System_Object837106420.h"

// ZXing.OneD.RSS.Expanded.Decoders.AbstractExpandedDecoder
struct  AbstractExpandedDecoder_t1354466623  : public Object_t
{
	// ZXing.Common.BitArray ZXing.OneD.RSS.Expanded.Decoders.AbstractExpandedDecoder::information
	BitArray_t2845796643 * ___information_0;
	// ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder ZXing.OneD.RSS.Expanded.Decoders.AbstractExpandedDecoder::generalDecoder
	GeneralAppIdDecoder_t1500692230 * ___generalDecoder_1;
};

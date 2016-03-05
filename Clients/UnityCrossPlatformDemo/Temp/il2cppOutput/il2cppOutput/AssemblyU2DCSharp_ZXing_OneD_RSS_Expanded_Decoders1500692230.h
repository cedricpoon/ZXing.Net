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
// ZXing.OneD.RSS.Expanded.Decoders.CurrentParsingState
struct CurrentParsingState_t749961296;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "mscorlib_System_Object837106420.h"

// ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder
struct  GeneralAppIdDecoder_t1500692230  : public Object_t
{
	// ZXing.Common.BitArray ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::information
	BitArray_t2845796643 * ___information_0;
	// ZXing.OneD.RSS.Expanded.Decoders.CurrentParsingState ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::current
	CurrentParsingState_t749961296 * ___current_1;
	// System.Text.StringBuilder ZXing.OneD.RSS.Expanded.Decoders.GeneralAppIdDecoder::buffer
	StringBuilder_t3822575854 * ___buffer_2;
};

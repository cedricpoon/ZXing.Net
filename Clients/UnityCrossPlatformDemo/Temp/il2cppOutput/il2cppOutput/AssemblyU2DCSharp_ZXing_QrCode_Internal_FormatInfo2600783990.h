#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t2622323615;

#include "mscorlib_System_Object837106420.h"

// ZXing.QrCode.Internal.FormatInformation
struct  FormatInformation_t2600783990  : public Object_t
{
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.FormatInformation::errorCorrectionLevel
	ErrorCorrectionLevel_t2622323615 * ___errorCorrectionLevel_3;
	// System.Byte ZXing.QrCode.Internal.FormatInformation::dataMask
	uint8_t ___dataMask_4;
};
struct FormatInformation_t2600783990_StaticFields{
	// System.Int32[][] ZXing.QrCode.Internal.FormatInformation::FORMAT_INFO_DECODE_LOOKUP
	Int32U5BU5DU5BU5D_t158556903* ___FORMAT_INFO_DECODE_LOOKUP_1;
	// System.Int32[] ZXing.QrCode.Internal.FormatInformation::BITS_SET_IN_HALF_BYTE
	Int32U5BU5D_t1809983122* ___BITS_SET_IN_HALF_BYTE_2;
};

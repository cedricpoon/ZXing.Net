#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// ZXing.OneD.UPCEANExtensionSupport
struct UPCEANExtensionSupport_t1467746866;
// ZXing.OneD.EANManufacturerOrgSupport
struct EANManufacturerOrgSupport_t1376469798;

#include "AssemblyU2DCSharp_ZXing_OneD_OneDReader1128947577.h"

// ZXing.OneD.UPCEANReader
struct  UPCEANReader_t2611679461  : public OneDReader_t1128947577
{
	// System.Text.StringBuilder ZXing.OneD.UPCEANReader::decodeRowStringBuffer
	StringBuilder_t3822575854 * ___decodeRowStringBuffer_8;
	// ZXing.OneD.UPCEANExtensionSupport ZXing.OneD.UPCEANReader::extensionReader
	UPCEANExtensionSupport_t1467746866 * ___extensionReader_9;
	// ZXing.OneD.EANManufacturerOrgSupport ZXing.OneD.UPCEANReader::eanManSupport
	EANManufacturerOrgSupport_t1376469798 * ___eanManSupport_10;
};
struct UPCEANReader_t2611679461_StaticFields{
	// System.Int32 ZXing.OneD.UPCEANReader::MAX_AVG_VARIANCE
	int32_t ___MAX_AVG_VARIANCE_2;
	// System.Int32 ZXing.OneD.UPCEANReader::MAX_INDIVIDUAL_VARIANCE
	int32_t ___MAX_INDIVIDUAL_VARIANCE_3;
	// System.Int32[] ZXing.OneD.UPCEANReader::START_END_PATTERN
	Int32U5BU5D_t1809983122* ___START_END_PATTERN_4;
	// System.Int32[] ZXing.OneD.UPCEANReader::MIDDLE_PATTERN
	Int32U5BU5D_t1809983122* ___MIDDLE_PATTERN_5;
	// System.Int32[][] ZXing.OneD.UPCEANReader::L_PATTERNS
	Int32U5BU5DU5BU5D_t158556903* ___L_PATTERNS_6;
	// System.Int32[][] ZXing.OneD.UPCEANReader::L_AND_G_PATTERNS
	Int32U5BU5DU5BU5D_t158556903* ___L_AND_G_PATTERNS_7;
};

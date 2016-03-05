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
// ZXing.OneD.UPCEANExtension2Support
struct UPCEANExtension2Support_t1158777546;
// ZXing.OneD.UPCEANExtension5Support
struct UPCEANExtension5Support_t2092241255;

#include "mscorlib_System_Object837106420.h"

// ZXing.OneD.UPCEANExtensionSupport
struct  UPCEANExtensionSupport_t1467746866  : public Object_t
{
	// ZXing.OneD.UPCEANExtension2Support ZXing.OneD.UPCEANExtensionSupport::twoSupport
	UPCEANExtension2Support_t1158777546 * ___twoSupport_1;
	// ZXing.OneD.UPCEANExtension5Support ZXing.OneD.UPCEANExtensionSupport::fiveSupport
	UPCEANExtension5Support_t2092241255 * ___fiveSupport_2;
};
struct UPCEANExtensionSupport_t1467746866_StaticFields{
	// System.Int32[] ZXing.OneD.UPCEANExtensionSupport::EXTENSION_START_PATTERN
	Int32U5BU5D_t1809983122* ___EXTENSION_START_PATTERN_0;
};

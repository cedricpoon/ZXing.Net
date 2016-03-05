#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ZXing.OneD.ITFReader
struct ITFReader_t4136953718;
// ZXing.Result
struct Result_t2215385161;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void ZXing.OneD.ITFReader::.ctor()
extern "C"  void ITFReader__ctor_m1361303651 (ITFReader_t4136953718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.ITFReader::.cctor()
extern "C"  void ITFReader__cctor_m3063611306 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.OneD.ITFReader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * ITFReader_decodeRow_m2197641822 (ITFReader_t4136953718 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.ITFReader::decodeMiddle(ZXing.Common.BitArray,System.Int32,System.Int32,System.Text.StringBuilder)
extern "C"  bool ITFReader_decodeMiddle_m4264967673 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, int32_t ___payloadStart, int32_t ___payloadEnd, StringBuilder_t3822575854 * ___resultString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.ITFReader::decodeStart(ZXing.Common.BitArray)
extern "C"  Int32U5BU5D_t1809983122* ITFReader_decodeStart_m2396088900 (ITFReader_t4136953718 * __this, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.ITFReader::validateQuietZone(ZXing.Common.BitArray,System.Int32)
extern "C"  bool ITFReader_validateQuietZone_m1066671425 (ITFReader_t4136953718 * __this, BitArray_t2845796643 * ___row, int32_t ___startPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.ITFReader::skipWhiteSpace(ZXing.Common.BitArray)
extern "C"  int32_t ITFReader_skipWhiteSpace_m1732560930 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.ITFReader::decodeEnd(ZXing.Common.BitArray)
extern "C"  Int32U5BU5D_t1809983122* ITFReader_decodeEnd_m3370474539 (ITFReader_t4136953718 * __this, BitArray_t2845796643 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ZXing.OneD.ITFReader::findGuardPattern(ZXing.Common.BitArray,System.Int32,System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* ITFReader_findGuardPattern_m1039842874 (Object_t * __this /* static, unused */, BitArray_t2845796643 * ___row, int32_t ___rowOffset, Int32U5BU5D_t1809983122* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.ITFReader::decodeDigit(System.Int32[],System.Int32&)
extern "C"  bool ITFReader_decodeDigit_m40141904 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___counters, int32_t* ___bestMatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;

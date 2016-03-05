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

// ZXing.IMB.IMBReader
struct IMBReader_t815895197;
// ZXing.Result
struct Result_t2215385161;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3743800508;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t2225881878;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t218924061;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;
// System.Char[][]
struct CharU5BU5DU5BU5D_t2142621359;
// ZXing.Common.BitArray
struct BitArray_t2845796643;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_BinaryBitmap3743800508.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitArray2845796643.h"

// System.Void ZXing.IMB.IMBReader::.ctor()
extern "C"  void IMBReader__ctor_m1601143844 (IMBReader_t815895197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.IMB.IMBReader::.cctor()
extern "C"  void IMBReader__cctor_m1908722697 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.IMB.IMBReader::doDecode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * IMBReader_doDecode_m3410363364 (IMBReader_t815895197 * __this, BinaryBitmap_t3743800508 * ___image, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.IMB.IMBReader::reset()
extern "C"  void IMBReader_reset_m1877890801 (IMBReader_t815895197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 ZXing.IMB.IMBReader::binaryStringToDec(System.String)
extern "C"  uint16_t IMBReader_binaryStringToDec_m3814967446 (IMBReader_t815895197 * __this, String_t* ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.IMB.IMBReader::invertedBinaryString(System.String)
extern "C"  String_t* IMBReader_invertedBinaryString_m1888017342 (IMBReader_t815895197 * __this, String_t* ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.IMB.IMBReader::getCodeWords(System.Int32[]&,System.String,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>,System.Int32[][],System.Char[][])
extern "C"  bool IMBReader_getCodeWords_m1258829791 (IMBReader_t815895197 * __this, Int32U5BU5D_t1809983122** ___codeWord, String_t* ___imb, Object_t* ___table1Check, Object_t* ___table2Check, Int32U5BU5DU5BU5D_t158556903* ___barPos, CharU5BU5DU5BU5D_t2142621359* ___barType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.IMB.IMBReader::getTrackingNumber(System.String)
extern "C"  String_t* IMBReader_getTrackingNumber_m4150679431 (IMBReader_t815895197 * __this, String_t* ___imb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.IMB.IMBReader::fillLists(ZXing.Common.BitArray,ZXing.Common.BitArray,ZXing.Common.BitArray,System.Collections.Generic.List`1<System.Int32>&,System.Collections.Generic.List`1<System.Int32>&,System.Collections.Generic.List`1<System.Int32>&,System.Int32,System.Int32)
extern "C"  void IMBReader_fillLists_m1989955722 (IMBReader_t815895197 * __this, BitArray_t2845796643 * ___row, BitArray_t2845796643 * ___topRow, BitArray_t2845796643 * ___botRow, List_1_t3644373756 ** ___listRow, List_1_t3644373756 ** ___listTop, List_1_t3644373756 ** ___listBot, int32_t ___start, int32_t ___stop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.IMB.IMBReader::isIMB(ZXing.Common.BitArray,System.Int32&,System.Int32&,System.Int32&)
extern "C"  int32_t IMBReader_isIMB_m657042504 (IMBReader_t815895197 * __this, BitArray_t2845796643 * ___row, int32_t* ___pixelStartOffset, int32_t* ___pixelStopOffset, int32_t* ___pixelBarLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.IMB.IMBReader::getNumberBars(ZXing.Common.BitArray,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t IMBReader_getNumberBars_m4210441785 (IMBReader_t815895197 * __this, BitArray_t2845796643 * ___row, int32_t ___start, int32_t ___stop, int32_t ___barWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Result ZXing.IMB.IMBReader::decodeRow(System.Int32,ZXing.Common.BitArray,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C"  Result_t2215385161 * IMBReader_decodeRow_m4225813265 (IMBReader_t815895197 * __this, int32_t ___rowNumber, BitArray_t2845796643 * ___row, Object_t* ___hints, const MethodInfo* method) IL2CPP_METHOD_ATTR;

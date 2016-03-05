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

// ZXing.OneD.RSS.Expanded.ExpandedRow
struct ExpandedRow_t3022949946;
// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair>
struct List_1_t2229349445;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ZXing.OneD.RSS.Expanded.ExpandedRow::.ctor(System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair>,System.Int32,System.Boolean)
extern "C"  void ExpandedRow__ctor_m2885324513 (ExpandedRow_t3022949946 * __this, List_1_t2229349445 * ___pairs, int32_t ___rowNumber, bool ___wasReversed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair> ZXing.OneD.RSS.Expanded.ExpandedRow::get_Pairs()
extern "C"  List_1_t2229349445 * ExpandedRow_get_Pairs_m4027142884 (ExpandedRow_t3022949946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.ExpandedRow::set_Pairs(System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair>)
extern "C"  void ExpandedRow_set_Pairs_m100589185 (ExpandedRow_t3022949946 * __this, List_1_t2229349445 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.RSS.Expanded.ExpandedRow::get_RowNumber()
extern "C"  int32_t ExpandedRow_get_RowNumber_m3625021283 (ExpandedRow_t3022949946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.ExpandedRow::set_RowNumber(System.Int32)
extern "C"  void ExpandedRow_set_RowNumber_m2734505778 (ExpandedRow_t3022949946 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.ExpandedRow::get_IsReversed()
extern "C"  bool ExpandedRow_get_IsReversed_m3028485288 (ExpandedRow_t3022949946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.ExpandedRow::set_IsReversed(System.Boolean)
extern "C"  void ExpandedRow_set_IsReversed_m851688135 (ExpandedRow_t3022949946 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.ExpandedRow::IsEquivalent(System.Collections.Generic.List`1<ZXing.OneD.RSS.Expanded.ExpandedPair>)
extern "C"  bool ExpandedRow_IsEquivalent_m3801021681 (ExpandedRow_t3022949946 * __this, List_1_t2229349445 * ___otherPairs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.RSS.Expanded.ExpandedRow::ToString()
extern "C"  String_t* ExpandedRow_ToString_m3838063088 (ExpandedRow_t3022949946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.ExpandedRow::Equals(System.Object)
extern "C"  bool ExpandedRow_Equals_m3106453634 (ExpandedRow_t3022949946 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.RSS.Expanded.ExpandedRow::GetHashCode()
extern "C"  int32_t ExpandedRow_GetHashCode_m952003866 (ExpandedRow_t3022949946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

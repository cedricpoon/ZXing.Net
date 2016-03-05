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

// ZXing.OneD.RSS.Expanded.ExpandedPair
struct ExpandedPair_t1432390476;
// ZXing.OneD.RSS.DataCharacter
struct DataCharacter_t2485509123;
// ZXing.OneD.RSS.FinderPattern
struct FinderPattern_t786605550;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_OneD_RSS_DataCharacter2485509123.h"
#include "AssemblyU2DCSharp_ZXing_OneD_RSS_FinderPattern786605550.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ZXing.OneD.RSS.Expanded.ExpandedPair::.ctor(ZXing.OneD.RSS.DataCharacter,ZXing.OneD.RSS.DataCharacter,ZXing.OneD.RSS.FinderPattern,System.Boolean)
extern "C"  void ExpandedPair__ctor_m2249548880 (ExpandedPair_t1432390476 * __this, DataCharacter_t2485509123 * ___leftChar, DataCharacter_t2485509123 * ___rightChar, FinderPattern_t786605550 * ___finderPattern, bool ___mayBeLast, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.ExpandedPair::get_MayBeLast()
extern "C"  bool ExpandedPair_get_MayBeLast_m743355124 (ExpandedPair_t1432390476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.ExpandedPair::set_MayBeLast(System.Boolean)
extern "C"  void ExpandedPair_set_MayBeLast_m1649483435 (ExpandedPair_t1432390476 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.DataCharacter ZXing.OneD.RSS.Expanded.ExpandedPair::get_LeftChar()
extern "C"  DataCharacter_t2485509123 * ExpandedPair_get_LeftChar_m2351638069 (ExpandedPair_t1432390476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.ExpandedPair::set_LeftChar(ZXing.OneD.RSS.DataCharacter)
extern "C"  void ExpandedPair_set_LeftChar_m2240717164 (ExpandedPair_t1432390476 * __this, DataCharacter_t2485509123 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.DataCharacter ZXing.OneD.RSS.Expanded.ExpandedPair::get_RightChar()
extern "C"  DataCharacter_t2485509123 * ExpandedPair_get_RightChar_m3736859260 (ExpandedPair_t1432390476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.ExpandedPair::set_RightChar(ZXing.OneD.RSS.DataCharacter)
extern "C"  void ExpandedPair_set_RightChar_m4051887307 (ExpandedPair_t1432390476 * __this, DataCharacter_t2485509123 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.OneD.RSS.FinderPattern ZXing.OneD.RSS.Expanded.ExpandedPair::get_FinderPattern()
extern "C"  FinderPattern_t786605550 * ExpandedPair_get_FinderPattern_m1205407519 (ExpandedPair_t1432390476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.OneD.RSS.Expanded.ExpandedPair::set_FinderPattern(ZXing.OneD.RSS.FinderPattern)
extern "C"  void ExpandedPair_set_FinderPattern_m3672353976 (ExpandedPair_t1432390476 * __this, FinderPattern_t786605550 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.ExpandedPair::get_MustBeLast()
extern "C"  bool ExpandedPair_get_MustBeLast_m216698318 (ExpandedPair_t1432390476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.RSS.Expanded.ExpandedPair::ToString()
extern "C"  String_t* ExpandedPair_ToString_m1116267902 (ExpandedPair_t1432390476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.ExpandedPair::Equals(System.Object)
extern "C"  bool ExpandedPair_Equals_m3669831602 (ExpandedPair_t1432390476 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.OneD.RSS.Expanded.ExpandedPair::EqualsOrNull(System.Object,System.Object)
extern "C"  bool ExpandedPair_EqualsOrNull_m4063251926 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.RSS.Expanded.ExpandedPair::GetHashCode()
extern "C"  int32_t ExpandedPair_GetHashCode_m3022282198 (ExpandedPair_t1432390476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.OneD.RSS.Expanded.ExpandedPair::hashNotNull(System.Object)
extern "C"  int32_t ExpandedPair_hashNotNull_m2976057731 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;

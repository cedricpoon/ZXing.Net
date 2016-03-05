﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Globalization.Unicode.TailoringInfo
struct TailoringInfo_t3819293284;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t2339494256;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t727948408;
// System.String
struct String_t;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t2962824291;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_Mono_Globalization_Unicode_TailoringInfo3819293284.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndex2962824291.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::.cctor()
extern "C"  void MSCompatUnicodeTable__cctor_m2555601275 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.TailoringInfo Mono.Globalization.Unicode.MSCompatUnicodeTable::GetTailoringInfo(System.Int32)
extern "C"  TailoringInfo_t3819293284 * MSCompatUnicodeTable_GetTailoringInfo_m350198803 (Object_t * __this /* static, unused */, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::BuildTailoringTables(System.Globalization.CultureInfo,Mono.Globalization.Unicode.TailoringInfo,Mono.Globalization.Unicode.Contraction[]&,Mono.Globalization.Unicode.Level2Map[]&)
extern "C"  void MSCompatUnicodeTable_BuildTailoringTables_m392171468 (Object_t * __this /* static, unused */, CultureInfo_t3603717042 * ___culture, TailoringInfo_t3819293284 * ___t, ContractionU5BU5D_t2339494256** ___contractions, Level2MapU5BU5D_t727948408** ___diacriticals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::SetCJKReferences(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C"  void MSCompatUnicodeTable_SetCJKReferences_m2831602013 (Object_t * __this /* static, unused */, String_t* ___name, CodePointIndexer_t2962824291 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t2962824291 ** ___lv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Category(System.Int32)
extern "C"  uint8_t MSCompatUnicodeTable_Category_m714095701 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level1(System.Int32)
extern "C"  uint8_t MSCompatUnicodeTable_Level1_m1653658500 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level2(System.Int32)
extern "C"  uint8_t MSCompatUnicodeTable_Level2_m3161210309 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level3(System.Int32)
extern "C"  uint8_t MSCompatUnicodeTable_Level3_m373794822 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorable(System.Int32,System.Byte)
extern "C"  bool MSCompatUnicodeTable_IsIgnorable_m3234859979 (Object_t * __this /* static, unused */, int32_t ___cp, uint8_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorableNonSpacing(System.Int32)
extern "C"  bool MSCompatUnicodeTable_IsIgnorableNonSpacing_m4268593916 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToKanaTypeInsensitive(System.Int32)
extern "C"  int32_t MSCompatUnicodeTable_ToKanaTypeInsensitive_m3450247664 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToWidthCompat(System.Int32)
extern "C"  int32_t MSCompatUnicodeTable_ToWidthCompat_m1071471274 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::HasSpecialWeight(System.Char)
extern "C"  bool MSCompatUnicodeTable_HasSpecialWeight_m3716746070 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHalfWidthKana(System.Char)
extern "C"  bool MSCompatUnicodeTable_IsHalfWidthKana_m1031776025 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHiragana(System.Char)
extern "C"  bool MSCompatUnicodeTable_IsHiragana_m2175293414 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsJapaneseSmallLetter(System.Char)
extern "C"  bool MSCompatUnicodeTable_IsJapaneseSmallLetter_m3143042617 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::get_IsReady()
extern "C"  bool MSCompatUnicodeTable_get_IsReady_m989669506 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Globalization.Unicode.MSCompatUnicodeTable::GetResource(System.String)
extern "C"  IntPtr_t MSCompatUnicodeTable_GetResource_m1919022169 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Globalization.Unicode.MSCompatUnicodeTable::UInt32FromBytePtr(System.Byte*,System.UInt32)
extern "C"  uint32_t MSCompatUnicodeTable_UInt32FromBytePtr_m108136383 (Object_t * __this /* static, unused */, uint8_t* ___raw, uint32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJK(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C"  void MSCompatUnicodeTable_FillCJK_m1143983080 (Object_t * __this /* static, unused */, String_t* ___culture, CodePointIndexer_t2962824291 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t2962824291 ** ___lv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJKCore(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C"  void MSCompatUnicodeTable_FillCJKCore_m2741346761 (Object_t * __this /* static, unused */, String_t* ___culture, CodePointIndexer_t2962824291 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t2962824291 ** ___cjkLv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ZXing.OneD.RSS.Expanded.Decoders.FieldParser::.cctor()
extern "C"  void FieldParser__cctor_m2501779583 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.RSS.Expanded.Decoders.FieldParser::parseFieldsInGeneralPurpose(System.String)
extern "C"  String_t* FieldParser_parseFieldsInGeneralPurpose_m1648613842 (Object_t * __this /* static, unused */, String_t* ___rawInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.RSS.Expanded.Decoders.FieldParser::processFixedAI(System.Int32,System.Int32,System.String)
extern "C"  String_t* FieldParser_processFixedAI_m1711581468 (Object_t * __this /* static, unused */, int32_t ___aiSize, int32_t ___fieldSize, String_t* ___rawInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.OneD.RSS.Expanded.Decoders.FieldParser::processVariableAI(System.Int32,System.Int32,System.String)
extern "C"  String_t* FieldParser_processVariableAI_m654418630 (Object_t * __this /* static, unused */, int32_t ___aiSize, int32_t ___variableFieldSize, String_t* ___rawInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;

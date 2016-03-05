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

// ZXing.Color32Renderer
struct Color32Renderer_t795903953;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// System.String
struct String_t;
// ZXing.Common.EncodingOptions
struct EncodingOptions_t851408226;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_BarcodeFormat1525350531.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ZXing_Common_EncodingOptions851408226.h"

// System.Void ZXing.Color32Renderer::.ctor()
extern "C"  void Color32Renderer__ctor_m755344912 (Color32Renderer_t795903953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 ZXing.Color32Renderer::get_Foreground()
extern "C"  Color32_t4137084207  Color32Renderer_get_Foreground_m3163916600 (Color32Renderer_t795903953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Color32Renderer::set_Foreground(UnityEngine.Color32)
extern "C"  void Color32Renderer_set_Foreground_m2996243763 (Color32Renderer_t795903953 * __this, Color32_t4137084207  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 ZXing.Color32Renderer::get_Background()
extern "C"  Color32_t4137084207  Color32Renderer_get_Background_m2728011363 (Color32Renderer_t795903953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Color32Renderer::set_Background(UnityEngine.Color32)
extern "C"  void Color32Renderer_set_Background_m2394575400 (Color32Renderer_t795903953 * __this, Color32_t4137084207  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] ZXing.Color32Renderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String)
extern "C"  Color32U5BU5D_t1677970742* Color32Renderer_Render_m1151074858 (Color32Renderer_t795903953 * __this, BitMatrix_t3148694213 * ___matrix, int32_t ___format, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] ZXing.Color32Renderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String,ZXing.Common.EncodingOptions)
extern "C"  Color32U5BU5D_t1677970742* Color32Renderer_Render_m395242058 (Color32Renderer_t795903953 * __this, BitMatrix_t3148694213 * ___matrix, int32_t ___format, String_t* ___content, EncodingOptions_t851408226 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;

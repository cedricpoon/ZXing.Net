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

// ZXing.Rendering.RawRenderer
struct RawRenderer_t1650055745;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// ZXing.Common.BitMatrix
struct BitMatrix_t3148694213;
// System.String
struct String_t;
// ZXing.Common.EncodingOptions
struct EncodingOptions_t851408226;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_Rendering_RawRenderer_Color65290051.h"
#include "AssemblyU2DCSharp_ZXing_Common_BitMatrix3148694213.h"
#include "AssemblyU2DCSharp_ZXing_BarcodeFormat1525350531.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ZXing_Common_EncodingOptions851408226.h"

// System.Void ZXing.Rendering.RawRenderer::.ctor()
extern "C"  void RawRenderer__ctor_m1061936236 (RawRenderer_t1650055745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Rendering.RawRenderer/Color ZXing.Rendering.RawRenderer::get_Foreground()
extern "C"  Color_t65290051  RawRenderer_get_Foreground_m2022048964 (RawRenderer_t1650055745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Rendering.RawRenderer::set_Foreground(ZXing.Rendering.RawRenderer/Color)
extern "C"  void RawRenderer_set_Foreground_m1012077991 (RawRenderer_t1650055745 * __this, Color_t65290051  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.Rendering.RawRenderer/Color ZXing.Rendering.RawRenderer::get_Background()
extern "C"  Color_t65290051  RawRenderer_get_Background_m1586143727 (RawRenderer_t1650055745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.Rendering.RawRenderer::set_Background(ZXing.Rendering.RawRenderer/Color)
extern "C"  void RawRenderer_set_Background_m3865840092 (RawRenderer_t1650055745 * __this, Color_t65290051  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.Rendering.RawRenderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String)
extern "C"  ByteU5BU5D_t58506160* RawRenderer_Render_m2581617226 (RawRenderer_t1650055745 * __this, BitMatrix_t3148694213 * ___matrix, int32_t ___format, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ZXing.Rendering.RawRenderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String,ZXing.Common.EncodingOptions)
extern "C"  ByteU5BU5D_t58506160* RawRenderer_Render_m3915318826 (RawRenderer_t1650055745 * __this, BitMatrix_t3148694213 * ___matrix, int32_t ___format, String_t* ___content, EncodingOptions_t851408226 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;

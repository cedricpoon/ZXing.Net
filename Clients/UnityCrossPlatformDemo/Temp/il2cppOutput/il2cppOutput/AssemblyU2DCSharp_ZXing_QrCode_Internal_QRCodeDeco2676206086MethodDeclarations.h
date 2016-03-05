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

// ZXing.QrCode.Internal.QRCodeDecoderMetaData
struct QRCodeDecoderMetaData_t2676206086;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t128061510;

#include "codegen/il2cpp-codegen.h"

// System.Void ZXing.QrCode.Internal.QRCodeDecoderMetaData::.ctor(System.Boolean)
extern "C"  void QRCodeDecoderMetaData__ctor_m1203241208 (QRCodeDecoderMetaData_t2676206086 * __this, bool ___mirrored, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.QRCodeDecoderMetaData::get_IsMirrored()
extern "C"  bool QRCodeDecoderMetaData_get_IsMirrored_m3518391136 (QRCodeDecoderMetaData_t2676206086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.QRCodeDecoderMetaData::applyMirroredCorrection(ZXing.ResultPoint[])
extern "C"  void QRCodeDecoderMetaData_applyMirroredCorrection_m4189485342 (QRCodeDecoderMetaData_t2676206086 * __this, ResultPointU5BU5D_t128061510* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;

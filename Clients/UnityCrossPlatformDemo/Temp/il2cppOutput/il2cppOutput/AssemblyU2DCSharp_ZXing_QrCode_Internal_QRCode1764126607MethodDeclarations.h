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

// ZXing.QrCode.Internal.QRCode
struct QRCode_t1764126607;
// ZXing.QrCode.Internal.Mode
struct Mode_t3664701860;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t2622323615;
// ZXing.QrCode.Internal.Version
struct Version_t1383592089;
// ZXing.QrCode.Internal.ByteMatrix
struct ByteMatrix_t1667372778;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_Mode3664701860.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_ErrorCorre2622323615.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_Version1383592089.h"
#include "AssemblyU2DCSharp_ZXing_QrCode_Internal_ByteMatrix1667372778.h"

// System.Void ZXing.QrCode.Internal.QRCode::.ctor()
extern "C"  void QRCode__ctor_m3536272818 (QRCode_t1764126607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.QRCode::.cctor()
extern "C"  void QRCode__cctor_m1768178747 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.QRCode::get_Mode()
extern "C"  Mode_t3664701860 * QRCode_get_Mode_m2304418077 (QRCode_t1764126607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.QRCode::set_Mode(ZXing.QrCode.Internal.Mode)
extern "C"  void QRCode_set_Mode_m2960186068 (QRCode_t1764126607 * __this, Mode_t3664701860 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.QRCode::get_ECLevel()
extern "C"  ErrorCorrectionLevel_t2622323615 * QRCode_get_ECLevel_m3901936841 (QRCode_t1764126607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.QRCode::set_ECLevel(ZXing.QrCode.Internal.ErrorCorrectionLevel)
extern "C"  void QRCode_set_ECLevel_m1110567776 (QRCode_t1764126607 * __this, ErrorCorrectionLevel_t2622323615 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.QRCode::get_Version()
extern "C"  Version_t1383592089 * QRCode_get_Version_m529974601 (QRCode_t1764126607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.QRCode::set_Version(ZXing.QrCode.Internal.Version)
extern "C"  void QRCode_set_Version_m2773735338 (QRCode_t1764126607 * __this, Version_t1383592089 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ZXing.QrCode.Internal.QRCode::get_MaskPattern()
extern "C"  int32_t QRCode_get_MaskPattern_m1461227805 (QRCode_t1764126607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.QRCode::set_MaskPattern(System.Int32)
extern "C"  void QRCode_set_MaskPattern_m3717626824 (QRCode_t1764126607 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ZXing.QrCode.Internal.ByteMatrix ZXing.QrCode.Internal.QRCode::get_Matrix()
extern "C"  ByteMatrix_t1667372778 * QRCode_get_Matrix_m302979317 (QRCode_t1764126607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ZXing.QrCode.Internal.QRCode::set_Matrix(ZXing.QrCode.Internal.ByteMatrix)
extern "C"  void QRCode_set_Matrix_m1994952428 (QRCode_t1764126607 * __this, ByteMatrix_t1667372778 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ZXing.QrCode.Internal.QRCode::ToString()
extern "C"  String_t* QRCode_ToString_m4029113185 (QRCode_t1764126607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ZXing.QrCode.Internal.QRCode::isValidMaskPattern(System.Int32)
extern "C"  bool QRCode_isValidMaskPattern_m1926405289 (Object_t * __this /* static, unused */, int32_t ___maskPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WebCamTexture
struct WebCamTexture_t3635181805;
// System.Threading.Thread
struct Thread_t1674723085;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// BarcodeCam
struct  BarcodeCam_t2739284815  : public MonoBehaviour_t3012272455
{
	// UnityEngine.WebCamTexture BarcodeCam::camTexture
	WebCamTexture_t3635181805 * ___camTexture_2;
	// System.Threading.Thread BarcodeCam::qrThread
	Thread_t1674723085 * ___qrThread_3;
	// UnityEngine.Color32[] BarcodeCam::c
	Color32U5BU5D_t1677970742* ___c_4;
	// System.Int32 BarcodeCam::W
	int32_t ___W_5;
	// System.Int32 BarcodeCam::H
	int32_t ___H_6;
	// UnityEngine.Rect BarcodeCam::screenRect
	Rect_t1525428817  ___screenRect_7;
	// System.Boolean BarcodeCam::isQuit
	bool ___isQuit_8;
	// System.String BarcodeCam::LastResult
	String_t* ___LastResult_9;
	// System.Boolean BarcodeCam::hasResult
	bool ___hasResult_10;
};

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WebCamTexture
struct WebCamTexture_t1290350902;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3699081103;

#include "Vuforia_UnityExtensions_Vuforia_WebCamTexAdaptor2229337627.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamTexAdaptorImpl
struct  WebCamTexAdaptorImpl_t139577819  : public WebCamTexAdaptor_t2229337627
{
public:
	// UnityEngine.WebCamTexture Vuforia.WebCamTexAdaptorImpl::mWebCamTexture
	WebCamTexture_t1290350902 * ___mWebCamTexture_0;
	// UnityEngine.AsyncOperation Vuforia.WebCamTexAdaptorImpl::mCheckCameraPermissions
	AsyncOperation_t3699081103 * ___mCheckCameraPermissions_1;

public:
	inline static int32_t get_offset_of_mWebCamTexture_0() { return static_cast<int32_t>(offsetof(WebCamTexAdaptorImpl_t139577819, ___mWebCamTexture_0)); }
	inline WebCamTexture_t1290350902 * get_mWebCamTexture_0() const { return ___mWebCamTexture_0; }
	inline WebCamTexture_t1290350902 ** get_address_of_mWebCamTexture_0() { return &___mWebCamTexture_0; }
	inline void set_mWebCamTexture_0(WebCamTexture_t1290350902 * value)
	{
		___mWebCamTexture_0 = value;
		Il2CppCodeGenWriteBarrier(&___mWebCamTexture_0, value);
	}

	inline static int32_t get_offset_of_mCheckCameraPermissions_1() { return static_cast<int32_t>(offsetof(WebCamTexAdaptorImpl_t139577819, ___mCheckCameraPermissions_1)); }
	inline AsyncOperation_t3699081103 * get_mCheckCameraPermissions_1() const { return ___mCheckCameraPermissions_1; }
	inline AsyncOperation_t3699081103 ** get_address_of_mCheckCameraPermissions_1() { return &___mCheckCameraPermissions_1; }
	inline void set_mCheckCameraPermissions_1(AsyncOperation_t3699081103 * value)
	{
		___mCheckCameraPermissions_1 = value;
		Il2CppCodeGenWriteBarrier(&___mCheckCameraPermissions_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Captive portal helper Android JNI declarations
// summary: Declares JNI functions for Android that return the captive portal server URL and report network connectivity.
// ---

#ifndef COMPONENTS_SECURITY_INTERSTITIALS_CONTENT_CAPTIVE_PORTAL_HELPER_ANDROID_H_
#define COMPONENTS_SECURITY_INTERSTITIALS_CONTENT_CAPTIVE_PORTAL_HELPER_ANDROID_H_

#include <jni.h>
#include <string>

namespace security_interstitials {

std::string GetCaptivePortalServerUrl(JNIEnv* env);

void ReportNetworkConnectivity(JNIEnv* env);

}  // namespace security_interstitials

#endif  // COMPONENTS_SECURITY_INTERSTITIALS_CONTENT_CAPTIVE_PORTAL_HELPER_ANDROID_H_

// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android JNI bindings for the policy service factory
// summary: Exposes the global and per-profile policy services to Java through JNI functions on Android.
// ---

#include "chrome/browser/browser_process.h"
#include "chrome/browser/policy/chrome_browser_policy_connector.h"
#include "chrome/browser/policy/profile_policy_connector.h"
#include "chrome/browser/profiles/profile.h"
#include "components/policy/core/common/android/policy_service_android.h"
#include "components/policy/core/common/policy_service.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/browser/policy/android/jni_headers/PolicyServiceFactory_jni.h"

namespace policy {
namespace android {

static base::android::ScopedJavaLocalRef<jobject>
JNI_PolicyServiceFactory_GetGlobalPolicyService(JNIEnv* env) {
  return g_browser_process->policy_service()
      ->GetPolicyServiceAndroid()
      ->GetJavaObject();
}

static base::android::ScopedJavaLocalRef<jobject>
JNI_PolicyServiceFactory_GetProfilePolicyService(JNIEnv* env,
                                                 Profile* profile) {
  CHECK(profile, base::NotFatalUntil::M162);
  return profile->GetProfilePolicyConnector()
      ->policy_service()
      ->GetPolicyServiceAndroid()
      ->GetJavaObject();
}

}  // namespace android
}  // namespace policy

DEFINE_JNI(PolicyServiceFactory)

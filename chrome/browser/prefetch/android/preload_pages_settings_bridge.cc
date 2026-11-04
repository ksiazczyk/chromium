// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Preload pages settings JNI bridge
// summary: C++ JNI bridge exposing the preload pages state to Java, including getting, setting, and checking whether network prediction is managed by policy.
// ---

#include <jni.h>

#include "chrome/browser/prefetch/pref_names.h"
#include "chrome/browser/preloading/preloading_prefs.h"
#include "chrome/browser/profiles/profile.h"
#include "components/metrics/metrics_pref_names.h"
#include "components/prefs/pref_service.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/browser/prefetch/android/jni_headers/PreloadPagesSettingsBridge_jni.h"

namespace prefetch {

static int32_t JNI_PreloadPagesSettingsBridge_GetState(JNIEnv* env,
                                                       Profile* profile) {
  return static_cast<int>(prefetch::GetPreloadPagesState(*profile->GetPrefs()));
}

static bool JNI_PreloadPagesSettingsBridge_IsNetworkPredictionManaged(
    JNIEnv* env,
    Profile* profile) {
  return profile->GetPrefs()->IsManagedPreference(
      prefetch::prefs::kNetworkPredictionOptions);
}

static void JNI_PreloadPagesSettingsBridge_SetState(JNIEnv* env,
                                                    Profile* profile,
                                                    int32_t state) {
  prefetch::SetPreloadPagesState(
      profile->GetPrefs(), static_cast<prefetch::PreloadPagesState>(state));
}

}  // namespace prefetch

DEFINE_JNI(PreloadPagesSettingsBridge)

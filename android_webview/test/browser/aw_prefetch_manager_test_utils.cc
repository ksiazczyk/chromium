// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Prefetch manager test utility
// summary: JNI test helper that installs a testing pref service to set or clear the latest prefetch origin and JavaScript-enabled state for AwPrefetchManager tests.
// relations:
//   - depends_on /android_webview/browser/prefetch/aw_prefetch_manager.h
//   - depends_on /android_webview/browser/prefetch/aw_prefetch_prefs.h
//   - depends_on /base/android/jni_string.h
// ---

#include "android_webview/browser/prefetch/aw_prefetch_manager.h"
#include "android_webview/browser/prefetch/aw_prefetch_prefs.h"
#include "base/android/jni_string.h"
#include "base/no_destructor.h"
#include "components/prefs/pref_registry_simple.h"
#include "components/prefs/testing_pref_service.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "android_webview/test/webview_instrumentation_test_native_jni/AwPrefetchTestUtil_jni.h"

namespace android_webview {

static void JNI_AwPrefetchTestUtil_SetLatestPrefetchInfoForTesting(
    JNIEnv* env,
    const std::string& origin,
    bool javascript_enabled) {
  static base::NoDestructor<TestingPrefServiceSimple> testing_prefs;
  static bool registered = false;
  if (!registered) {
    testing_prefs->registry()->RegisterStringPref(
        prefs::kAwPrefetchLatestOrigin, "");
    testing_prefs->registry()->RegisterBooleanPref(
        prefs::kAwPrefetchLatestJavascriptEnabled, false);
    registered = true;
  }
  testing_prefs->SetString(prefs::kAwPrefetchLatestOrigin, origin);
  testing_prefs->SetBoolean(prefs::kAwPrefetchLatestJavascriptEnabled,
                            javascript_enabled);
  AwPrefetchManager::SetPrefServiceForTesting(testing_prefs.get());
}

static void JNI_AwPrefetchTestUtil_ClearLatestPrefetchInfoForTesting(
    JNIEnv* env) {
  AwPrefetchManager::SetPrefServiceForTesting(nullptr);
}

}  // namespace android_webview

DEFINE_JNI(AwPrefetchTestUtil)

// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RevenueStats JNI bridge for search client and RLZ values
// summary: JNI implementation that stores the Android search client and RLZ parameter values used by search terms data.
// ---

#include <string>

#include "base/android/jni_string.h"
#include "chrome/browser/search_engines/ui_thread_search_terms_data_android.h"
#include "third_party/jni_zero/default_conversions.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/android/chrome_jni_headers/RevenueStats_jni.h"

namespace chrome {
namespace android {

static void JNI_RevenueStats_SetSearchClient(const std::string& client) {
  SearchTermsDataAndroid::GetSearchClient() = client;
}

static void JNI_RevenueStats_SetRlzParameterValue(const std::u16string& rlz) {
  SearchTermsDataAndroid::GetRlzParameterValue() = rlz;
}

}  // namespace android
}  // namespace chrome

DEFINE_JNI(RevenueStats)

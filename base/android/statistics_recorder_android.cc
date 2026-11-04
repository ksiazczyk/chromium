// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: StatisticsRecorder JNI bridge exposing metrics as JSON
// summary: Exposes base::StatisticsRecorder::ToJSON to Java via JNI so histogram data can be retrieved as JSON.
// ---

#include "base/metrics/statistics_recorder.h"

#include <string>

#include "base/android/jni_string.h"
#include "base/metrics/histogram_base.h"
#include "base/system/sys_info.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "base/metrics_jni/StatisticsRecorderAndroid_jni.h"

namespace base {
namespace android {

static std::string JNI_StatisticsRecorderAndroid_ToJson(
    JNIEnv* env,
    JSONVerbosityLevel verbosityLevel) {
  return base::StatisticsRecorder::ToJSON(verbosityLevel);
}

DEFINE_JNI(StatisticsRecorderAndroid)

}  // namespace android
}  // namespace base

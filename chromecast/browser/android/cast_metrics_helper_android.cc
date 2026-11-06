// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JNI bindings for Cast metrics helper
// summary: C++ source providing JNI entry points that log media play and pause events through the CastMetricsHelper instance.
// ---

#include "chromecast/base/metrics/cast_metrics_helper.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chromecast/browser/android/jni_headers/CastMetricsHelper_jni.h"

namespace chromecast {
namespace shell {

static void JNI_CastMetricsHelper_LogMediaPlay(JNIEnv* env) {
  metrics::CastMetricsHelper::GetInstance()->LogMediaPlay();
}

static void JNI_CastMetricsHelper_LogMediaPause(JNIEnv* env) {
  metrics::CastMetricsHelper::GetInstance()->LogMediaPause();
}

}  // namespace shell
}  // namespace chromecast

DEFINE_JNI(CastMetricsHelper)

// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Renderer process metrics provider test utility
// summary: JNI test helper that forces the renderer process metrics provider to provide current session data so histograms can be recorded during tests.
// relations:
//   - depends_on /android_webview/browser/metrics/renderer_process_metrics_provider.h
// ---


#include "android_webview/browser/metrics/renderer_process_metrics_provider.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "android_webview/test/webview_instrumentation_test_native_jni/RendererProcessMetricsProviderUtils_jni.h"

namespace android_webview {

// static
static void JNI_RendererProcessMetricsProviderUtils_ForceRecordHistograms(
    JNIEnv* env) {
  RendererProcessMetricsProvider().ProvideCurrentSessionData(nullptr);
}

}  // namespace android_webview

DEFINE_JNI(RendererProcessMetricsProviderUtils)

// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JNI bridge for the content capture feature flag
// summary: Implements a JNI method that reports whether content capture is enabled by delegating to the shared content capture feature flag.
// ---

#include "components/content_capture/common/content_capture_features.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "components/content_capture/android/jni_headers/ContentCaptureFeatures_jni.h"

static bool JNI_ContentCaptureFeatures_IsEnabled(JNIEnv* env) {
  return content_capture::features::IsContentCaptureEnabled();
}

DEFINE_JNI(ContentCaptureFeatures)

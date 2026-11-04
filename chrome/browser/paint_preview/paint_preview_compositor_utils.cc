// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android JNI utils for compositor warmup
// summary: Android JNI glue that warms up or stops the shared paint preview compositor service.
// ---

#include "components/paint_preview/browser/warm_compositor.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/browser/paint_preview/android/jni_headers/PaintPreviewCompositorUtils_jni.h"

namespace paint_preview {

static void JNI_PaintPreviewCompositorUtils_WarmupCompositor(JNIEnv* env) {
  WarmCompositor::GetInstance()->WarmupCompositor();
}

static bool JNI_PaintPreviewCompositorUtils_StopWarmCompositor(JNIEnv* env) {
  return static_cast<bool>(WarmCompositor::GetInstance()->StopCompositor());
}

}  // namespace paint_preview

DEFINE_JNI(PaintPreviewCompositorUtils)

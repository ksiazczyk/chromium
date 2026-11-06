// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Throw uncaught exception JNI helper
// summary: Implements the Android JNI bridge that throws an uncaught Java exception which fully unwinds the Java stack without triggering a JNI CheckException crash.
// ---

#include "components/viz/service/gl/throw_uncaught_exception.h"

#include "base/android/jni_android.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "components/viz/service/service_jni_headers/ThrowUncaughtException_jni.h"

namespace viz {

void ThrowUncaughtException() {
  Java_ThrowUncaughtException_post(base::android::AttachCurrentThread());
}

}  // namespace viz

DEFINE_JNI(ThrowUncaughtException)

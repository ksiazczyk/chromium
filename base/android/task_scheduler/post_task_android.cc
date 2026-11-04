// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PostTaskAndroid JNI bridge implementation
// summary: Implements the JNI bridge to Java PostTask, signaling native scheduler readiness and resetting task runners for testing.
// ---

#include "base/android/task_scheduler/post_task_android.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "base/tasks_jni/PostTask_jni.h"

namespace base {

// static
void PostTaskAndroid::SignalNativeSchedulerReady() {
  Java_PostTask_onNativeSchedulerReady(jni_zero::AttachCurrentThread());
}

// static
void PostTaskAndroid::ResetTaskRunnerForTesting() {
  Java_PostTask_resetTaskRunner(jni_zero::AttachCurrentThread());
}

}  // namespace base

DEFINE_JNI(PostTask)

// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Contextual tasks Android JNI utilities
// summary: Exposes the contextual tasks UI enabled flag to Java through a JNI binding for Android.
// ---

#include "components/contextual_tasks/public/features.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/browser/contextual_tasks/utils_jni_headers/ContextualTasksUtils_jni.h"

static bool JNI_ContextualTasksUtils_IsContextualTasksUiEnabled() {
  return contextual_tasks::IsContextualTasksUIEnabled();
}

DEFINE_JNI(ContextualTasksUtils)

// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Password manager test utils bridge JNI implementation
// summary: JNI bridge exposing test helpers that disable server predictions and set up fake GMS Core backends.
// ---

#include <jni.h>

#include "base/android/jni_android.h"
#include "components/password_manager/core/browser/password_form_manager.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/browser/password_manager/android/test_support_jni_headers/PasswordManagerTestUtilsBridge_jni.h"

static void JNI_PasswordManagerTestUtilsBridge_DisableServerPredictions(
    JNIEnv* env) {
  password_manager::PasswordFormManager::
      DisableFillingServerPredictionsForTesting();
}

void SetUpGmsCoreFakeBackends() {
  Java_PasswordManagerTestUtilsBridge_setUpGmsCoreFakeBackends(
      jni_zero::AttachCurrentThread());
}

DEFINE_JNI(PasswordManagerTestUtilsBridge)

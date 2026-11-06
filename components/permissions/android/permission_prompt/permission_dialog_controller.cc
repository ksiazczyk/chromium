// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Permission dialog controller JNI bridge implementation
// summary: Bridges native code to the Java PermissionDialogController for creating dialogs and showing or dismissing clapper quiet and result icons.
// ---

#include "components/permissions/android/permission_prompt/permission_dialog_controller.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "components/permissions/android/jni_headers/PermissionDialogController_jni.h"

namespace permissions {

// static
void PermissionDialogController::CreateDialog(
    JNIEnv* env,
    const base::android::JavaRef<jobject>& delegate) {
  Java_PermissionDialogController_createDialog(env, delegate);
}

// static
void PermissionDialogController::ShowPermissionClapperQuietIcon(
    JNIEnv* env,
    const base::android::JavaRef<jobject>& window) {
  Java_PermissionDialogController_showPermissionClapperQuietIcon(env, window);
}

// static
void PermissionDialogController::DismissPermissionClapperQuietIcon(
    JNIEnv* env,
    const base::android::JavaRef<jobject>& window) {
  Java_PermissionDialogController_dismissPermissionClapperQuietIcon(env,
                                                                    window);
}

// static
void PermissionDialogController::ShowLoudClapperDialogResultIcon(
    JNIEnv* env,
    const base::android::JavaRef<jobject>& window,
    int content_setting) {
  Java_PermissionDialogController_showLoudClapperDialogResultIcon(
      env, window, content_setting);
}

}  // namespace permissions

DEFINE_JNI(PermissionDialogController)

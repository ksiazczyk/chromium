// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android bytes formatting JNI bridge
// summary: JNI bridge that formats byte sizes as human-readable transfer speed strings for Android by wrapping ui/base bytes formatting.
// ---

#include "ui/base/text/bytes_formatting.h"

#include <jni.h>

#include "base/android/jni_string.h"
#include "base/byte_size.h"
#include "base/numerics/safe_conversions.h"
#include "ui/android/ui_android_jni_headers/BytesFormatting_jni.h"

namespace ui {

static jni_zero::ScopedJavaLocalRef<jstring> JNI_BytesFormatting_FormatSpeed(
    JNIEnv* env,
    int64_t speed) {
  return base::android::ConvertUTF16ToJavaString(
      env, FormatSpeed(base::ByteSize(base::checked_cast<uint64_t>(speed))));
}

}  // namespace ui

DEFINE_JNI(BytesFormatting)

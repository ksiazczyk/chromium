// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file encapsulates the JNI headers generated for IntStringCallback, so
// that the methods defined in the generated headers only end up in one object
// file. This is similar to //base/android/callback_android.*.

// ---docerion
// type: source
// title: IntStringCallback JNI implementation
// summary: Implements the JNI bridge for IntStringCallback, invoking a Java callback with an integer and string argument.
// ---

#include "base/android/int_string_callback.h"

#include <jni.h>

#include "base/android/jni_string.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "base/jni_callback_jni/IntStringCallback_jni.h"

namespace base {
namespace android {

void RunIntStringCallbackAndroid(const JavaRef<jobject>& callback,
                                 int int_arg,
                                 const std::string& str_arg) {
  JNIEnv* env = jni_zero::AttachCurrentThread();
  Java_IntStringCallback_onResult(env, callback, int_arg, str_arg);
}

}  // namespace android
}  // namespace base

DEFINE_JNI(IntStringCallback)

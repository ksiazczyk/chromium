// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JNI native method registration API
// summary: Declares RegisterNativeMethods for registering JNI bindings from an array of registration methods, returning whether registration succeeded.
// ---

#ifndef BASE_ANDROID_JNI_REGISTRAR_H_
#define BASE_ANDROID_JNI_REGISTRAR_H_

#include <jni.h>
#include <stddef.h>

#include "base/base_export.h"

namespace base {
namespace android {

struct RegistrationMethod;

// Registers the JNI bindings for the specified |method| definition containing
// |count| elements.  Returns whether the registration of the given methods
// succeeded.
BASE_EXPORT bool RegisterNativeMethods(JNIEnv* env,
                                       const RegistrationMethod* method,
                                       size_t count);

}  // namespace android
}  // namespace base

#endif  // BASE_ANDROID_JNI_REGISTRAR_H_

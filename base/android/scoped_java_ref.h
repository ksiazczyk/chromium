// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped Java reference type aliases
// summary: Re-exports jni_zero JavaRef, ScopedJavaLocalRef, ScopedJavaGlobalRef and ScopedJavaLocalFrame types in the base::android namespace.
// ---

#ifndef BASE_ANDROID_SCOPED_JAVA_REF_H_
#define BASE_ANDROID_SCOPED_JAVA_REF_H_

#include "third_party/jni_zero/jni_zero.h"

namespace base {
namespace android {

using ScopedJavaLocalFrame = jni_zero::ScopedJavaLocalFrame;
template <typename T = jobject>
using JavaRef = jni_zero::JavaRef<T>;
template <typename T = jobject>
using ScopedJavaLocalRef = jni_zero::ScopedJavaLocalRef<T>;
template <typename T = jobject>
using ScopedJavaGlobalRef = jni_zero::ScopedJavaGlobalRef<T>;

}  // namespace android
}  // namespace base

#endif  // BASE_ANDROID_SCOPED_JAVA_REF_H_

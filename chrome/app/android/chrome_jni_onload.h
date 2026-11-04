// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android JNI onload initialization header
// summary: Declares OnJNIOnLoadInit, the Android hook run when the Chrome library is loaded.
// ---

#ifndef CHROME_APP_ANDROID_CHROME_JNI_ONLOAD_H_
#define CHROME_APP_ANDROID_CHROME_JNI_ONLOAD_H_

namespace android {

bool OnJNIOnLoadInit();

}  // namespace android

#endif  // CHROME_APP_ANDROID_CHROME_JNI_ONLOAD_H_

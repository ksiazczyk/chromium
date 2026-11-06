// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Net test JNI onload initialization header
// summary: Declares net::test::OnJNIOnLoadInit, the startup hook invoked by the net test entry point on Android.
// ---

#ifndef NET_TEST_ANDROID_NET_TEST_JNI_ONLOAD_H_
#define NET_TEST_ANDROID_NET_TEST_JNI_ONLOAD_H_

#include <jni.h>

namespace net::test {

bool OnJNIOnLoadInit();

}  // namespace net::test

#endif  // NET_TEST_ANDROID_NET_TEST_JNI_ONLOAD_H_

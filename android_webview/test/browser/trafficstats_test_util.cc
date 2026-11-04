// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TrafficStats tagged bytes test utility
// summary: JNI test helper that exposes net tagged byte queries, reporting whether tagged bytes can be read and returning the byte count for an expected tag.
// relations:
//   - depends_on /net/socket/socket_test_util.h
// ---

#include "net/socket/socket_test_util.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "android_webview/test/webview_instrumentation_test_native_jni/TrafficStatsTestUtil_jni.h"

namespace android_webview {

static bool JNI_TrafficStatsTestUtil_CanGetTaggedBytes(JNIEnv* env) {
  return net::CanGetTaggedBytes();
}

static int64_t JNI_TrafficStatsTestUtil_GetTaggedBytes(JNIEnv* env,
                                                       int32_t jexpected_tag) {
  return net::GetTaggedBytes(jexpected_tag);
}

}  // namespace android_webview

DEFINE_JNI(TrafficStatsTestUtil)

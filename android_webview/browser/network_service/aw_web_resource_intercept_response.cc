// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwWebResourceInterceptResponse JNI wrapper implementation
// summary: Implements the C++ wrapper around the Java AwWebResourceInterceptResponse object, exposing whether an exception was raised and the intercepted web resource response.
// relations:
//   - implements /android_webview/browser/network_service/aw_web_resource_intercept_response.h
//   - depends_on /base/android/jni_android.h
//   - depends_on /components/embedder_support/android/util/web_resource_response.h
// ---

#include "android_webview/browser/network_service/aw_web_resource_intercept_response.h"

#include <memory>
#include <utility>

#include "base/android/jni_android.h"
#include "components/embedder_support/android/util/web_resource_response.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "android_webview/browser_jni_headers/AwWebResourceInterceptResponse_jni.h"

using base::android::ScopedJavaLocalRef;

namespace android_webview {

AwWebResourceInterceptResponse::AwWebResourceInterceptResponse(
    const base::android::JavaRef<jobject>& obj)
    : java_object_(obj) {}

AwWebResourceInterceptResponse::~AwWebResourceInterceptResponse() = default;
AwWebResourceInterceptResponse::AwWebResourceInterceptResponse(
    AwWebResourceInterceptResponse&) = default;
AwWebResourceInterceptResponse& AwWebResourceInterceptResponse::operator=(
    AwWebResourceInterceptResponse&) = default;
AwWebResourceInterceptResponse::AwWebResourceInterceptResponse(
    AwWebResourceInterceptResponse&&) = default;
AwWebResourceInterceptResponse& AwWebResourceInterceptResponse::operator=(
    AwWebResourceInterceptResponse&&) = default;

bool AwWebResourceInterceptResponse::RaisedException(JNIEnv* env) const {
  return Java_AwWebResourceInterceptResponse_getRaisedException(env,
                                                                java_object_);
}

bool AwWebResourceInterceptResponse::HasResponse(JNIEnv* env) const {
  return !!Java_AwWebResourceInterceptResponse_getResponse(env, java_object_);
}

std::unique_ptr<embedder_support::WebResourceResponse>
AwWebResourceInterceptResponse::GetResponse(JNIEnv* env) const {
  return Java_AwWebResourceInterceptResponse_getResponse(env, java_object_);
}

}  // namespace android_webview

DEFINE_JNI(AwWebResourceInterceptResponse)

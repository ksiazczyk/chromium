// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwResource JNI implementation
// summary: Fetches the key-system UUID mapping configuration from the Java AwResource class through a JNI call.
// relations:
//   - depends_on /android_webview/common/aw_resource.h
//   - depends_on /base/android/jni_array.h
//   - depends_on /base/android/jni_string.h
// ---

#include "android_webview/common/aw_resource.h"

#include "base/android/jni_array.h"
#include "base/android/jni_string.h"
#include "base/android/scoped_java_ref.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "android_webview/common_jni/AwResource_jni.h"

using base::android::ScopedJavaLocalRef;

namespace android_webview {
namespace AwResource {

std::vector<std::string> GetConfigKeySystemUuidMapping() {
  JNIEnv* env = jni_zero::AttachCurrentThread();
  std::vector<std::string> key_system_uuid_mappings;
  ScopedJavaLocalRef<jobjectArray> mappings =
      Java_AwResource_getConfigKeySystemUuidMapping(env);
  base::android::AppendJavaStringArrayToStringVector(env, mappings,
                                                     &key_system_uuid_mappings);
  return key_system_uuid_mappings;
}

}  // namespace AwResource
}  // namespace android_webview

DEFINE_JNI(AwResource)

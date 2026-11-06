// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Load URL params JNI helper
// summary: Provides a JNI function that checks whether a URL supplied from Java uses the data scheme.
// ---

#include <jni.h>

#include "base/android/jni_string.h"
#include "content/public/browser/navigation_controller.h"
#include "content/public/common/url_constants.h"
#include "url/gurl.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "content/public/android/content_jni_headers/LoadUrlParams_jni.h"

using base::android::JavaRef;

namespace content {

static bool JNI_LoadUrlParams_IsDataScheme(JNIEnv* env,
                                           const JavaRef<jstring>& jurl) {
  GURL url(base::android::ConvertJavaStringToUTF8(env, jurl));
  return url.SchemeIs(url::kDataScheme);
}

}  // namespace content

DEFINE_JNI(LoadUrlParams)

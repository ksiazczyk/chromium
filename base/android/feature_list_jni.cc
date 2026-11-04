// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JNI bindings for base FeatureList
// summary: Implements a JNI method that reports whether the native base FeatureList instance is initialized.
// ---

#include "base/feature_list.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "base/features_jni/FeatureList_jni.h"

namespace base {
namespace android {

static bool JNI_FeatureList_IsInitialized(JNIEnv* env) {
  return !!base::FeatureList::GetInstance();
}

}  // namespace android
}  // namespace base

DEFINE_JNI(FeatureList)

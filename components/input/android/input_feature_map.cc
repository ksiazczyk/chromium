// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JNI feature map for input features
// summary: Exposes the input component's feature flags to Java through a base FeatureMap accessed via JNI.
// ---

#include "base/android/feature_map.h"
#include "base/feature_list.h"
#include "base/no_destructor.h"
#include "components/input/features.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "components/input/android/jni_headers/InputFeatureMap_jni.h"

namespace input {

namespace {

// Array of features exposed through the Java InputFeatureMap API.
const base::Feature* const kFeaturesExposedToJava[] = {
    &input::features::kUseAndroidBufferedInputDispatch,
};

// static
base::android::FeatureMap* GetFeatureMap() {
  static base::NoDestructor<base::android::FeatureMap> kFeatureMap(
      kFeaturesExposedToJava);
  return kFeatureMap.get();
}

}  // namespace

static int64_t JNI_InputFeatureMap_GetNativeMap(JNIEnv* env) {
  return reinterpret_cast<int64_t>(GetFeatureMap());
}

}  // namespace input

DEFINE_JNI(InputFeatureMap)

// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Accessibility features JNI map
// summary: Exposes native accessibility feature flags to Java through a base::android::FeatureMap and generated JNI bindings.
// ---

#include "base/android/feature_map.h"
#include "base/no_destructor.h"
#include "ui/accessibility/accessibility_features.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "ui/accessibility/ax_base_jni_headers/AccessibilityFeaturesMap_jni.h"

namespace ui {

namespace {

// Array of features exposed through the Java AccessibilityFeaturesMap API.
const base::Feature* const kFeaturesExposedToJava[] = {
    &features::kAccessibilityAndroidMath,
    &features::kAccessibilityHandleOccludingViews,
    &features::kAccessibilityTextFormatting,
    &features::kReadAloudNative,
    &features::kReadAloudServerSynthesizer,
};

// static
base::android::FeatureMap* GetFeatureMap() {
  static base::NoDestructor<base::android::FeatureMap> kFeatureMap(std::vector(
      std::begin(kFeaturesExposedToJava), std::end(kFeaturesExposedToJava)));
  return kFeatureMap.get();
}

}  // namespace

static int64_t JNI_AccessibilityFeaturesMap_GetNativeMap(JNIEnv* env) {
  return reinterpret_cast<int64_t>(GetFeatureMap());
}

}  // namespace ui

DEFINE_JNI(AccessibilityFeaturesMap)

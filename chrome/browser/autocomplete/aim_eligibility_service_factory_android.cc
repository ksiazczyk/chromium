// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android JNI bindings for the AIM eligibility service factory
// summary: Exposes AIM starter pack eligibility checks to Java through JNI for Android profiles.
// ---

#include "chrome/browser/autocomplete/aim_eligibility_service_factory.h"

#include "base/android/jni_android.h"
#include "chrome/browser/profiles/profile.h"
#include "components/omnibox/browser/omnibox_field_trial.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/browser/search_engines/android/jni_headers/AimEligibilityServiceFactory_jni.h"

static bool JNI_AimEligibilityServiceFactory_IsAimStarterPackEnabled(
    JNIEnv* env,
    Profile* profile) {
  CHECK(profile, base::NotFatalUntil::M161);
  return OmniboxFieldTrial::IsAimStarterPackEnabled(
      AimEligibilityServiceFactory::GetForProfile(profile));
}

DEFINE_JNI(AimEligibilityServiceFactory)

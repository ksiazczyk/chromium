// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Animation policy preference constants
// summary: Defines animation policy value constants and registers the animation policy string preference as syncable.
// ---

#include "chrome/browser/accessibility/animation_policy_prefs.h"

#include "chrome/common/pref_names.h"
#include "components/pref_registry/pref_registry_syncable.h"

const char kAnimationPolicyAllowed[] = "allowed";
const char kAnimationPolicyOnce[] = "once";
const char kAnimationPolicyNone[] = "none";

void RegisterAnimationPolicyPrefs(user_prefs::PrefRegistrySyncable* registry) {
  registry->RegisterStringPref(prefs::kAnimationPolicy,
                               kAnimationPolicyAllowed);
}

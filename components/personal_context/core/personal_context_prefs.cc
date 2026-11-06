// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Personal Context profile preferences registration
// summary: Registers profile preferences for Personal Context notice impressions, the Autofill settings toggle, and the stored private key.
// ---

#include "components/personal_context/core/personal_context_prefs.h"

#include "base/time/time.h"
#include "components/prefs/pref_registry_simple.h"

namespace personal_context::prefs {

void RegisterProfilePrefs(PrefRegistrySimple* registry) {
  registry->RegisterBooleanPref(
      kPersonalContextAmbientAutofillNoticeShouldBeShown, true);

  registry->RegisterIntegerPref(
      kPersonalContextAmbientAutofillNoticeImpressionCount, 0);

  registry->RegisterTimePref(kAmbientAutofillNoticeAcknowledgedTimestamp,
                             base::Time());

  registry->RegisterBooleanPref(kPersonalContextAtMemoryNoticeShouldBeShown,
                                true);

  registry->RegisterIntegerPref(kPersonalContextAtMemoryNoticeImpressionCount,
                                0);

  registry->RegisterBooleanPref(kPersonalContextInAutofillSettingsToggleStatus,
                                true);

  registry->RegisterStringPref(kPersonalContextPrivateKey, std::string());
}

}  // namespace personal_context::prefs

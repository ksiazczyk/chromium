// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PIN storage prefs registration
// summary: Registers the pref entries used for legacy pref-based PIN storage, including salt, secret and failed attempt count.
// ---

#include "chromeos/ash/components/osauth/impl/prefs.h"

#include "ash/constants/ash_pref_names.h"
#include "components/prefs/pref_registry_simple.h"

namespace ash {

void RegisterPinStoragePrefs(PrefRegistrySimple* registry) {
  registry->RegisterStringPref(prefs::kQuickUnlockPinSalt, "");
  registry->RegisterStringPref(prefs::kQuickUnlockPinSecret, "");
  registry->RegisterIntegerPref(prefs::kQuickUnlockPinFailedAttempts, 0);
}

}  // namespace ash

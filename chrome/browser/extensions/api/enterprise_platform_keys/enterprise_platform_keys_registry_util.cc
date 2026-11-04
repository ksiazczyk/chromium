// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Profile preference registration for enterprise platform keys
// summary: Registers the attestation extension allowlist profile preference used by the enterprise platform keys API.
// ---

#include "chrome/browser/extensions/api/enterprise_platform_keys/enterprise_platform_keys_registry_util.h"

#include "chrome/common/pref_names.h"
#include "components/pref_registry/pref_registry_syncable.h"

namespace extensions {

namespace platform_keys {

void EnterprisePlatformKeysRegisterProfilePrefs(
    user_prefs::PrefRegistrySyncable* registry) {
  registry->RegisterListPref(prefs::kAttestationExtensionAllowlist);
}

}  // namespace platform_keys

}  // namespace extensions

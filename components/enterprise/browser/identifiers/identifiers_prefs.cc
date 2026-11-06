// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Identifiers profile preferences implementation
// summary: Registers the enterprise_profile_guid string preference used to store the generated profile GUID.
// ---

#include "components/enterprise/browser/identifiers/identifiers_prefs.h"

#include "components/prefs/pref_registry_simple.h"

namespace enterprise {

const char kProfileGUIDPref[] = "enterprise_profile_guid";

// static
void RegisterIdentifiersProfilePrefs(PrefRegistrySimple* registry) {
  registry->RegisterStringPref(kProfileGUIDPref, std::string());
}

}  // namespace enterprise

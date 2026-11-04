// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Contextual cueing prefs registration
// summary: Registers the profile list pref that tracks supported tools for zero state suggestions.
// ---

#include "chrome/browser/glic/suggestions/contextual_cueing_prefs.h"

#include "components/prefs/pref_registry.h"
#include "components/prefs/pref_registry_simple.h"

namespace glic::contextual_cueing::prefs {

void RegisterProfilePrefs(PrefRegistrySimple* registry) {
  registry->RegisterListPref(kZeroStateSuggestionsSupportedTools);
}

}  // namespace glic::contextual_cueing::prefs

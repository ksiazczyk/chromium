// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Context Hub profile preference registration
// summary: Registers the Context Hub profile preferences for the last AutoTodos generation time, the TabContextSync container id and the Topics fishfood feedback dictionary.
// ---

#include "chrome/browser/context_hub/prefs.h"

#include "base/time/time.h"
#include "components/prefs/pref_registry_simple.h"

namespace context_hub::prefs {

void RegisterProfilePrefs(PrefRegistrySimple* registry) {
  registry->RegisterTimePref(kContextHubLastAutoTodosGenerationTime,
                             base::Time());
  registry->RegisterStringPref(kContextHubTabContextSyncContainerId,
                               std::string());
  registry->RegisterDictionaryPref(kContextHubTopicsFishfoodFeedback);
}

}  // namespace context_hub::prefs

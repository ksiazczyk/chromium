// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tracing preference registration
// summary: Defines and registers the background_tracing.session_state dictionary preference used to persist background tracing session state.
// ---

#include "components/tracing/common/pref_names.h"

#include "components/prefs/pref_registry_simple.h"

namespace tracing {
const char kBackgroundTracingSessionState[] =
    "background_tracing.session_state";

void RegisterPrefs(PrefRegistrySimple* registry) {
  registry->RegisterDictionaryPref(kBackgroundTracingSessionState);
}

}  // namespace tracing

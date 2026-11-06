// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tracing preference names header
// summary: Declares the background tracing session state preference name constant and the preference registration function for the tracing component.
// ---

#ifndef COMPONENTS_TRACING_COMMON_PREF_NAMES_H_
#define COMPONENTS_TRACING_COMMON_PREF_NAMES_H_

#include "components/tracing/tracing_export.h"

class PrefRegistrySimple;

namespace tracing {

TRACING_EXPORT
extern const char kBackgroundTracingSessionState[];

TRACING_EXPORT
void RegisterPrefs(PrefRegistrySimple* registry);

}  // namespace tracing

#endif  // COMPONENTS_TRACING_COMMON_PREF_NAMES_H_

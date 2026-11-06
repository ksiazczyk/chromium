// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Context memory feature name helper declaration
// summary: Declares GetStringNameForContextMemoryFeature, which returns the equivalent string name for a context memory feature.
// ---

#ifndef COMPONENTS_PERSONAL_CONTEXT_CORE_CONTEXT_MEMORY_FEATURES_H_
#define COMPONENTS_PERSONAL_CONTEXT_CORE_CONTEXT_MEMORY_FEATURES_H_

#include <string_view>

#include "components/personal_context/proto/context_memory_service.pb.h"

namespace personal_context {

// Returns the equivalent string name for a `feature`.
std::string_view GetStringNameForContextMemoryFeature(
    proto::ContextMemoryFeature feature);

}  // namespace personal_context

#endif  // COMPONENTS_PERSONAL_CONTEXT_CORE_CONTEXT_MEMORY_FEATURES_H_

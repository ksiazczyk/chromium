// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Actor metrics declarations
// summary: Declares the function that records navigation gating list size histograms for the actor component.
// ---

#ifndef COMPONENTS_ACTOR_CORE_ACTOR_METRICS_H_
#define COMPONENTS_ACTOR_CORE_ACTOR_METRICS_H_

#include <cstddef>

namespace actor {

void RecordActorNavigationGatingListSize(size_t allow_list_size,
                                         size_t confirmed_list_size);

}  // namespace actor

#endif  // COMPONENTS_ACTOR_CORE_ACTOR_METRICS_H_

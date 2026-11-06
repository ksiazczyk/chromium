// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Actor navigation gating metrics
// summary: Records UMA histograms tracking the sizes of the actor navigation gating allow and confirmed site lists.
// ---

#include "components/actor/core/actor_metrics.h"

#include "base/metrics/histogram_functions.h"

namespace actor {

void RecordActorNavigationGatingListSize(size_t allow_list_size,
                                         size_t confirmed_list_size) {
  base::UmaHistogramCounts1000("Actor.NavigationGating.AllowListSize",
                               allow_list_size);
  base::UmaHistogramCounts1000("Actor.NavigationGating.ConfirmedListSize2",
                               confirmed_list_size);
}

}  // namespace actor

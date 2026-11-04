// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extended updates metrics recording implementation
// summary: Implements functions that record UMA histogram enumeration events for the extended updates dialog and its entry points in the ash namespace.
// relations:
//   - implements /ash/system/extended_updates/extended_updates_metrics.h
//   - depends_on /base/metrics/histogram_functions.h
// ---

#include "ash/system/extended_updates/extended_updates_metrics.h"

#include <string>

#include "base/metrics/histogram_functions.h"

namespace ash {

void RecordExtendedUpdatesDialogEvent(ExtendedUpdatesDialogEvent event) {
  base::UmaHistogramEnumeration(kExtendedUpdatesDialogEventMetric, event);
}

void RecordExtendedUpdatesEntryPointEvent(
    ExtendedUpdatesEntryPointEvent event) {
  base::UmaHistogramEnumeration(kExtendedUpdatesEntryPointEventMetric, event);
}

}  // namespace ash

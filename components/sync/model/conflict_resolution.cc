// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Conflict resolution metrics recording implementation
// summary: Implements recording of data type entity conflict resolution outcomes into per-data-type histograms.
// ---

#include "components/sync/model/conflict_resolution.h"

#include <string>

#include "base/metrics/histogram_functions.h"
#include "base/strings/strcat.h"

namespace syncer {

void RecordDataTypeEntityConflictResolution(
    DataType data_type,
    ConflictResolution resolution_type) {
  base::UmaHistogramEnumeration(
      base::StrCat({"Sync.DataTypeEntityConflictResolution.",
                    DataTypeToHistogramSuffix(data_type)}),
      resolution_type);
}

}  // namespace syncer

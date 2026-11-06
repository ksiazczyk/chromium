// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Blob storage feature flag definitions
// summary: Defines blob storage base features covering stateful memory pressure, Range header validation for blob URL fetches, and cross-partition fetch blocking.
// ---

#include "storage/browser/blob/features.h"

namespace features {

// Please keep features in alphabetical order.
BASE_FEATURE(kBlobStatefulMemoryPressure, base::FEATURE_DISABLED_BY_DEFAULT);

BASE_FEATURE(kBlobURLFetchRangeHeaderValidation,
             base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE(kBlockCrossPartitionBlobUrlFetching,
             base::FEATURE_ENABLED_BY_DEFAULT);

// Please keep features in alphabetical order.

}  // namespace features

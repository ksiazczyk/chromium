// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shape detection feature flags
// summary: Defines the kBarhopperAztecRefineTransformFallback feature, enabled by default, governing barcode detection behavior.
// ---

#include "services/shape_detection/features.h"

namespace features {

BASE_FEATURE(kBarhopperAztecRefineTransformFallback,
             base::FEATURE_ENABLED_BY_DEFAULT);

}  // namespace features

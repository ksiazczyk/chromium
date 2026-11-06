// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Base32 feature flag definition
// summary: Defines the kComponentsBase32InRust feature flag, disabled by default, that switches base32 to the Rust implementation.
// ---

#include "components/base32/features.h"

namespace base32::features {

BASE_FEATURE(kComponentsBase32InRust, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace base32::features

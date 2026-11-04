// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Child module feature flag definitions
// summary: Defines the kDynamicPatching browser feature flag, disabled by default, for dynamic child module detection and patching.
// ---

#include "chrome/browser/child_module/features.h"

namespace child_module::features {

BASE_FEATURE(kDynamicPatching, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace child_module::features

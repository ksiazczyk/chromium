// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fullscreen feature flag definitions
// summary: Defines feature flags controlling whether the fullscreen bubble uses an opaque background and shows the origin domain.
// ---

#include "components/fullscreen_control/fullscreen_features.h"

namespace features {

BASE_FEATURE(kFullscreenBubbleShowOpaque, base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE(kFullscreenBubbleShowOrigin, base::FEATURE_ENABLED_BY_DEFAULT);

}  // namespace features

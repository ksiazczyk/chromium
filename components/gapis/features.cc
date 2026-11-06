// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gapis feature flag definition
// summary: Defines the kEnableGapis feature flag, disabled by default, that gates initialization of the Gapis service.
// ---

#include "components/gapis/features.h"

namespace gapis {

BASE_FEATURE(kEnableGapis, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace gapis

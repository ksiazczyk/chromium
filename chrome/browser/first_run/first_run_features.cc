// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: First run feature definitions
// summary: Defines the kBookmarksImportOnFirstRun feature flag, enabled by default, for the first run bookmark import behavior.
// ---

#include "chrome/browser/first_run/first_run_features.h"

namespace features {

BASE_FEATURE(kBookmarksImportOnFirstRun, base::FEATURE_ENABLED_BY_DEFAULT);

}  // namespace features

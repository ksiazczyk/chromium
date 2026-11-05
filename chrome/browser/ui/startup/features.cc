// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Startup feature flags
// summary: Defines the kClearSessionStorageDiskStateOnStartup feature, enabled by default, for the browser startup UI.
// ---

#include "chrome/browser/ui/startup/features.h"

namespace features {

BASE_FEATURE(kClearSessionStorageDiskStateOnStartup,
             base::FEATURE_ENABLED_BY_DEFAULT);

}  // namespace features

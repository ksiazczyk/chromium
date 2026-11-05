// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TTC feature flag definitions
// summary: Defines disabled-by-default base features for enabling the TTC feature and its first run experience.
// ---

#include "chrome/browser/ttc/core/features.h"

namespace ttc {

BASE_FEATURE(kTtc, base::FEATURE_DISABLED_BY_DEFAULT);

BASE_FEATURE(kTtcFre, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace ttc

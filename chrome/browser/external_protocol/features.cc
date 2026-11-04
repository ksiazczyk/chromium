// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: External protocol feature definitions
// summary: Defines the kLocalOnlyAppProtocolPrefix feature flag, disabled by default, used to gate blocking of local+ scheme external protocol launches.
// ---

#include "chrome/browser/external_protocol/features.h"

namespace features {

BASE_FEATURE(kLocalOnlyAppProtocolPrefix, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace features

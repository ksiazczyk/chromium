// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page info action histogram constant
// summary: Defines the kWebsiteSettingsActionHistogram constant naming the histogram used to log Page Info actions on all platforms.
// ---

#include "components/page_info/core/page_info_action.h"

namespace page_info {

// Histogram name for when an action happens in Page Info used in all platforms.
const char kWebsiteSettingsActionHistogram[] = "WebsiteSettings.Action";

}  // namespace page_info

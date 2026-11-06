// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab groups feature flag definition
// summary: Defines the kUpdateTabGroupColors base feature, disabled by default, for the tab_groups component.
// ---

#include "components/tab_groups/features.h"

#include "base/feature_list.h"

namespace tab_groups {

BASE_FEATURE(kUpdateTabGroupColors, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace tab_groups

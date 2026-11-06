// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab groups feature flag declaration
// summary: Declares the kUpdateTabGroupColors feature with component export for use across the tab_groups component.
// ---

#ifndef COMPONENTS_TAB_GROUPS_FEATURES_H_
#define COMPONENTS_TAB_GROUPS_FEATURES_H_

#include "base/component_export.h"
#include "base/feature_list.h"

namespace tab_groups {

COMPONENT_EXPORT(TAB_GROUPS) BASE_DECLARE_FEATURE(kUpdateTabGroupColors);

}  // namespace tab_groups

#endif  // COMPONENTS_TAB_GROUPS_FEATURES_H_

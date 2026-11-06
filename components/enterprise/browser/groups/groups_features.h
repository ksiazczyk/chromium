// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise groups feature flag declarations
// summary: Declares the enterprise groups feature flags, including the experiments toggle and a fake group for Finch testing.
// ---

#ifndef COMPONENTS_ENTERPRISE_BROWSER_GROUPS_GROUPS_FEATURES_H_
#define COMPONENTS_ENTERPRISE_BROWSER_GROUPS_GROUPS_FEATURES_H_

#include "base/feature_list.h"

namespace enterprise_groups {

// Controls whether enterprise group IDs are copied to preferences.
BASE_DECLARE_FEATURE(kEnterpriseGroupsExperiments);

// Feature to test domain-based Finch control end-to-end.
BASE_DECLARE_FEATURE(kFakeEnterpriseGroup);

}  // namespace enterprise_groups

#endif  // COMPONENTS_ENTERPRISE_BROWSER_GROUPS_GROUPS_FEATURES_H_

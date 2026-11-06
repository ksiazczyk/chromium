// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise groups feature flag definitions
// summary: Defines the base feature flags that control whether enterprise group IDs are copied to preferences.
// ---

#include "components/enterprise/browser/groups/groups_features.h"

#include "base/feature_list.h"

namespace enterprise_groups {

BASE_FEATURE(kEnterpriseGroupsExperiments, base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE(kFakeEnterpriseGroup, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace enterprise_groups

// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise groups preference names
// summary: Defines the preference name constants for browser and profile enterprise group IDs and the registration function.
// ---

#ifndef COMPONENTS_ENTERPRISE_BROWSER_GROUPS_GROUPS_PREFS_H_
#define COMPONENTS_ENTERPRISE_BROWSER_GROUPS_GROUPS_PREFS_H_

class PrefRegistrySimple;

namespace enterprise_groups {

// The name of the preference that stores the enterprise group IDs from CBCM
// policy data.
inline constexpr char kEnterpriseGroupsBrowserPref[] =
    "enterprise_groups.browser";

// The name of the preference that stores the enterprise group IDs from user
// policy data.
inline constexpr char kEnterpriseGroupsProfilePref[] =
    "enterprise_groups.profiles";

void RegisterLocalStatePrefs(PrefRegistrySimple* registry);

}  // namespace enterprise_groups

#endif  // COMPONENTS_ENTERPRISE_BROWSER_GROUPS_GROUPS_PREFS_H_

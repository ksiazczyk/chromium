// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab group sync feature enablement interface
// summary: Declares the IsTabGroupSyncEnabled helper that callers use to check whether tab group sync is enabled for a profile's preferences.
// ---

#ifndef CHROME_BROWSER_TAB_GROUP_SYNC_FEATURE_UTILS_H_
#define CHROME_BROWSER_TAB_GROUP_SYNC_FEATURE_UTILS_H_

class PrefService;
namespace tab_groups {

bool IsTabGroupSyncEnabled(PrefService* pref_service);

}  // namespace tab_groups

#endif  // CHROME_BROWSER_TAB_GROUP_SYNC_FEATURE_UTILS_H_

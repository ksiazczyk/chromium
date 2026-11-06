// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab group action type enum
// summary: Defines an enum of actions a tab group can take, such as ungrouping, deleting, or leaving shared tab groups.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GROUP_ACTION_TYPE_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GROUP_ACTION_TYPE_H_

// Enum to represent an action that a tab group is going to take.
enum class TabGroupActionType {
  kUngroupTabGroup,
  kDeleteTabGroup,
  kLeaveSharedTabGroup,
  kDeleteSharedTabGroup,
  kDeleteOrKeepSharedTabGroup,
  kLeaveOrKeepSharedTabGroup,
  kCloseLastTabUnknownRole,
};

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GROUP_ACTION_TYPE_H_

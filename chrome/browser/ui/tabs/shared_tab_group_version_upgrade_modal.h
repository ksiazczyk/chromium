// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shared tab group version upgrade modal declarations
// summary: Declares functions to show a modal prompting a Chrome update when the client is too old for a shared tab group and a toast after a successful update.
// ---

#ifndef CHROME_BROWSER_UI_TABS_SHARED_TAB_GROUP_VERSION_UPGRADE_MODAL_H_
#define CHROME_BROWSER_UI_TABS_SHARED_TAB_GROUP_VERSION_UPGRADE_MODAL_H_

class BrowserWindowInterface;

namespace tab_groups {

// Displays a modal dialog prompting the user to update Chrome when their client
// is too old to open a shared tab group.
void MaybeShowSharedTabGroupVersionOutOfDateModal(
    BrowserWindowInterface* browser);

// Displays a toast notification after a successful Chrome update, indicating
// that the user can now see and use shared tab groups.
void MaybeShowSharedTabGroupVersionUpToDateToast(
    BrowserWindowInterface* browser);

}  // namespace tab_groups

#endif  // CHROME_BROWSER_UI_TABS_SHARED_TAB_GROUP_VERSION_UPGRADE_MODAL_H_

// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Create or edit tab group coordinator delegate protocol
// summary: Declares the delegate protocol that is notified when the user dismisses the CreateTabGroupCoordinator.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_CREATE_OR_EDIT_TAB_GROUP_COORDINATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_CREATE_OR_EDIT_TAB_GROUP_COORDINATOR_DELEGATE_H_

@class CreateTabGroupCoordinator;

// Delegate protocol for `CreateTabGroupCoordinator`.
@protocol CreateOrEditTabGroupCoordinatorDelegate

// Called when the user dismissed the `CreateTabGroupCoordinator`.
- (void)createOrEditTabGroupCoordinatorDidDismiss:
            (CreateTabGroupCoordinator*)coordinator
                                         animated:(BOOL)animated;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_CREATE_OR_EDIT_TAB_GROUP_COORDINATOR_DELEGATE_H_

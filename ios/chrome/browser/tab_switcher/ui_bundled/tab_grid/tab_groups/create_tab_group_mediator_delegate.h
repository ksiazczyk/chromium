// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Create tab group mediator delegate protocol
// summary: Declares the delegate protocol notified when the edited tab group is externally mutated, typically via tab group sync on another device.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_CREATE_TAB_GROUP_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_CREATE_TAB_GROUP_MEDIATOR_DELEGATE_H_

#import <Foundation/Foundation.h>

@class CreateTabGroupMediator;

// The delegate gets notified of CreateTabGroupMediator lifecycle events.
@protocol CreateTabGroupMediatorDelegate

// Notifies the delegate that the group that `mediator` is editing was
// externally deleted or its visual data changed (typically via Tab Group Sync
// on a different device).
- (void)createTabGroupMediatorEditedGroupWasExternallyMutated:
    (CreateTabGroupMediator*)mediator;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_CREATE_TAB_GROUP_MEDIATOR_DELEGATE_H_

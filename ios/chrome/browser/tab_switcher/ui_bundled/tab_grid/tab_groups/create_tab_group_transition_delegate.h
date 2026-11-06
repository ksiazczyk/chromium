// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Create tab group transition delegate interface
// summary: Declares the transitioning delegate that drives the custom presentation of the create tab group view.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_CREATE_TAB_GROUP_TRANSITION_DELEGATE_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_CREATE_TAB_GROUP_TRANSITION_DELEGATE_H_

#import <UIKit/UIKit.h>

// Transition delegate for the Create Tab Group.
@interface CreateTabGroupTransitionDelegate
    : NSObject <UIViewControllerTransitioningDelegate>

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_CREATE_TAB_GROUP_TRANSITION_DELEGATE_H_

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Policy Earl Grey matchers
// summary: Declares helpers to assert that collection buttons, context menu items and overflow menu elements are enabled or disabled.
// ---

#ifndef IOS_CHROME_BROWSER_POLICY_MODEL_POLICY_EARL_GREY_MATCHERS_H_
#define IOS_CHROME_BROWSER_POLICY_MODEL_POLICY_EARL_GREY_MATCHERS_H_

#import <Foundation/Foundation.h>

namespace policy {

// Tests if a button in a collection is enabled.
// `label_id` is the ID of the label associated with the item.
void AssertButtonInCollectionEnabled(int label_id);

// Tests if a button in a collection is disabled.
void AssertButtonInCollectionDisabled(int label_id);

// Tests if a context menu item is enabled.
void AssertContextMenuItemEnabled(int label_id);

// Tests if a context menu item is disabled.
void AssertContextMenuItemDisabled(int label_id);

// Tests if an overflow menu element of `toolsMenuView` is enabled.
void AssertOverflowMenuElementEnabled(NSString* accessibilityID);

// Tests if an overflow menu element of `toolsMenuView` is disabled.
void AssertOverflowMenuElementDisabled(NSString* accessibilityID);

}  // namespace policy

#endif  // IOS_CHROME_BROWSER_POLICY_MODEL_POLICY_EARL_GREY_MATCHERS_H_

// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Table view navigation controller constants header
// summary: Declares constants for disabled search bar alpha, scrim fade duration and the dismiss button accessibility identifier.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_TABLE_VIEW_NAVIGATION_CONTROLLER_CONSTANTS_H_
#define IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_TABLE_VIEW_NAVIGATION_CONTROLLER_CONSTANTS_H_

#import <Foundation/Foundation.h>

// The Alpha value used by the SearchBar when disabled.
extern const float kTableViewNavigationAlphaForDisabledSearchBar;
// The duration for scrim to fade in or out.
extern const NSTimeInterval kTableViewNavigationScrimFadeDuration;

// Accessibility ID for the "Done" button on TableView NavigationController bar.
extern NSString* const kTableViewNavigationDismissButtonId;

#endif  // IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_TABLE_VIEW_NAVIGATION_CONTROLLER_CONSTANTS_H_

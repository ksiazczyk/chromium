// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Password Manager branded title view creation header
// summary: Declares CreatePasswordManagerTitleView, which builds a branded navigation bar title view for the Password Manager.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_CREATE_PASSWORD_MANAGER_TITLE_VIEW_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_CREATE_PASSWORD_MANAGER_TITLE_VIEW_H_

@class BrandedNavigationItemTitleView;
@class NSString;

namespace password_manager {

// Creates a branded title view for the navigation bar of the Password Manager.
BrandedNavigationItemTitleView* CreatePasswordManagerTitleView(NSString* title);

}  // namespace password_manager

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_CREATE_PASSWORD_MANAGER_TITLE_VIEW_H_

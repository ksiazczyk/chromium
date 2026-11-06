// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default page mode enum
// summary: Defines the DefaultPageMode enum used to choose between loading pages in mobile or desktop mode.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_H_

#import <Foundation/Foundation.h>

// The mode in which pages should be loaded.
typedef NS_ENUM(NSUInteger, DefaultPageMode) {
  DefaultPageModeMobile,
  DefaultPageModeDesktop,
};

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_H_

// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: New tab page header view delegate protocol
// summary: Defines the NewTabPageHeaderViewDelegate protocol exposing scroll position and fake omnibox pinning state to the header view.
// ---

#ifndef IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_HEADER_VIEW_DELEGATE_H_
#define IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_HEADER_VIEW_DELEGATE_H_

#import <UIKit/UIKit.h>

@class NewTabPageHeaderView;

// Delegate for the NewTabPageHeaderView.
@protocol NewTabPageHeaderViewDelegate

// Whether the scrollview is scrolled to the omnibox.
@property(nonatomic, assign, readonly) BOOL scrolledToMinimumHeight;

// Whether the fake omnibox should pin to the top.
- (BOOL)shouldPinFakeOmnibox;

@end

#endif  // IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_HEADER_VIEW_DELEGATE_H_

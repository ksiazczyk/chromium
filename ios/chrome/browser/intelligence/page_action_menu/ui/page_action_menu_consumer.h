// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page Action Menu consumer protocol
// summary: Declares the PageActionMenuConsumer protocol used to notify the UI of page load and site permission state changes.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_PAGE_ACTION_MENU_UI_PAGE_ACTION_MENU_CONSUMER_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_PAGE_ACTION_MENU_UI_PAGE_ACTION_MENU_CONSUMER_H_

#import <Foundation/Foundation.h>

// The consumer for the Page Action Menu UI to update with model changes.
@protocol PageActionMenuConsumer <NSObject>

// Notifies the consumer that the page load status has changed.
- (void)pageLoadStatusChanged;

// Notifies the consumer that a site permission state has changed.
- (void)permissionStateChanged;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_PAGE_ACTION_MENU_UI_PAGE_ACTION_MENU_CONSUMER_H_

// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab picker consumer protocol
// summary: Declares the Objective-C protocol for updating the tab picker UI with the selected tabs count and done button state.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_PICKER_UI_TAB_PICKER_CONSUMER_H_
#define IOS_CHROME_BROWSER_TAB_PICKER_UI_TAB_PICKER_CONSUMER_H_

#import <Foundation/Foundation.h>

// The tab picker consumer.
@protocol TabPickerConsumer <NSObject>

/// Updates the UI with selected tabs count.
- (void)setSelectedTabsCount:(NSUInteger)tabsCount;

/// Enables or disables the done button. Default value is NO.
- (void)setDoneButtonEnabled:(BOOL)enabled;

@end

#endif  // IOS_CHROME_BROWSER_TAB_PICKER_UI_TAB_PICKER_CONSUMER_H_

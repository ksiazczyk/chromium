// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Button stack content width layout guide utility
// summary: Declares AddButtonStackContentWidthLayoutGuide, which adds a width layout guide for button stack content on large screens.
// ---

#ifndef IOS_CHROME_COMMON_UI_BUTTON_STACK_BUTTON_STACK_UTILS_H_
#define IOS_CHROME_COMMON_UI_BUTTON_STACK_BUTTON_STACK_UTILS_H_

#import <UIKit/UIKit.h>

// Creates, adds to `view` and returns a width layout guide for content within
// a button stack view controller (or similar view controllers). The width is
// 80% for large screens, and at max `kButtonStackMargin` margin.
// The return value should be
// saved and updated on trait collection change.
UILayoutGuide* AddButtonStackContentWidthLayoutGuide(UIView* view);

#endif  // IOS_CHROME_COMMON_UI_BUTTON_STACK_BUTTON_STACK_UTILS_H_

// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Dynamic type utility header
// summary: Declares helpers that cap the iOS content size category at a maximum and return the preferred font for a text style under that cap.
// ---

#ifndef IOS_CHROME_COMMON_UI_UTIL_DYNAMIC_TYPE_UTIL_H_
#define IOS_CHROME_COMMON_UI_UTIL_DYNAMIC_TYPE_UTIL_H_

#import <UIKit/UIKit.h>

// Returns an UIFont* calculated by `style` and
// min(`currentCategory`,`maxCategory`).
UIFont* PreferredFontForTextStyleWithMaxCategory(
    UIFontTextStyle style,
    UIContentSizeCategory currentCategory,
    UIContentSizeCategory maxCategory);

// Returns min(`currentCategory`,`maxCategory`).
UIContentSizeCategory ContentSizeCategoryWithMaxCategory(
    UIContentSizeCategory currentCategory,
    UIContentSizeCategory maxCategory);

#endif  // IOS_CHROME_COMMON_UI_UTIL_DYNAMIC_TYPE_UTIL_H_

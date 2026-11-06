// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Attributed string utility header
// summary: Declares helpers to copy attributed strings with layout attributes and to build an attributed string from a UILabel's properties.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_UTIL_ATTRIBUTED_STRING_UTIL_H_
#define IOS_CHROME_BROWSER_SHARED_UI_UTIL_ATTRIBUTED_STRING_UTIL_H_

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/// Add attributes to a copy of `attributedString`.
NSAttributedString* AttributedStringCopyWithAttributes(
    NSAttributedString* attributedString,
    NSLineBreakMode lineBreakMode,
    NSTextAlignment textAlignment,
    BOOL forceLeftToRight);

/// Returns an attributed string matching the label's `text`, `font`,
/// `textColor`, `shadowColor`, `shadowOffset`, `textAlignment` and
/// `lineBreakMode` properties i.e. properties ignored when the label's
/// `attributedText` is set.
NSAttributedString* NSAttributedStringFromUILabel(UILabel* label);

#endif  // IOS_CHROME_BROWSER_SHARED_UI_UTIL_ATTRIBUTED_STRING_UTIL_H_

// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Text view utility header
// summary: Declares a helper that creates a UITextView using TextKit1 instead of TextKit2.
// ---

#ifndef IOS_CHROME_COMMON_UI_UTIL_TEXT_VIEW_UTIL_H_
#define IOS_CHROME_COMMON_UI_UTIL_TEXT_VIEW_UTIL_H_

#import <UIKit/UIKit.h>

// Creates a UITextView with TextKit1 by disabling TextKit2.
UITextView* CreateUITextViewWithTextKit1();

#endif  // IOS_CHROME_COMMON_UI_UTIL_TEXT_VIEW_UTIL_H_

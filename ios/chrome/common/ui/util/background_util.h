// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Blur background view helper header
// summary: Declares PrimaryBackgroundBlurView, a function returning a UIView with the default blur background.
// ---

#ifndef IOS_CHROME_COMMON_UI_UTIL_BACKGROUND_UTIL_H_
#define IOS_CHROME_COMMON_UI_UTIL_BACKGROUND_UTIL_H_

#import <UIKit/UIKit.h>

// Returns UIView with the default blur background.
UIView* PrimaryBackgroundBlurView();

#endif  // IOS_CHROME_COMMON_UI_UTIL_BACKGROUND_UTIL_H_

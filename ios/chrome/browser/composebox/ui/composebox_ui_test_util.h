// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Composebox UI test util header
// summary: Declares a helper that reports whether a view has a large content viewer interaction, for use in tests.
// ---

#ifndef IOS_CHROME_BROWSER_COMPOSEBOX_UI_COMPOSEBOX_UI_TEST_UTIL_H_
#define IOS_CHROME_BROWSER_COMPOSEBOX_UI_COMPOSEBOX_UI_TEST_UTIL_H_

#import <UIKit/UIKit.h>

// Returns whether `view` has a `UILargeContentViewerInteraction`.
BOOL HasLargeContentViewerInteraction(UIView* view);

#endif  // IOS_CHROME_BROWSER_COMPOSEBOX_UI_COMPOSEBOX_UI_TEST_UTIL_H_

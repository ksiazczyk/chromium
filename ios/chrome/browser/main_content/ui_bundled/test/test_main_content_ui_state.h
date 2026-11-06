// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test main content UI state header
// summary: Declares TestMainContentUIState, a MainContentUIState subclass whose broadcast properties can be set directly without an updater.
// ---

#ifndef IOS_CHROME_BROWSER_MAIN_CONTENT_UI_BUNDLED_TEST_TEST_MAIN_CONTENT_UI_STATE_H_
#define IOS_CHROME_BROWSER_MAIN_CONTENT_UI_BUNDLED_TEST_TEST_MAIN_CONTENT_UI_STATE_H_

#import "ios/chrome/browser/main_content/ui_bundled/main_content_ui_state.h"

// A test version of MainContentUIState that can be updated directly without
// the use of a MainContentUIStateUpdater.
@interface TestMainContentUIState : MainContentUIState

// Redefine broadcast properties as readwrite.
@property(nonatomic, assign) CGFloat yContentOffset;

@end

#endif  // IOS_CHROME_BROWSER_MAIN_CONTENT_UI_BUNDLED_TEST_TEST_MAIN_CONTENT_UI_STATE_H_

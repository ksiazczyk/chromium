// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Secondary toolbar keyboard state provider protocol
// summary: Declares a protocol to query keyboard activity and find navigator visibility for the active web content.
// ---

#ifndef IOS_CHROME_BROWSER_TOOLBAR_LEGACY_UI_BUNDLED_SECONDARY_TOOLBAR_KEYBOARD_STATE_PROVIDER_H_
#define IOS_CHROME_BROWSER_TOOLBAR_LEGACY_UI_BUNDLED_SECONDARY_TOOLBAR_KEYBOARD_STATE_PROVIDER_H_

/// Protocol to retrieve the keyboard state on the active web state.
@protocol SecondaryToolbarKeyboardStateProvider <NSObject>

/// Returns whether the keyboard is active for web content. Aka. not interacting
/// with the app's UI.
- (BOOL)keyboardIsActiveForWebContent;

/// Returns whether the find navigator is visible for web content.
- (BOOL)isFindNavigatorVisibleForWebContent;

@end

#endif  // IOS_CHROME_BROWSER_TOOLBAR_LEGACY_UI_BUNDLED_SECONDARY_TOOLBAR_KEYBOARD_STATE_PROVIDER_H_

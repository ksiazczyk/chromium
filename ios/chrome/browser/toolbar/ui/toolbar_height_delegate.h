// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Toolbar height delegate protocol
// summary: Declares a protocol for notifying about toolbar height changes and adjusting the secondary toolbar when it moves above or away from the keyboard.
// ---

#ifndef IOS_CHROME_BROWSER_TOOLBAR_UI_TOOLBAR_HEIGHT_DELEGATE_H_
#define IOS_CHROME_BROWSER_TOOLBAR_UI_TOOLBAR_HEIGHT_DELEGATE_H_

#import <Foundation/Foundation.h>

enum class ToolbarType;

@protocol ToolbarHeightDelegate <NSObject>

/// Primary and secondary toolbars collapsed and expanded size have changed.
/// This is NOT used for fullscreen.
- (void)toolbarsHeightChanged;

/// Secondary toolbar is moving above the keyboard, adjust the constraints to
/// allow this.
- (void)secondaryToolbarMovedAboveKeyboard;

/// Secondary toolbar is removed from the keyboard, reset to default
/// constraints.
- (void)secondaryToolbarRemovedFromKeyboard;

/// Adjust the secondary toolbar when the keyboard is shown.
- (void)adjustSecondaryToolbarForKeyboardHeight:(CGFloat)keyboardHeight
                                    isCollapsed:(BOOL)isCollapsed
                                       duration:(NSTimeInterval)duration
                                          curve:(UIViewAnimationCurve)curve;

@end

#endif  // IOS_CHROME_BROWSER_TOOLBAR_UI_TOOLBAR_HEIGHT_DELEGATE_H_

// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Parent access bottom sheet presentation delegate protocol
// summary: Defines a delegate protocol notified when the parent access bottom sheet receives a dismiss signal such as the close button, gesture or escape key.
// ---

#ifndef IOS_CHROME_BROWSER_SUPERVISED_USER_UI_PARENT_ACCESS_BOTTOM_SHEET_VIEW_CONTROLLER_PRESENTATION_DELEGATE_H_
#define IOS_CHROME_BROWSER_SUPERVISED_USER_UI_PARENT_ACCESS_BOTTOM_SHEET_VIEW_CONTROLLER_PRESENTATION_DELEGATE_H_

@class ParentAccessBottomSheetViewController;

// Delegate for presentation events related to the Parent Access bottom sheet.
@protocol ParentAccessBottomSheetViewControllerPresentationDelegate <NSObject>

// Called when the bottom sheet receives a dismiss signal (e.g., (x) button,
// accessibility gesture, or escape key)
- (void)closeBottomSheetRequested:
    (ParentAccessBottomSheetViewController*)controller;

@end

#endif  // IOS_CHROME_BROWSER_SUPERVISED_USER_UI_PARENT_ACCESS_BOTTOM_SHEET_VIEW_CONTROLLER_PRESENTATION_DELEGATE_H_

// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Omnibox integration test view controller delegate protocol
// summary: Declares the delegate protocol that notifies when the omnibox cancel button in the integration test view controller has been tapped.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_EG_TESTS_INTTEST_OMNIBOX_INTTEST_VIEW_CONTROLLER_DELEGATE_H_
#define IOS_CHROME_BROWSER_OMNIBOX_EG_TESTS_INTTEST_OMNIBOX_INTTEST_VIEW_CONTROLLER_DELEGATE_H_

#import <UIKit/UIKit.h>

@class OmniboxInttestViewController;

@protocol OmniboxInttestViewControllerDelegate <NSObject>

/// Called when the omnibox cancel button has been tapped.
- (void)viewControllerDidTapCancelButton:
    (OmniboxInttestViewController*)viewController;

@end

#endif  // IOS_CHROME_BROWSER_OMNIBOX_EG_TESTS_INTTEST_OMNIBOX_INTTEST_VIEW_CONTROLLER_DELEGATE_H_

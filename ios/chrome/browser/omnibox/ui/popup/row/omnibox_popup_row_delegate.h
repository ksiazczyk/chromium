// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Omnibox popup row delegate protocol
// summary: Declares the OmniboxPopupRowDelegate protocol for trailing button taps and accessibility action updates in popup rows.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_UI_POPUP_ROW_OMNIBOX_POPUP_ROW_DELEGATE_H_
#define IOS_CHROME_BROWSER_OMNIBOX_UI_POPUP_ROW_OMNIBOX_POPUP_ROW_DELEGATE_H_

#import <UIKit/UIKit.h>

@class OmniboxPopupRowContentConfiguration;

/// Delegate for actions in OmniboxPopupRow.
@protocol OmniboxPopupRowDelegate

/// The trailing button was tapped.
- (void)omniboxPopupRowWithConfiguration:
            (OmniboxPopupRowContentConfiguration*)configuration
         didTapTrailingButtonAtIndexPath:(NSIndexPath*)indexPath;

/// Accessibility actions updated.
- (void)omniboxPopupRowWithConfiguration:
            (OmniboxPopupRowContentConfiguration*)configuration
    didUpdateAccessibilityActionsAtIndexPath:(NSIndexPath*)indexPath;

@end

#endif  // IOS_CHROME_BROWSER_OMNIBOX_UI_POPUP_ROW_OMNIBOX_POPUP_ROW_DELEGATE_H_

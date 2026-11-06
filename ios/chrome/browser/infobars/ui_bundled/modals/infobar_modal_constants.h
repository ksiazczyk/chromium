// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Infobar modal shared constants header
// summary: Declares accessibility identifiers for the modal view and cancel button plus a cancel button user action key.
// ---

#ifndef IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_MODALS_INFOBAR_MODAL_CONSTANTS_H_
#define IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_MODALS_INFOBAR_MODAL_CONSTANTS_H_

#import <UIKit/UIKit.h>

// Accessibility identifier of the Modal View.
extern NSString* const kInfobarModalViewIdentifier;
// Accessibility identifier of the Modal Cancel Button.
extern NSString* const kInfobarModalCancelButton;

// UserAction keys.
extern const char kInfobarModalCancelButtonTapped[];

#endif  // IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_MODALS_INFOBAR_MODAL_CONSTANTS_H_

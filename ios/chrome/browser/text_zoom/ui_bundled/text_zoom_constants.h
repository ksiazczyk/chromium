// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Text zoom accessibility identifier constants header
// summary: Declares NSString constants for accessibility identifiers of the text zoom view and its close, increase, decrease, and reset buttons.
// ---

#ifndef IOS_CHROME_BROWSER_TEXT_ZOOM_UI_BUNDLED_TEXT_ZOOM_CONSTANTS_H_
#define IOS_CHROME_BROWSER_TEXT_ZOOM_UI_BUNDLED_TEXT_ZOOM_CONSTANTS_H_

#import <Foundation/Foundation.h>

// The a11y ID of the "close" button in the text zoom bar.
extern NSString* const kTextZoomCloseButtonID;
// The a11y ID of the text zoom view.
extern NSString* const kTextZoomViewAccessibilityIdentifier;
// The a11y ID of the text zoom increase button.
extern NSString* const kTextZoomIncreaseButtonAccessibilityIdentifier;
// The a11y ID of the text zoom decrease button.
extern NSString* const kTextZoomDecreaseButtonAccessibilityIdentifier;
// The a11y ID of the text zoom reset button.
extern NSString* const kTextZoomResetButtonAccessibilityIdentifier;

#endif  // IOS_CHROME_BROWSER_TEXT_ZOOM_UI_BUNDLED_TEXT_ZOOM_CONSTANTS_H_

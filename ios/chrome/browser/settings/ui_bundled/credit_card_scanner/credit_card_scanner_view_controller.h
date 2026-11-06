// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Credit card scanner view controller header
// summary: Declares CreditCardScannerViewController, a scanner view controller that notifies its delegate when new images are captured from the scanner.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CREDIT_CARD_SCANNER_CREDIT_CARD_SCANNER_VIEW_CONTROLLER_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CREDIT_CARD_SCANNER_CREDIT_CARD_SCANNER_VIEW_CONTROLLER_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/scanner/ui_bundled/scanner_view_controller.h"
#import "ios/chrome/browser/settings/ui_bundled/credit_card_scanner/credit_card_scanner_camera_controller_delegate.h"

extern NSString* const kCreditCardScannerViewID;

@protocol CreditCardScannedImageDelegate;

// View controller for the Credit Card Scanner
@interface CreditCardScannerViewController
    : ScannerViewController <CreditCardScannerCameraControllerDelegate>

// The delegate notified when there is a new image from the scanner.
@property(nonatomic, weak) id<CreditCardScannedImageDelegate> delegate;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CREDIT_CARD_SCANNER_CREDIT_CARD_SCANNER_VIEW_CONTROLLER_H_

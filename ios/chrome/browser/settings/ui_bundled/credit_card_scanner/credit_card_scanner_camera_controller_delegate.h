// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Credit card scanner camera controller delegate protocol
// summary: Declares a delegate protocol that receives video sample buffers produced by the credit card scanner camera.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CREDIT_CARD_SCANNER_CREDIT_CARD_SCANNER_CAMERA_CONTROLLER_DELEGATE_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CREDIT_CARD_SCANNER_CREDIT_CARD_SCANNER_CAMERA_CONTROLLER_DELEGATE_H_

// Receives the Credit Card scanner image results.
@protocol CreditCardScannerCameraControllerDelegate <CameraControllerDelegate>

// Called when the scanner starts receiving video frames through the camera
// video input.
- (void)receiveCreditCardScannerResult:(CMSampleBufferRef)sampleBuffer;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CREDIT_CARD_SCANNER_CREDIT_CARD_SCANNER_CAMERA_CONTROLLER_DELEGATE_H_

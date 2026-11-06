// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: QR code generation utility interface
// summary: Declares GenerateQRCode, a function that creates a QR code UIImage from data scaled to a requested size in points.
// ---

#ifndef IOS_CHROME_BROWSER_SHARING_UI_BUNDLED_QR_GENERATOR_QR_GENERATOR_UTIL_H_
#define IOS_CHROME_BROWSER_SHARING_UI_BUNDLED_QR_GENERATOR_QR_GENERATOR_UTIL_H_

#import <UIKit/UIKit.h>

// Generate a QR code image for `data` and scaling it to have its height and
// width equal to `imageLength` in points.
UIImage* GenerateQRCode(NSData* data,
                        CGFloat imageLength,
                        CGFloat display_scale);

#endif  // IOS_CHROME_BROWSER_SHARING_UI_BUNDLED_QR_GENERATOR_QR_GENERATOR_UTIL_H_

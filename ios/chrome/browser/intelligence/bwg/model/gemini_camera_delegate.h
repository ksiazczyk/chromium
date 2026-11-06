// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gemini camera delegate protocol
// summary: Declares the GeminiCameraDelegate protocol that opens the iOS camera from a view controller and returns captured images or an error via completion block.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_CAMERA_DELEGATE_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_CAMERA_DELEGATE_H_

#import <UIKit/UIKit.h>

// Delegate for Gemini camera actions.
@protocol GeminiCameraDelegate <NSObject>

// Opens camera to take a picture.
- (void)openCameraFromViewController:(UIViewController*)presentingViewController
                      withCompletion:
                          (void (^)(NSArray<UIImage*>*, NSError*))completion;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_CAMERA_DELEGATE_H_

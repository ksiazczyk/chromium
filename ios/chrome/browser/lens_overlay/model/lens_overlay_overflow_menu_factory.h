// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lens overlay overflow menu factory header
// summary: Declares a factory that builds UI actions for the Lens overlay overflow menu, such as My Activity, Learn More, and Search with camera.
// ---

#ifndef IOS_CHROME_BROWSER_LENS_OVERLAY_MODEL_LENS_OVERLAY_OVERFLOW_MENU_FACTORY_H_
#define IOS_CHROME_BROWSER_LENS_OVERLAY_MODEL_LENS_OVERLAY_OVERFLOW_MENU_FACTORY_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/shared/model/browser/browser.h"

@protocol LensOverlayOverflowMenuDelegate;

@interface LensOverlayOverflowMenuFactory : NSObject

// Creates a new factory given a browser instance.
- (instancetype)initWithBrowser:(Browser*)browser
           overflowMenuDelegate:
               (id<LensOverlayOverflowMenuDelegate>)overflowMenuDelegate;

// The "My Activity" action.
- (UIAction*)openUserActivityAction;

// The "Learn More" action.
- (UIAction*)learnMoreAction;

// The "Search with camera" action.
- (UIAction*)searchWithCameraActionWithHandler:(void (^)())handler;
@end

#endif  // IOS_CHROME_BROWSER_LENS_OVERLAY_MODEL_LENS_OVERLAY_OVERFLOW_MENU_FACTORY_H_

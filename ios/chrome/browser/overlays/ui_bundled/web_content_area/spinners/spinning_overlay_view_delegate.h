// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Spinning overlay view delegate header
// summary: Defines the SpinningOverlayViewDelegate protocol used to notify about taps on the spinning overlay view.
// ---

#ifndef IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_WEB_CONTENT_AREA_SPINNERS_SPINNING_OVERLAY_VIEW_DELEGATE_H_
#define IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_WEB_CONTENT_AREA_SPINNERS_SPINNING_OVERLAY_VIEW_DELEGATE_H_

#import <Foundation/Foundation.h>

@class SpinningOverlayView;

// Delegate for user actions on the spinning overlay view.
@protocol SpinningOverlayViewDelegate <NSObject>

// Tells the delegate that the spinning overlay view was tapped.
- (void)spinningOverlayViewDidTap:(SpinningOverlayView*)view;

@end

#endif  // IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_WEB_CONTENT_AREA_SPINNERS_SPINNING_OVERLAY_VIEW_DELEGATE_H_

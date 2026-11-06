// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ActivityOverlayView interface
// summary: Declares a view with a translucent background and a centered activity indicator.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_ELEMENTS_ACTIVITY_OVERLAY_VIEW_H_
#define IOS_CHROME_BROWSER_SHARED_UI_ELEMENTS_ACTIVITY_OVERLAY_VIEW_H_

#import <UIKit/UIKit.h>

// View with a translucent background and an activity indicator in the middle.
@interface ActivityOverlayView : UIView

- (instancetype)init NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder*)coder NS_UNAVAILABLE;

// The activity indicator of the view.
@property(nonatomic, strong, readonly) UIActivityIndicatorView* indicator;

@end

#endif  // IOS_CHROME_BROWSER_SHARED_UI_ELEMENTS_ACTIVITY_OVERLAY_VIEW_H_

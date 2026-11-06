// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Share download overlay view controller declaration
// summary: Declares the view controller that displays the download overlay and forwards user actions to a handler.
// ---

#ifndef IOS_CHROME_BROWSER_SHARING_UI_BUNDLED_SHARE_DOWNLOAD_OVERLAY_VIEW_CONTROLLER_H_
#define IOS_CHROME_BROWSER_SHARING_UI_BUNDLED_SHARE_DOWNLOAD_OVERLAY_VIEW_CONTROLLER_H_

#import <UIKit/UIKit.h>

@protocol ShareDownloadOverlayCommands;

// View controller used to display the download overlay.
@interface ShareDownloadOverlayViewController : UIViewController

// Initiates a ShareDownloadOverlayViewController with
// `baseView` the view which will display the overlay,
// `handler` to handle user action.
- (instancetype)initWithBaseView:(UIView*)baseView
                         handler:(id<ShareDownloadOverlayCommands>)handler;

@end

#endif  // IOS_CHROME_BROWSER_SHARING_UI_BUNDLED_SHARE_DOWNLOAD_OVERLAY_VIEW_CONTROLLER_H_

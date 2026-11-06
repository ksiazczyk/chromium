// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InfobarModalPositioner protocol
// summary: Declares the InfobarModalPositioner protocol that supplies the target height for the modal infobar view based on a given width.
// ---

#ifndef IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_PRESENTATION_INFOBAR_MODAL_POSITIONER_H_
#define IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_PRESENTATION_INFOBAR_MODAL_POSITIONER_H_

#import <UIKit/UIKit.h>

// InfobarBannerPositioner contains methods used to position the InfobarBanner.
@protocol InfobarModalPositioner

// The target height for the modal view to be presented based on `width`.
- (CGFloat)modalHeightForWidth:(CGFloat)width;

@end

#endif  // IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_PRESENTATION_INFOBAR_MODAL_POSITIONER_H_

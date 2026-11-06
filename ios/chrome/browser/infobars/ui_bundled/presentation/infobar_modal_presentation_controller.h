// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InfobarModalPresentationController interface
// summary: Declares the UIPresentationController subclass for the modal infobar, requiring a modal positioner in its designated initializer.
// ---

#ifndef IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_PRESENTATION_INFOBAR_MODAL_PRESENTATION_CONTROLLER_H_
#define IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_PRESENTATION_INFOBAR_MODAL_PRESENTATION_CONTROLLER_H_

#import <UIKit/UIKit.h>

@protocol InfobarModalPositioner;

// PresentationController for the ModalInfobar.
@interface InfobarModalPresentationController : UIPresentationController

// Designated initializer. `modalPositioner` is used to position the
// ModalInfobar, it can't be nil.
- (instancetype)
    initWithPresentedViewController:(UIViewController*)presentedViewController
           presentingViewController:(UIViewController*)presentingViewController
                    modalPositioner:(id<InfobarModalPositioner>)modalPositioner
    NS_DESIGNATED_INITIALIZER;

- (instancetype)
    initWithPresentedViewController:(UIViewController*)presentedViewController
           presentingViewController:(UIViewController*)presentingViewController
    NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_PRESENTATION_INFOBAR_MODAL_PRESENTATION_CONTROLLER_H_

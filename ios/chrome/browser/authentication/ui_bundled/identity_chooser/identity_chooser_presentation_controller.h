// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Identity chooser presentation controller interface
// summary: Declares the presentation controller that shows the identity chooser as a modal.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_IDENTITY_CHOOSER_IDENTITY_CHOOSER_PRESENTATION_CONTROLLER_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_IDENTITY_CHOOSER_IDENTITY_CHOOSER_PRESENTATION_CONTROLLER_H_

#import <UIKit/UIKit.h>

// Presentation controller for presenting the IdentityChooser. It is presenting
// it as a Modal.
@interface IdentityChooserPresentationController : UIPresentationController

@end

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_IDENTITY_CHOOSER_IDENTITY_CHOOSER_PRESENTATION_CONTROLLER_H_

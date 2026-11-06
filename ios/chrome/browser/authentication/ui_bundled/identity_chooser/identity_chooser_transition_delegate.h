// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Identity chooser transition delegate interface
// summary: Declares the transitioning delegate for the modal identity chooser with a configurable animation origin.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_IDENTITY_CHOOSER_IDENTITY_CHOOSER_TRANSITION_DELEGATE_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_IDENTITY_CHOOSER_IDENTITY_CHOOSER_TRANSITION_DELEGATE_H_

#import <UIKit/UIKit.h>

// Transition Delegate for the IdentityChooser. It is presenting it as a modal.
@interface IdentityChooserTransitionDelegate
    : NSObject <UIViewControllerTransitioningDelegate>

// Origin of the animation. Must be in the window coordinates.
@property(nonatomic, assign) CGPoint origin;

@end

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_IDENTITY_CHOOSER_IDENTITY_CHOOSER_TRANSITION_DELEGATE_H_

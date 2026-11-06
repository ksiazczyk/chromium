// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Composebox present animator interface
// summary: Declares the animator that drives the custom presentation transition of the composebox, with an option to toggle AIM on during presentation.
// ---

#ifndef IOS_CHROME_BROWSER_COMPOSEBOX_UI_COMPOSEBOX_PRESENT_ANIMATOR_H_
#define IOS_CHROME_BROWSER_COMPOSEBOX_UI_COMPOSEBOX_PRESENT_ANIMATOR_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/composebox/public/composebox_animation_base.h"
#import "ios/chrome/browser/composebox/ui/composebox_animation_context.h"

// Animator for the custom presentation of the composebox.
@interface ComposeboxPresentAnimator
    : NSObject <UIViewControllerAnimatedTransitioning>

/// Whether AIM is toggled on during the presentation.
@property(nonatomic, assign) BOOL toggleOnAIM;

- (instancetype)initWithContext:(id<ComposeboxAnimationContext>)context
                  animationBase:(id<ComposeboxAnimationBase>)animationBase;
@end

#endif  // IOS_CHROME_BROWSER_COMPOSEBOX_UI_COMPOSEBOX_PRESENT_ANIMATOR_H_

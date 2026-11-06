// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Assistant grabber button interface
// summary: Declares the grabber button for the assistant sheet with a delegate protocol for VoiceOver adjustable increment and decrement actions.
// ---

#ifndef IOS_CHROME_BROWSER_ASSISTANT_UI_ASSISTANT_GRABBER_BUTTON_H_
#define IOS_CHROME_BROWSER_ASSISTANT_UI_ASSISTANT_GRABBER_BUTTON_H_

#import "ios/chrome/browser/shared/ui/elements/extended_touch_target_button.h"

@class AssistantGrabberButton;

// Delegate to handle accessibility adjustable actions.
@protocol AssistantGrabberButtonAccessibilityDelegate <NSObject>

// Called when VoiceOver users swipe up to increment.
- (void)assistantGrabberButtonDidIncrement:(AssistantGrabberButton*)button;

// Called when VoiceOver users swipe down to decrement.
- (void)assistantGrabberButtonDidDecrement:(AssistantGrabberButton*)button;

@end

// A button that acts as the grabber for the Assistant sheet and supports
// accessibility adjustable traits.
@interface AssistantGrabberButton : ExtendedTouchTargetButton

@property(nonatomic, weak) id<AssistantGrabberButtonAccessibilityDelegate>
    accessibilityDelegate;

@end

#endif  // IOS_CHROME_BROWSER_ASSISTANT_UI_ASSISTANT_GRABBER_BUTTON_H_

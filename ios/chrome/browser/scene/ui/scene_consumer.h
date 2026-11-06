// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SceneConsumer protocol
// summary: Declares the scene consumer protocol for showing the new IA promo with Gemini eligibility.
// ---

#ifndef IOS_CHROME_BROWSER_SCENE_UI_SCENE_CONSUMER_H_
#define IOS_CHROME_BROWSER_SCENE_UI_SCENE_CONSUMER_H_

#import <Foundation/Foundation.h>

// Protocol for the scene consumer.
@protocol SceneConsumer <NSObject>

// Tells the consumer to show the new IA promo.
- (void)showNewIAPromoWithGeminiEligibility:(BOOL)eligible;

@end

#endif  // IOS_CHROME_BROWSER_SCENE_UI_SCENE_CONSUMER_H_

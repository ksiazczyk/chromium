// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GeminiContainerCoordinator interface
// summary: Declares the coordinator managing presentation and lifecycle of the Gemini container, including dismissal, minimize and web modal display.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_BWG_COORDINATOR_GEMINI_CONTAINER_COORDINATOR_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_BWG_COORDINATOR_GEMINI_CONTAINER_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

class GURL;
@class GeminiStartupState;

// Coordinator for managing the presentation and lifecycle of the Gemini
// Container.
@interface GeminiContainerCoordinator : ChromeCoordinator

// Startup state used to initialize the Gemini content.
@property(nonatomic, strong) GeminiStartupState* startupState;

// Dismisses the assistant container.
- (void)dismissWithCompletion:(void (^)(void))completion;

// Minimizes the assistant container to its smallest detent while keeping it
// visible.
- (void)minimize;

// Presents `URL` in a web modal sheet over the Gemini container.
- (void)showWebModalForURL:(const GURL&)URL;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_BWG_COORDINATOR_GEMINI_CONTAINER_COORDINATOR_H_

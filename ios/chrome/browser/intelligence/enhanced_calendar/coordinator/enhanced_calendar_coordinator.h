// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enhanced Calendar coordinator header
// summary: Declares the EnhancedCalendarCoordinator ChromeCoordinator subclass, requiring an EnhancedCalendarConfiguration for initialization.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_ENHANCED_CALENDAR_COORDINATOR_ENHANCED_CALENDAR_COORDINATOR_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_ENHANCED_CALENDAR_COORDINATOR_ENHANCED_CALENDAR_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

@class EnhancedCalendarConfiguration;

// The coordinator for the Enhanced Calendar feature's UI.
@interface EnhancedCalendarCoordinator : ChromeCoordinator

- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser NS_UNAVAILABLE;

// `enhancedCalendarConfig` holds all the configuration needed for the Enhanced
// Calendar feature.
- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser
                    enhancedCalendarConfig:
                        (EnhancedCalendarConfiguration*)enhancedCalendarConfig
    NS_DESIGNATED_INITIALIZER;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_ENHANCED_CALENDAR_COORDINATOR_ENHANCED_CALENDAR_COORDINATOR_H_

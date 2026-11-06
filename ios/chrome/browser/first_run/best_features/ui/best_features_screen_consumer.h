// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Best Features screen consumer protocol
// summary: Declares a protocol for setting the list of items shown on the Best Features screen.
// ---

#ifndef IOS_CHROME_BROWSER_FIRST_RUN_BEST_FEATURES_UI_BEST_FEATURES_SCREEN_CONSUMER_H_
#define IOS_CHROME_BROWSER_FIRST_RUN_BEST_FEATURES_UI_BEST_FEATURES_SCREEN_CONSUMER_H_

#import <Foundation/Foundation.h>

@class BestFeaturesItem;

// Defines methods to set the contents of the Best Features Screen.
@protocol BestFeaturesScreenConsumer <NSObject>

// Sets the list of items for the Best Features Screen.
- (void)setBestFeaturesItems:(NSArray<BestFeaturesItem*>*)items;

@end

#endif  // IOS_CHROME_BROWSER_FIRST_RUN_BEST_FEATURES_UI_BEST_FEATURES_SCREEN_CONSUMER_H_

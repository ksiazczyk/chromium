// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Discover page consumer protocol
// summary: Defines the consumer protocol through which the mediator supplies Discover link types to the Discover page view controller.
// ---

#ifndef IOS_CHROME_BROWSER_HOME_CUSTOMIZATION_UI_HOME_CUSTOMIZATION_DISCOVER_CONSUMER_H_
#define IOS_CHROME_BROWSER_HOME_CUSTOMIZATION_UI_HOME_CUSTOMIZATION_DISCOVER_CONSUMER_H_

#import <UIKit/UIKit.h>

#include <vector>

#import "ios/chrome/browser/home_customization/utils/home_customization_constants.h"

// Consumer protocol for the HomeCustomizationMediator to provide data to the
// Discover page's view controller.
@protocol HomeCustomizationDiscoverConsumer

// Populates the link cells with a vector of types for the Discover page.
- (void)populateDiscoverLinks:(std::vector<CustomizationLinkType>)linksVector;

@end

#endif  // IOS_CHROME_BROWSER_HOME_CUSTOMIZATION_UI_HOME_CUSTOMIZATION_DISCOVER_CONSUMER_H_

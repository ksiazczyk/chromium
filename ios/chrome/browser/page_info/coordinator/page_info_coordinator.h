// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page info coordinator interface
// summary: Declares the Chrome coordinator that presents the page info UI for the active web state.
// ---

#ifndef IOS_CHROME_BROWSER_PAGE_INFO_COORDINATOR_PAGE_INFO_COORDINATOR_H_
#define IOS_CHROME_BROWSER_PAGE_INFO_COORDINATOR_PAGE_INFO_COORDINATOR_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"


// The coordinator for the page info.
@interface PageInfoCoordinator : ChromeCoordinator

@end

#endif  // IOS_CHROME_BROWSER_PAGE_INFO_COORDINATOR_PAGE_INFO_COORDINATOR_H_

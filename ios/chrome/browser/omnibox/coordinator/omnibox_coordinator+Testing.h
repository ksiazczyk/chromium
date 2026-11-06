// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OmniboxCoordinator testing category header
// summary: Declares a Testing category on OmniboxCoordinator that exposes its private autocomplete controller accessor for tests.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_COORDINATOR_OMNIBOX_COORDINATOR_TESTING_H_
#define IOS_CHROME_BROWSER_OMNIBOX_COORDINATOR_OMNIBOX_COORDINATOR_TESTING_H_

#import "ios/chrome/browser/omnibox/coordinator/omnibox_coordinator.h"

@class OmniboxAutocompleteController;

/// Testing category exposing private methods of OmniboxCoordinator for tests.
@interface OmniboxCoordinator (Testing)

/// Omnibox autocomplete controller.
- (OmniboxAutocompleteController*)omniboxAutocompleteController;

@end

#endif  // IOS_CHROME_BROWSER_OMNIBOX_COORDINATOR_OMNIBOX_COORDINATOR_TESTING_H_

// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake overlay request coordinator declaration
// summary: Declares FakeOverlayRequestCoordinator, a fake OverlayRequestCoordinator subclass that supports all overlay requests for tests.
// ---

#ifndef IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_TEST_FAKE_OVERLAY_REQUEST_COORDINATOR_H_
#define IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_TEST_FAKE_OVERLAY_REQUEST_COORDINATOR_H_

#import "ios/chrome/browser/overlays/ui_bundled/overlay_request_coordinator.h"

// Fake version of OverlayRequestCoordinator that supports all OverlayRequests.
@interface FakeOverlayRequestCoordinator : OverlayRequestCoordinator
@end

#endif  // IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_TEST_FAKE_OVERLAY_REQUEST_COORDINATOR_H_

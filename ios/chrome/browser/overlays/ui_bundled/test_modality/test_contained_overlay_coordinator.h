// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TestContainedOverlayCoordinator header
// summary: Declares a test overlay request coordinator that displays overlay UI as a child view controller of the base view controller.
// ---

#ifndef IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_TEST_MODALITY_TEST_CONTAINED_OVERLAY_COORDINATOR_H_
#define IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_TEST_MODALITY_TEST_CONTAINED_OVERLAY_COORDINATOR_H_

#import "ios/chrome/browser/overlays/ui_bundled/overlay_request_coordinator.h"

// Coordinator to use in tests for overlay UI supported using child
// UIViewControllers.
@interface TestContainedOverlayCoordinator : OverlayRequestCoordinator
@end

#endif  // IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_TEST_MODALITY_TEST_CONTAINED_OVERLAY_COORDINATOR_H_

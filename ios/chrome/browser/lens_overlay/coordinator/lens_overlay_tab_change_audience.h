// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lens overlay tab change audience protocol
// summary: Defines a protocol used to notify the Lens Overlay coordinator that a background tab change is about to happen.
// ---

#ifndef IOS_CHROME_BROWSER_LENS_OVERLAY_COORDINATOR_LENS_OVERLAY_TAB_CHANGE_AUDIENCE_H_
#define IOS_CHROME_BROWSER_LENS_OVERLAY_COORDINATOR_LENS_OVERLAY_TAB_CHANGE_AUDIENCE_H_

/// This protocol is used to notify the Lens Overlay Coordinator that a
/// tab change is about to happen.
@protocol LensOverlayTabChangeAudience

/// Notifies the responder that a tab change is about to happen in the
/// background.
- (void)backgroundTabWillBecomeActive;

@end

#endif  // IOS_CHROME_BROWSER_LENS_OVERLAY_COORDINATOR_LENS_OVERLAY_TAB_CHANGE_AUDIENCE_H_

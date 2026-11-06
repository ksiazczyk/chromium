// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lens toolbar mutator protocol
// summary: Declares the LensToolbarMutator protocol for focusing or defocusing the omnibox and navigating back to the previous URL.
// ---

#ifndef IOS_CHROME_BROWSER_LENS_OVERLAY_UI_LENS_TOOLBAR_MUTATOR_H_
#define IOS_CHROME_BROWSER_LENS_OVERLAY_UI_LENS_TOOLBAR_MUTATOR_H_

/// Mutator of the lens toolbar.
@protocol LensToolbarMutator

/// Focuses the omnibox.
- (void)focusOmnibox;

/// Defocuses the omnibox.
- (void)defocusOmnibox;

/// Navigates to the previous URL.
- (void)goBack;

@end

#endif  // IOS_CHROME_BROWSER_LENS_OVERLAY_UI_LENS_TOOLBAR_MUTATOR_H_

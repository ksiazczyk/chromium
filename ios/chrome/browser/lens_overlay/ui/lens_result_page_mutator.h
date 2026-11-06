// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lens result page mutator protocol
// summary: Declares the LensResultPageMutator protocol for setting the dark mode user interface style of the result page.
// ---

#ifndef IOS_CHROME_BROWSER_LENS_OVERLAY_UI_LENS_RESULT_PAGE_MUTATOR_H_
#define IOS_CHROME_BROWSER_LENS_OVERLAY_UI_LENS_RESULT_PAGE_MUTATOR_H_

/// Mutator for the result page.
@protocol LensResultPageMutator

/// Sets the user interface style mode.
- (void)setIsDarkMode:(BOOL)isDarkMode;

@end

#endif  // IOS_CHROME_BROWSER_LENS_OVERLAY_UI_LENS_RESULT_PAGE_MUTATOR_H_

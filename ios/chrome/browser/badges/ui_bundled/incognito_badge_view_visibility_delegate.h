// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Incognito badge view visibility delegate protocol
// summary: Declares a delegate protocol with a method to show or hide the incognito badge view.
// ---

#ifndef IOS_CHROME_BROWSER_BADGES_UI_BUNDLED_INCOGNITO_BADGE_VIEW_VISIBILITY_DELEGATE_H_
#define IOS_CHROME_BROWSER_BADGES_UI_BUNDLED_INCOGNITO_BADGE_VIEW_VISIBILITY_DELEGATE_H_

// A delegate for the incognito badge view visibility.
@protocol IncognitoBadgeViewVisibilityDelegate

// Show/hide the incognito badge view.
- (void)setIncognitoBadgeViewHidden:(BOOL)hidden;

@end

#endif  // IOS_CHROME_BROWSER_BADGES_UI_BUNDLED_INCOGNITO_BADGE_VIEW_VISIBILITY_DELEGATE_H_

// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page action menu view controller delegate protocol
// summary: Declares delegate callbacks for translate options, Ask Gemini and footer link taps from the page action menu view controller.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_PAGE_ACTION_MENU_UI_PAGE_ACTION_MENU_VIEW_CONTROLLER_DELEGATE_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_PAGE_ACTION_MENU_UI_PAGE_ACTION_MENU_VIEW_CONTROLLER_DELEGATE_H_

@class PageActionMenuViewController;

// Delegate for PageActionMenuViewController.
@protocol PageActionMenuViewControllerDelegate

// Called when the user taps the translate options button.
- (void)viewControllerDidTapTranslateOptionsButton:
    (PageActionMenuViewController*)viewController;

// Called when the user taps the Ask Gemini button.
- (void)viewControllerDidTapGemini:
    (PageActionMenuViewController*)viewController;

// Called when the user taps a link in the footer.
- (void)viewController:(PageActionMenuViewController*)viewController
    didTapFooterItemLink:(NSString*)actionIdentifier;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_PAGE_ACTION_MENU_UI_PAGE_ACTION_MENU_VIEW_CONTROLLER_DELEGATE_H_

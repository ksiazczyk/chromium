// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: New tab page controller delegate protocol
// summary: Defines a delegate protocol for the new tab page to report tablet omnibox scroll progress and forward fakebox scribble events to the toolbar.
// ---

#ifndef IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_CONTROLLER_DELEGATE_H_
#define IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_CONTROLLER_DELEGATE_H_

// Delegate for NTP and it's subclasses to communicate with the toolbar.
@protocol NewTabPageControllerDelegate

/// TODO(crbug.com/512844934): Rename this method to reflect that it is used for
/// both iPhone and iPad.
// Sets the toolbar location bar alpha and vertical offset based on `progress`.
- (void)setScrollProgressForTabletOmnibox:(CGFloat)progress;

// The target for scribble events as forwarded by the NTP fakebox.
- (UIResponder<UITextInput>*)fakeboxScribbleForwardingTarget;

@end

#endif  // IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_CONTROLLER_DELEGATE_H_

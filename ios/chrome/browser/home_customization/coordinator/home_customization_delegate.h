// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Home customization delegate protocol
// summary: Declares the delegate protocol the customization coordinator uses to ask its parent New Tab Page coordinator to dismiss the customization menu.
// ---

#ifndef IOS_CHROME_BROWSER_HOME_CUSTOMIZATION_COORDINATOR_HOME_CUSTOMIZATION_DELEGATE_H_
#define IOS_CHROME_BROWSER_HOME_CUSTOMIZATION_COORDINATOR_HOME_CUSTOMIZATION_DELEGATE_H_

// Delegate protocol for the HomeCustomizationCoordinator to communicate with
// its parent coordinator, the NewTabPageCoordinator.
@protocol HomeCustomizationDelegate

// Dismisses the customization menu.
- (void)dismissCustomizationMenu;

@end

#endif  // IOS_CHROME_BROWSER_HOME_CUSTOMIZATION_COORDINATOR_HOME_CUSTOMIZATION_DELEGATE_H_

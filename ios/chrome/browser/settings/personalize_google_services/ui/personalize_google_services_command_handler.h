// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Personalize Google Services command handler protocol
// summary: Declares the protocol the view controller uses to report user actions, such as opening the Web & App Activity and Linked Google Services dialogs.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_PERSONALIZE_GOOGLE_SERVICES_UI_PERSONALIZE_GOOGLE_SERVICES_COMMAND_HANDLER_H_
#define IOS_CHROME_BROWSER_SETTINGS_PERSONALIZE_GOOGLE_SERVICES_UI_PERSONALIZE_GOOGLE_SERVICES_COMMAND_HANDLER_H_

// Protocol to communicate user actions from the view controller to its
// coordinator.
@protocol PersonalizeGoogleServicesCommandHandler <NSObject>

// Opens the "Web & App Activity" dialog.
- (void)openWebAppActivityDialog;

// Open the "Linked Google Services" dialog.
- (void)openLinkedGoogleServicesDialog;

@end
#endif  // IOS_CHROME_BROWSER_SETTINGS_PERSONALIZE_GOOGLE_SERVICES_UI_PERSONALIZE_GOOGLE_SERVICES_COMMAND_HANDLER_H_

// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Managed profile creation consumer protocol
// summary: Declares the ManagedProfileCreationConsumer protocol used to inform the UI that the user changed the selection.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_ENTERPRISE_MANAGED_PROFILE_CREATION_UI_MANAGED_PROFILE_CREATION_CONSUMER_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_ENTERPRISE_MANAGED_PROFILE_CREATION_UI_MANAGED_PROFILE_CREATION_CONSUMER_H_

#import <UIKit/UIKit.h>

// Handles managed profile creation screen UI updates.
@protocol ManagedProfileCreationConsumer <NSObject>

// Informs the UI that the user changed the selection.
- (void)userChangedSelection;

@end

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_ENTERPRISE_MANAGED_PROFILE_CREATION_UI_MANAGED_PROFILE_CREATION_CONSUMER_H_

// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SyncedSetUpViewController interface
// summary: Declares the full-screen view controller that greets the user with their name and avatar in the Synced Set Up flow.
// ---

#ifndef IOS_CHROME_BROWSER_SYNCED_SET_UP_UI_SYNCED_SET_UP_VIEW_CONTROLLER_H_
#define IOS_CHROME_BROWSER_SYNCED_SET_UP_UI_SYNCED_SET_UP_VIEW_CONTROLLER_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/synced_set_up/ui/synced_set_up_consumer.h"

// View controller that displays a full-screen welcome page for the Synced Set
// Up flow, greeting the user with their name and avatar.
@interface SyncedSetUpViewController : UIViewController <SyncedSetUpConsumer>
@end

#endif  // IOS_CHROME_BROWSER_SYNCED_SET_UP_UI_SYNCED_SET_UP_VIEW_CONTROLLER_H_

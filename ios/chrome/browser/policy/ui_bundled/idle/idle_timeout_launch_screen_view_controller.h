// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Idle timeout launch screen view controller header
// summary: Declares a launch screen view controller shown on launch or re-foreground while enterprise idle timeout actions run, featuring a loading spinner.
// ---

#ifndef IOS_CHROME_BROWSER_POLICY_UI_BUNDLED_IDLE_IDLE_TIMEOUT_LAUNCH_SCREEN_VIEW_CONTROLLER_H_
#define IOS_CHROME_BROWSER_POLICY_UI_BUNDLED_IDLE_IDLE_TIMEOUT_LAUNCH_SCREEN_VIEW_CONTROLLER_H_

#import "ios/chrome/app/launch_screen_view_controller.h"

// View controller that is displayed to users on launch or re-foreground. It is
// displayed when waiting for the enterprise idle timeout actions to run, and it
// contains a loading spinner.
@interface IdleTimeoutLaunchScreenViewController : LaunchScreenViewController

@end

#endif  // IOS_CHROME_BROWSER_POLICY_UI_BUNDLED_IDLE_IDLE_TIMEOUT_LAUNCH_SCREEN_VIEW_CONTROLLER_H_

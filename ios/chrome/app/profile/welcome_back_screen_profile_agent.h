// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Welcome Back screen profile agent header
// summary: Declares a profile agent that displays the Welcome Back promo to resurrected users.
// ---

#ifndef IOS_CHROME_APP_PROFILE_WELCOME_BACK_SCREEN_PROFILE_AGENT_H_
#define IOS_CHROME_APP_PROFILE_WELCOME_BACK_SCREEN_PROFILE_AGENT_H_

#import "ios/chrome/app/profile/observing_profile_agent.h"

// `ProfileAgent` that displays the Welcome Back promo to resurrected users.
@interface WelcomeBackScreenProfileAgent : ObservingProfileAgent
@end

#endif  // IOS_CHROME_APP_PROFILE_WELCOME_BACK_SCREEN_PROFILE_AGENT_H_

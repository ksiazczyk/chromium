// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PostRestoreProfileAgent header
// summary: Declares a profile agent that displays the Post Restore UI when needed.
// ---

#ifndef IOS_CHROME_APP_PROFILE_POST_RESTORE_PROFILE_AGENT_H_
#define IOS_CHROME_APP_PROFILE_POST_RESTORE_PROFILE_AGENT_H_

#import "ios/chrome/app/profile/observing_profile_agent.h"

// Profile agent that displays the Post Restore UI when needed.
@interface PostRestoreProfileAgent : ObservingProfileAgent
@end

#endif  // IOS_CHROME_APP_PROFILE_POST_RESTORE_PROFILE_AGENT_H_

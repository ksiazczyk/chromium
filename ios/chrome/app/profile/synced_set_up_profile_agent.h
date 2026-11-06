// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Synced Set Up profile agent header
// summary: Declares a profile agent that triggers the Synced Set Up confirmation when necessary during profile startup.
// ---

#ifndef IOS_CHROME_APP_PROFILE_SYNCED_SET_UP_PROFILE_AGENT_H_
#define IOS_CHROME_APP_PROFILE_SYNCED_SET_UP_PROFILE_AGENT_H_

#import "ios/chrome/app/profile/scene_observing_profile_agent.h"

// Profile agent that triggers the Synced Set Up confirmation when necessary.
@interface SyncedSetUpProfileAgent : SceneObservingProfileAgent
@end

#endif  // IOS_CHROME_APP_PROFILE_SYNCED_SET_UP_PROFILE_AGENT_H_

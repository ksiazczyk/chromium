// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Multi-profile forced migration profile agent interface
// summary: Declares the profile agent that triggers the multi-profile forced migration screen when a forced migration occurred during startup.
// ---

#ifndef IOS_CHROME_APP_PROFILE_MULTI_PROFILE_FORCED_MIGRATION_PROFILE_AGENT_H_
#define IOS_CHROME_APP_PROFILE_MULTI_PROFILE_FORCED_MIGRATION_PROFILE_AGENT_H_

#import "ios/chrome/app/profile/scene_observing_profile_agent.h"

// Profile agent that triggers the multi-profile force migration screen if a
// forced migration was done during start-up.
@interface MultiProfileForcedMigrationProfileAgent : SceneObservingProfileAgent

@end

#endif  // IOS_CHROME_APP_PROFILE_MULTI_PROFILE_FORCED_MIGRATION_PROFILE_AGENT_H_

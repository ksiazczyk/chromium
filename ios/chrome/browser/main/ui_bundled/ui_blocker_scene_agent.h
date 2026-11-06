// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UI blocker scene agent header
// summary: Declares UIBlockerSceneAgent, a scene agent that shows a UI overlay on the scene in response to modal overlay show and hide events.
// ---

#ifndef IOS_CHROME_BROWSER_MAIN_UI_BUNDLED_UI_BLOCKER_SCENE_AGENT_H_
#define IOS_CHROME_BROWSER_MAIN_UI_BUNDLED_UI_BLOCKER_SCENE_AGENT_H_

#import "ios/chrome/browser/shared/coordinator/scene/observing_scene_state_agent.h"

// A scene agent that shows a UI overlay on the scene based on modal overlay
// show/hide events.
@interface UIBlockerSceneAgent : ObservingSceneAgent
@end

#endif  // IOS_CHROME_BROWSER_MAIN_UI_BUNDLED_UI_BLOCKER_SCENE_AGENT_H_

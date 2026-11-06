// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TaskUpdaterSceneAgent header
// summary: Declares a scene agent that updates the TaskOrchestrator with the current execution stage of the scene.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_COORDINATOR_SCENE_TASK_UPDATER_SCENE_AGENT_H_
#define IOS_CHROME_BROWSER_SHARED_COORDINATOR_SCENE_TASK_UPDATER_SCENE_AGENT_H_

#import "ios/chrome/browser/shared/coordinator/scene/observing_scene_state_agent.h"

// A scene agent that updates the TaskOrchestrator with the current execution
// stage of the scene.
@interface TaskUpdaterSceneAgent : ObservingSceneAgent
@end

#endif  // IOS_CHROME_BROWSER_SHARED_COORDINATOR_SCENE_TASK_UPDATER_SCENE_AGENT_H_

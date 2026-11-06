// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Session saving scene agent
// summary: Declares a scene agent that triggers saving of browser sessions when the scene is backgrounded or disconnected.
// ---

#ifndef IOS_CHROME_BROWSER_SESSIONS_MODEL_SESSION_SAVING_SCENE_AGENT_H_
#define IOS_CHROME_BROWSER_SESSIONS_MODEL_SESSION_SAVING_SCENE_AGENT_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/shared/coordinator/scene/observing_scene_state_agent.h"

@interface SessionSavingSceneAgent : ObservingSceneAgent

@end

#endif  // IOS_CHROME_BROWSER_SESSIONS_MODEL_SESSION_SAVING_SCENE_AGENT_H_

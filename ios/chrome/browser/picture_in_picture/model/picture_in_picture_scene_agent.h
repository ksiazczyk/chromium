// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Picture in picture scene agent interface
// summary: Declares PictureInPictureSceneAgent, an observing scene agent that handles returning to the app from picture in picture.
// ---

#ifndef IOS_CHROME_BROWSER_PICTURE_IN_PICTURE_MODEL_PICTURE_IN_PICTURE_SCENE_AGENT_H_
#define IOS_CHROME_BROWSER_PICTURE_IN_PICTURE_MODEL_PICTURE_IN_PICTURE_SCENE_AGENT_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/shared/coordinator/scene/observing_scene_state_agent.h"

// A scene agent that handles picture in picture return to app.
@interface PictureInPictureSceneAgent : ObservingSceneAgent
@end

#endif  // IOS_CHROME_BROWSER_PICTURE_IN_PICTURE_MODEL_PICTURE_IN_PICTURE_SCENE_AGENT_H_

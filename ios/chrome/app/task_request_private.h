// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TaskRequest private interface for subclasses
// summary: Exposes internal TaskRequest properties and initializer, restricted to TaskRequest subclasses and the task_request implementation.
// ---

#ifndef IOS_CHROME_APP_TASK_REQUEST_PRIVATE_H_
#define IOS_CHROME_APP_TASK_REQUEST_PRIVATE_H_

#import "ios/chrome/app/task_request.h"

@class SceneState;

// This header should only be used from TaskRequest sub-classes and from
// task_request.mm, do not use it from the rest of the codebase.
@interface TaskRequest ()

@property(nonatomic, strong, readwrite) NSString* gaiaID;

// Scene state on which the task should be executed.
@property(nonatomic, readonly) SceneState* sceneState;

- (instancetype)initWithSceneState:(SceneState*)sceneState
                       isColdStart:(BOOL)isColdStart;

@end

#endif  // IOS_CHROME_APP_TASK_REQUEST_PRIVATE_H_

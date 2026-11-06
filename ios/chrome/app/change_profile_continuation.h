// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Change profile continuation callback type
// summary: Defines the callback type invoked after a scene transitions to a new profile and declares a helper to chain two continuations.
// ---

#ifndef IOS_CHROME_APP_CHANGE_PROFILE_CONTINUATION_H_
#define IOS_CHROME_APP_CHANGE_PROFILE_CONTINUATION_H_

#import "base/functional/callback_forward.h"

@class SceneState;

// Invoked when the SceneState has transitioned to the new Profile and
// the profile has reached the ProfileInitStage::kUIReady (or higher)
// stage.
//
// Must call the completion on the current sequence when the action this
// ChangeProfileContinuation represents is complete (e.g. sign-in, ...).
//
// The completion may be called synchronously or asynchronously if the
// operation needs to block (e.g. needs to wait for some other external
// condition before it can resume).
using ChangeProfileContinuation =
    base::OnceCallback<void(SceneState*, base::OnceClosure)>;

// Returns a new ChangeProfileContinuation that first invoke `contination1`
// and then invoke `continuation2`.
ChangeProfileContinuation ChainChangeProfileContinuations(
    ChangeProfileContinuation continuation1,
    ChangeProfileContinuation continuation2);

#endif  // IOS_CHROME_APP_CHANGE_PROFILE_CONTINUATION_H_

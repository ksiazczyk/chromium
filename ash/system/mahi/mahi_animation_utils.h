// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mahi animation utilities declarations
// summary: Declares helpers to load lottie animation data and playback configs for the Mahi panel's loading animations.
// relations:
//   - depends_on /ash/system/mahi/mahi_constants.h
//   - depends_on /cc/paint/skottie_wrapper.h
//   - depends_on /ui/lottie/animation.h
// ---

#ifndef ASH_SYSTEM_MAHI_MAHI_ANIMATION_UTILS_H_
#define ASH_SYSTEM_MAHI_MAHI_ANIMATION_UTILS_H_

#include "ash/system/mahi/mahi_constants.h"
#include "cc/paint/skottie_wrapper.h"
#include "ui/lottie/animation.h"

namespace ash::mahi_animation_utils {

// Gets lottie animation data from the json file that maps to the provided
// `animation_id`.
std::unique_ptr<lottie::Animation> GetLottieAnimationData(int animation_id);

// Gets the playback config for the animation that maps to the provided
// `animation_id`.
std::optional<lottie::Animation::PlaybackConfig> GetLottiePlaybackConfig(
    const cc::SkottieWrapper& skottie,
    int animation_id);

}  // namespace ash::mahi_animation_utils

#endif  // ASH_SYSTEM_MAHI_MAHI_ANIMATION_UTILS_H_

// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Audio constants
// summary: Defines shared audio constants, currently the default volume multiplier applied to ducked audio sessions.
// ---

#ifndef MEDIA_AUDIO_AUDIO_CONSTANTS_H_
#define MEDIA_AUDIO_AUDIO_CONSTANTS_H_

namespace media {

// The default multiplier to apply to the volume of ducked audio sessions.
inline constexpr double kDefaultDuckingVolumeMultiplier = 0.2;

}  // namespace media

#endif  // MEDIA_AUDIO_AUDIO_CONSTANTS_H_

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media preference name constants
// summary: Defines the pref name constants representing the user's audio and video input device selection preference rankings.
// ---

#include "chrome/browser/media/prefs/pref_names.h"

// A sorted list of video device IDs, representing the user's selection
// preference.
const char kVideoInputUserPreferenceRanking[] =
    "media.video_input.user_preference_ranking";

// A sorted list of audio device IDs, representing the user's selection
// preference.
const char kAudioInputUserPreferenceRanking[] =
    "media.audio_input.user_preference_ranking";

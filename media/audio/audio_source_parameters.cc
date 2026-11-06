// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AudioSourceParameters implementation
// summary: Implements constructors and destructor for the AudioSourceParameters struct used to configure audio input devices.
// ---

#include "media/audio/audio_source_parameters.h"

namespace media {

AudioSourceParameters::AudioSourceParameters() = default;
AudioSourceParameters::AudioSourceParameters(
    const base::UnguessableToken& session_id)
    : session_id(session_id) {}
AudioSourceParameters::AudioSourceParameters(
    const AudioSourceParameters& params) = default;
AudioSourceParameters::~AudioSourceParameters() = default;

}  // namespace media

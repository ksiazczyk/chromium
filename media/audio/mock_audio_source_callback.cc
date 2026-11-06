// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock audio source callback implementation
// summary: Implements MockAudioSourceCallback, a gmock stand-in for the audio source callback used in audio tests.
// ---

#include "media/audio/mock_audio_source_callback.h"

namespace media {

MockAudioSourceCallback::MockAudioSourceCallback() = default;
MockAudioSourceCallback::~MockAudioSourceCallback() = default;

}  // namespace media

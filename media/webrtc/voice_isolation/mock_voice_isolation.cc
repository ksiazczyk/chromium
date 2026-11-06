// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock voice isolation definitions
// summary: Defines constructors and destructors for the gmock mock classes of VoiceIsolation and VoiceIsolationComponent used in unit tests.
// ---

#include "media/webrtc/voice_isolation/mock_voice_isolation.h"

namespace media {

MockVoiceIsolation::MockVoiceIsolation() = default;
MockVoiceIsolation::~MockVoiceIsolation() = default;

MockVoiceIsolationComponent::MockVoiceIsolationComponent() = default;
MockVoiceIsolationComponent::~MockVoiceIsolationComponent() = default;

}  // namespace media

// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock preferred audio output device manager implementation
// summary: Provides the constructor and destructor for the gmock mock of PreferredAudioOutputDeviceManager used in tests.
// ---

#include "content/browser/renderer_host/media/mock_preferred_audio_output_device_manager.h"

namespace content {

MockPreferredAudioOutputDeviceManager::MockPreferredAudioOutputDeviceManager() =
    default;

MockPreferredAudioOutputDeviceManager::
    ~MockPreferredAudioOutputDeviceManager() = default;

}  // namespace content

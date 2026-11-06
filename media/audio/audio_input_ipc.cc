// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AudioInputIPC base implementation
// summary: Provides default destructors for the audio input IPC interfaces and a null default implementation for processor controls.
// ---

#include "media/audio/audio_input_ipc.h"

namespace media {

AudioInputIPCDelegate::~AudioInputIPCDelegate() = default;

AudioInputIPC::~AudioInputIPC() = default;

AudioProcessorControls* AudioInputIPC::GetProcessorControls() {
  return nullptr;
}

}  // namespace media

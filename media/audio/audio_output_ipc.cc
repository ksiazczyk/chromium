// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AudioOutputIPC destructor definitions
// summary: Defines the default destructors for the AudioOutputIPC and AudioOutputIPCDelegate media interfaces.
// ---

#include "media/audio/audio_output_ipc.h"

namespace media {

AudioOutputIPCDelegate::~AudioOutputIPCDelegate() = default;

AudioOutputIPC::~AudioOutputIPC() = default;

}  // namespace media

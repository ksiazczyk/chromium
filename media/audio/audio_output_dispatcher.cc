// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AudioOutputDispatcher implementation
// summary: Implements the AudioOutputDispatcher base class constructor and destructor, asserting they run on the audio manager's task runner.
// ---

#include "media/audio/audio_output_dispatcher.h"

#include "base/task/single_thread_task_runner.h"
#include "media/audio/audio_manager.h"

namespace media {

AudioOutputDispatcher::AudioOutputDispatcher(AudioManager* audio_manager)
    : audio_manager_(audio_manager) {
  DCHECK(audio_manager->GetTaskRunner()->BelongsToCurrentThread());
}

AudioOutputDispatcher::~AudioOutputDispatcher() {
  DCHECK(audio_manager_->GetTaskRunner()->BelongsToCurrentThread());
}

}  // namespace media

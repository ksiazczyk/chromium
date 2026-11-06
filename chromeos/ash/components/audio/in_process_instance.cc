// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: In-process binding for CrosAudioConfig
// summary: Binds incoming CrosAudioConfig Mojo receivers to a singleton CrosAudioConfigImpl instance inside the browser process.
// ---

#include "chromeos/ash/components/audio/in_process_instance.h"

#include "base/no_destructor.h"
#include "chromeos/ash/components/audio/cros_audio_config_impl.h"

namespace ash::audio_config {

void BindToInProcessInstance(
    mojo::PendingReceiver<mojom::CrosAudioConfig> pending_receiver) {
  static base::NoDestructor<CrosAudioConfigImpl> instance;
  instance->BindPendingReceiver(std::move(pending_receiver));
}

}  // namespace ash::audio_config

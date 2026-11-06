// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Supported audio decoder config Mojom traits implementation
// summary: Implements Mojo StructTraits deserialization for supported audio decoder configurations, reading codec and profile.
// ---

#include "media/mojo/mojom/supported_audio_decoder_config_mojom_traits.h"

namespace mojo {

// static
bool StructTraits<media::mojom::SupportedAudioDecoderConfigDataView,
                  media::SupportedAudioDecoderConfig>::
    Read(media::mojom::SupportedAudioDecoderConfigDataView input,
         media::SupportedAudioDecoderConfig* output) {
  if (!input.ReadCodec(&output->codec)) {
    return false;
  }
  if (!input.ReadProfile(&output->profile)) {
    return false;
  }
  return true;
}

}  // namespace mojo

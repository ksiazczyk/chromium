// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SupportedAudioDecoderConfig declaration
// summary: Declares a struct pairing an audio codec with a profile to describe supported audio decoders for cross-process communication.
// ---

#ifndef MEDIA_BASE_SUPPORTED_AUDIO_DECODER_CONFIG_H_
#define MEDIA_BASE_SUPPORTED_AUDIO_DECODER_CONFIG_H_

#include <vector>

#include "media/base/audio_codecs.h"
#include "media/base/media_export.h"

namespace media {

// Specifies the supported audio configurations of audio decoder for
// communication between processes like Renderer and GPU.
struct MEDIA_EXPORT SupportedAudioDecoderConfig {
  SupportedAudioDecoderConfig();
  SupportedAudioDecoderConfig(AudioCodec codec, AudioCodecProfile profile);
  ~SupportedAudioDecoderConfig();

  bool operator<=>(const SupportedAudioDecoderConfig& other) const = default;

  AudioCodec codec;
  AudioCodecProfile profile;
};

using SupportedAudioDecoderConfigs = std::vector<SupportedAudioDecoderConfig>;

}  // namespace media

#endif  // MEDIA_BASE_SUPPORTED_AUDIO_DECODER_CONFIG_H_

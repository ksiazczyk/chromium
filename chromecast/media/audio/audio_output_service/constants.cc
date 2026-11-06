// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default audio output service endpoint constants
// summary: Defines the default Unix domain socket path and TCP port used to reach the audio output service.
// ---

#include "chromecast/media/audio/audio_output_service/constants.h"

namespace chromecast {
namespace media {
namespace audio_output_service {

const char kDefaultAudioOutputServiceUnixDomainSocketPath[] =
    "/tmp/audio-output-service";
const int kDefaultAudioOutputServiceTcpPort = 13651;

}  // namespace audio_output_service
}  // namespace media
}  // namespace chromecast

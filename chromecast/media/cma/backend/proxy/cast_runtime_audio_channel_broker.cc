// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast runtime audio channel broker implementation
// summary: Implements the destructors of the CastRuntimeAudioChannelBroker interface and its Handler base class.
// ---

#include "chromecast/media/cma/backend/proxy/cast_runtime_audio_channel_broker.h"

namespace chromecast {
namespace media {

CastRuntimeAudioChannelBroker::~CastRuntimeAudioChannelBroker() = default;

CastRuntimeAudioChannelBroker::Handler::~Handler() = default;

}  // namespace media
}  // namespace chromecast

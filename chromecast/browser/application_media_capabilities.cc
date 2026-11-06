// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Application media capabilities implementation
// summary: Implements the ApplicationMediaCapabilities Mojo service that tracks supported bitstream audio codecs and notifies observers.
// ---

#include "chromecast/browser/application_media_capabilities.h"

#include <utility>

#include "chromecast/base/bitstream_audio_codecs.h"

namespace chromecast {
namespace shell {

ApplicationMediaCapabilities::ApplicationMediaCapabilities() = default;

ApplicationMediaCapabilities::~ApplicationMediaCapabilities() = default;

void ApplicationMediaCapabilities::AddReceiver(
    mojo::PendingReceiver<mojom::ApplicationMediaCapabilities> receiver) {
  receivers_.Add(this, std::move(receiver));
}

void ApplicationMediaCapabilities::SetSupportedBitstreamAudioCodecs(
    const BitstreamAudioCodecsInfo& info) {
  supported_bitstream_audio_codecs_info_ = info;
  for (auto& observer : observers_)
    observer->OnSupportedBitstreamAudioCodecsChanged(info);
}

void ApplicationMediaCapabilities::AddObserver(
    mojo::PendingRemote<mojom::ApplicationMediaCapabilitiesObserver>
        observer_remote) {
  mojo::Remote<mojom::ApplicationMediaCapabilitiesObserver> observer(
      std::move(observer_remote));
  observer->OnSupportedBitstreamAudioCodecsChanged(
      supported_bitstream_audio_codecs_info_);
  observers_.Add(std::move(observer));
}

}  // namespace shell
}  // namespace chromecast

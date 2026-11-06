// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FakeAudioSource implementation
// summary: Implements a fake AudioSource that stores the packet-captured callback for use in tests.
// ---

#include "remoting/protocol/fake_audio_source.h"

namespace remoting::protocol {

FakeAudioSource::FakeAudioSource() = default;
FakeAudioSource::~FakeAudioSource() = default;

bool FakeAudioSource::Start(const PacketCapturedCallback& callback) {
  callback_ = callback;
  return true;
}

}  // namespace remoting::protocol

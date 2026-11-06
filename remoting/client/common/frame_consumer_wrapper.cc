// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Frame consumer wrapper implementation
// summary: Implements the FrameConsumerWrapper that forwards an existing FrameConsumer and stubs out video renderer methods unused with WebRTC.
// ---

#include "remoting/client/common/frame_consumer_wrapper.h"

#include "base/notreached.h"
#include "remoting/protocol/frame_consumer.h"

namespace remoting {

FrameConsumerWrapper::FrameConsumerWrapper(protocol::FrameConsumer* consumer)
    : consumer_(consumer) {
  CHECK(consumer_);
}

FrameConsumerWrapper::~FrameConsumerWrapper() = default;

bool FrameConsumerWrapper::Initialize(
    const ClientContext& client_context,
    protocol::FrameStatsConsumer* stats_consumer) {
  // FrameConsumerWrapper::Initialize() is not called for WebRTC.
  NOTREACHED();
}

protocol::VideoStub* FrameConsumerWrapper::GetVideoStub() {
  return nullptr;
}

protocol::FrameConsumer* FrameConsumerWrapper::GetFrameConsumer() {
  return consumer_;
}

protocol::FrameStatsConsumer* FrameConsumerWrapper::GetFrameStatsConsumer() {
  return nullptr;
}

}  // namespace remoting

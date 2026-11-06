// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: QuicChromiumClientStreamBase implementation
// summary: Implements the Chromium HTTP/3 stream base class with error handling and cellular migration hooks.
// ---

#include "net/quic/quic_chromium_client_stream_base.h"

namespace net {

QuicChromiumClientStreamBase::QuicChromiumClientStreamBase(
    quic::QuicStreamId id,
    quic::QuicSpdyClientSessionBase* session,
    quic::StreamType type)
    : quic::QuicSpdyStream(id, session, type) {}

void QuicChromiumClientStreamBase::OnError(int error) {}

bool QuicChromiumClientStreamBase::CanMigrateToCellularNetwork() const {
  return can_migrate_to_cellular_network_;
}

}  // namespace net

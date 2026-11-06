// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Transport client socket base implementation
// summary: Default implementations for TransportClientSocket, returning not-implemented for SetNoDelay and SetKeepAlive.
// ---

#include "net/socket/transport_client_socket.h"

#include "base/notimplemented.h"

namespace net {

TransportClientSocket::TransportClientSocket() = default;
TransportClientSocket::~TransportClientSocket() = default;

bool TransportClientSocket::SetNoDelay(bool no_delay) {
  NOTIMPLEMENTED();
  return false;
}

bool TransportClientSocket::SetKeepAlive(bool enable, int delay_secs) {
  NOTIMPLEMENTED();
  return false;
}

}  // namespace net

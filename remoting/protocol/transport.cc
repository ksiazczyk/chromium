// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TransportRoute implementation
// summary: Implements string conversion for transport route types such as direct, STUN and relay.
// ---

#include "remoting/protocol/transport.h"

#include "base/notreached.h"

namespace remoting::protocol {

// static
std::string TransportRoute::GetTypeString(RouteType type) {
  switch (type) {
    case DIRECT:
      return "direct";
    case STUN:
      return "stun";
    case RELAY:
      return "relay";
  }
  NOTREACHED();
}

TransportRoute::TransportRoute() : type(DIRECT) {}
TransportRoute::~TransportRoute() = default;

}  // namespace remoting::protocol

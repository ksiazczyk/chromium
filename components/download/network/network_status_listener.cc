// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Network status listener base class implementation
// summary: Implements the NetworkStatusListener base class, managing observer registration and the current connection type.
// ---

#include "components/download/network/network_status_listener.h"

namespace download {

NetworkStatusListener::NetworkStatusListener() = default;

NetworkStatusListener::~NetworkStatusListener() = default;

void NetworkStatusListener::Start(NetworkStatusListener::Observer* observer) {
  observer_ = observer;
}

void NetworkStatusListener::Stop() {
  observer_ = nullptr;
}

net::NetworkChangeNotifier::ConnectionType
NetworkStatusListener::GetConnectionType() {
  return connection_type_;
}

}  // namespace download

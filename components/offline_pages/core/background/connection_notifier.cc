// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ConnectionNotifier implementation
// summary: Implements ConnectionNotifier as a network change observer that runs a stored callback when the device regains a network connection.
// ---

#include "components/offline_pages/core/background/connection_notifier.h"

namespace offline_pages {

ConnectionNotifier::ConnectionNotifier(
    ConnectionNotifier::ConnectedCallback callback)
    : callback_(std::move(callback)) {
  net::NetworkChangeNotifier::AddNetworkChangeObserver(this);
}

ConnectionNotifier::~ConnectionNotifier() {
  net::NetworkChangeNotifier::RemoveNetworkChangeObserver(this);
}

void ConnectionNotifier::OnNetworkChanged(
    net::NetworkChangeNotifier::ConnectionType type) {
  if (type != net::NetworkChangeNotifier::ConnectionType::CONNECTION_NONE)
    std::move(callback_).Run();
}

}  // namespace offline_pages

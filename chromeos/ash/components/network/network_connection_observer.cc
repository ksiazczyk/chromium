// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NetworkConnectionObserver default implementations
// summary: Provides default no-op implementations of the network connection observer callbacks, with connect requests proceeding by default.
// ---

#include "chromeos/ash/components/network/network_connection_observer.h"

namespace ash {

NetworkConnectionObserver::NetworkConnectionObserver() = default;

ConnectToNetworkRequestVerdict
NetworkConnectionObserver::ConnectToNetworkRequested(
    const std::string& service_path) {
  return ConnectToNetworkRequestVerdict::kProceed;
}

void NetworkConnectionObserver::ConnectSucceeded(
    const std::string& service_path) {
}

void NetworkConnectionObserver::ConnectFailed(const std::string& service_path,
                                              const std::string& error_name) {
}

void NetworkConnectionObserver::DisconnectRequested(
    const std::string& service_path) {
}

NetworkConnectionObserver::~NetworkConnectionObserver() = default;

}  // namespace ash

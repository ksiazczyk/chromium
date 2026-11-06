// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: QUIC network connectivity tracker implementation
// summary: Implements QuicNetworkConnectivityTracker, tracking whether QUIC has ever worked on the current network and resetting that state on IP address changes.
// ---

#include "net/quic/quic_network_connectivity_tracker.h"

namespace net {

QuicNetworkConnectivityTracker::QuicNetworkConnectivityTracker() {
  NetworkChangeNotifier::AddIPAddressObserver(this);
}

QuicNetworkConnectivityTracker::~QuicNetworkConnectivityTracker() {
  NetworkChangeNotifier::RemoveIPAddressObserver(this);
}

void QuicNetworkConnectivityTracker::OnQuicWorkingOnCurrentNetwork() {
  has_quic_ever_worked_on_current_network_ = true;
}

void QuicNetworkConnectivityTracker::ResetQuicWorkingOnCurrentNetwork() {
  has_quic_ever_worked_on_current_network_ = false;
}

bool QuicNetworkConnectivityTracker::HasQuicEverWorkedOnCurrentNetwork() const {
  return has_quic_ever_worked_on_current_network_;
}

void QuicNetworkConnectivityTracker::OnIPAddressChanged(
    NetworkChangeNotifier::IPAddressChangeType change_type) {
  has_quic_ever_worked_on_current_network_ = false;
}

}  // namespace net

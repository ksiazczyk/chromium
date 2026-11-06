// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GCM connection observer implementation
// summary: Provides default no-op implementations of the GCMConnectionObserver OnConnected and OnDisconnected callbacks.
// ---

#include "components/gcm_driver/gcm_connection_observer.h"

namespace gcm {

GCMConnectionObserver::GCMConnectionObserver() = default;
GCMConnectionObserver::~GCMConnectionObserver() = default;

void GCMConnectionObserver::OnConnected(const net::IPEndPoint& ip_endpoint) {
}

void GCMConnectionObserver::OnDisconnected() {
}

}  // namespace gcm

// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockDnsSdRegistry implementation
// summary: Implements MockDnsSdRegistry methods that dispatch mDNS events and simulate permission rejection to a DnsSdObserver during tests.
// ---

#include "chrome/browser/media/router/test/mock_dns_sd_registry.h"

namespace media_router {

MockDnsSdRegistry::MockDnsSdRegistry(DnsSdRegistry::DnsSdObserver* observer)
    : DnsSdRegistry(nullptr), observer_(observer) {}

MockDnsSdRegistry::~MockDnsSdRegistry() = default;

void MockDnsSdRegistry::DispatchMDnsEvent(const std::string& service_type,
                                          const DnsSdServiceList& services) {
  observer_->OnDnsSdEvent(service_type, services);
}

void MockDnsSdRegistry::SimulatePermissionRejected() {
  observer_->OnDnsSdPermissionRejected();
}

}  // namespace media_router

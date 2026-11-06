// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock mDNS client implementation
// summary: Provides constructor and destructor definitions for the mock mDNS transaction and client classes declared in the corresponding header.
// ---

#include "net/dns/mock_mdns_client.h"

namespace net {

MockMDnsTransaction::MockMDnsTransaction() = default;

MockMDnsTransaction::~MockMDnsTransaction() = default;

MockMDnsClient::MockMDnsClient() = default;

MockMDnsClient::~MockMDnsClient() = default;

}  // namespace net

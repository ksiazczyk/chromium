// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Unimplemented platform DNS attempt factory
// summary: Stub DnsPlatformAttemptFactory whose CreateDnsPlatformAttempt always fails with NOTREACHED for platforms without platform DNS support.
// ---

#include "net/dns/dns_platform_attempt_factory_not_implemented.h"

#include "net/base/network_handle.h"
#include "net/log/net_log_with_source.h"

namespace net {

std::unique_ptr<DnsAttempt>
DnsPlatformAttemptFactoryNotImplemented::CreateDnsPlatformAttempt(
    size_t server_index,
    base::span<const uint8_t> hostname,
    uint16_t dns_query_type,
    handles::NetworkHandle target_network,
    const NetLogWithSource& net_log) {
  NOTREACHED() << "DnsPlatformAttemptFactoryNotImplemented is not implemented.";
}

}  // namespace net

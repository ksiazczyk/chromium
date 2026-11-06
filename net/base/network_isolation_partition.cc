// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NetworkIsolationPartition implementation
// summary: Implements debug-string conversion for NetworkIsolationPartition values and the rule that allows empty partitions for DNS-over-HTTPS requests.
// ---

#include "net/base/network_isolation_partition.h"

#include <string>

namespace net {

std::string NetworkIsolationPartitionToDebugString(
    NetworkIsolationPartition network_isolation_partition) {
  switch (network_isolation_partition) {
    case NetworkIsolationPartition::kGeneral:
      return "general partition";
    case NetworkIsolationPartition::kProtectedAudienceSellerWorklet:
      return "protected audience seller worklet partition";
    case NetworkIsolationPartition::kFedCmUncredentialedRequests:
      return "fedcm uncredentialed requests";
    case NetworkIsolationPartition::kDnsOverHttps:
      return "dns over https";
    case NetworkIsolationPartition::kSharedWorkerSameSiteCookiesNone:
      return "shared worker same site cookies none";
  }
}

bool NetworkIsolationPartitionAlwaysAllowEmptyPartition(
    NetworkIsolationPartition network_isolation_partition) {
  return network_isolation_partition ==
         NetworkIsolationPartition::kDnsOverHttps;
}

}  // namespace net

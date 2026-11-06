// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ResolveHostResult implementation for DNS resolution results
// summary: Implements ResolveHostResult, capturing the result code and empty-address-list state of a completed DNS resolution request and serializing it to a dictionary.
// ---

#include "net/proxy_resolution/resolve_host_request.h"

namespace net {

ResolveHostResult::ResolveHostResult(
    int result_code,
    const HostResolver::ResolveHostRequest& completed_request)
    : result_code(result_code),
      is_address_list_empty(completed_request.GetAddressResults().empty()) {}

void ResolveHostResult::AddToDict(base::DictValue& dict) const {
  dict.Set("net_error", result_code);
  dict.Set("is_address_list_empty", is_address_list_empty);
}

}  // namespace net

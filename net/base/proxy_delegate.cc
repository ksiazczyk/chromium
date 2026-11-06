// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Proxy delegate default override
// summary: Provides the default ProxyDelegate implementation of CanFalloverToNextProxyOverride, which by default applies no override.
// ---

#include "net/base/proxy_delegate.h"

#include <optional>

#include "net/base/proxy_chain.h"
#include "net/http/proxy_fallback.h"

namespace net {

std::optional<bool> ProxyDelegate::CanFalloverToNextProxyOverride(
    const ProxyChain& proxy_chain,
    int net_error) {
  return std::nullopt;
}

}  // namespace net

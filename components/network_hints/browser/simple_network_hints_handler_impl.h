// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Simple network hints handler class declaration
// summary: Declares SimpleNetworkHintsHandlerImpl, the per-render-frame browser handler for DNS prefetch and preconnect hints received from renderers.
// ---

#ifndef COMPONENTS_NETWORK_HINTS_BROWSER_SIMPLE_NETWORK_HINTS_HANDLER_IMPL_H_
#define COMPONENTS_NETWORK_HINTS_BROWSER_SIMPLE_NETWORK_HINTS_HANDLER_IMPL_H_

#include <vector>

#include "components/network_hints/common/network_hints.mojom.h"
#include "content/public/browser/global_routing_id.h"

namespace content {
class RenderFrameHost;
}

namespace network_hints {

// Simple browser-side handler for DNS prefetch requests.
// Each renderer process requires its own filter.
class SimpleNetworkHintsHandlerImpl : public mojom::NetworkHintsHandler {
 public:
  explicit SimpleNetworkHintsHandlerImpl(
      content::GlobalRenderFrameHostId render_frame_host_id);

  SimpleNetworkHintsHandlerImpl(const SimpleNetworkHintsHandlerImpl&) = delete;
  SimpleNetworkHintsHandlerImpl& operator=(
      const SimpleNetworkHintsHandlerImpl&) = delete;

  ~SimpleNetworkHintsHandlerImpl() override;

  static void Create(
      content::RenderFrameHost* frame_host,
      mojo::PendingReceiver<mojom::NetworkHintsHandler> receiver);

  // mojom::NetworkHintsHandler methods:
  void PrefetchDNS(const std::vector<url::SchemeHostPort>& urls) override;
  void Preconnect(const url::SchemeHostPort& url,
                  bool allow_credentials) override;

 private:
  const content::GlobalRenderFrameHostId render_frame_host_id_;
};

}  // namespace network_hints

#endif  // COMPONENTS_NETWORK_HINTS_BROWSER_SIMPLE_NETWORK_HINTS_HANDLER_IMPL_H_

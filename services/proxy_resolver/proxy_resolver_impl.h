// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ProxyResolverImpl class header
// summary: Declares ProxyResolverImpl, the Mojo ProxyResolver service implementation that forwards GetProxyForUrl requests to a ProxyResolverV8Tracing instance and tracks outstanding resolve jobs.
// ---

#ifndef SERVICES_PROXY_RESOLVER_PROXY_RESOLVER_IMPL_H_
#define SERVICES_PROXY_RESOLVER_PROXY_RESOLVER_IMPL_H_

#include <map>
#include <memory>

#include "net/proxy_resolution/proxy_resolver.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom.h"

namespace proxy_resolver {

class ProxyResolverV8Tracing;

class ProxyResolverImpl : public mojom::ProxyResolver {
 public:
  explicit ProxyResolverImpl(std::unique_ptr<ProxyResolverV8Tracing> resolver);

  ProxyResolverImpl(const ProxyResolverImpl&) = delete;
  ProxyResolverImpl& operator=(const ProxyResolverImpl&) = delete;

  ~ProxyResolverImpl() override;

 private:
  class Job;

  // mojom::ProxyResolver overrides.
  void GetProxyForUrl(
      const GURL& url,
      const net::NetworkAnonymizationKey& network_anonymization_key,
      mojo::PendingRemote<mojom::ProxyResolverRequestClient> client) override;

  void DeleteJob(Job* job);

  std::unique_ptr<ProxyResolverV8Tracing> resolver_;
  std::map<Job*, std::unique_ptr<Job>> resolve_jobs_;
};

}  // namespace proxy_resolver

#endif  // SERVICES_PROXY_RESOLVER_PROXY_RESOLVER_IMPL_H_

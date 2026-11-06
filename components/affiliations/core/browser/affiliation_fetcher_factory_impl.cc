// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AffiliationFetcherFactoryImpl
// summary: Implements AffiliationFetcherFactory by creating a HashAffiliationFetcher when fetching is possible and returning nullptr otherwise.
// ---

#include "components/affiliations/core/browser/affiliation_fetcher_factory_impl.h"

#include "components/affiliations/core/browser/hash_affiliation_fetcher.h"
#include "services/network/public/cpp/shared_url_loader_factory.h"

namespace affiliations {

AffiliationFetcherFactoryImpl::AffiliationFetcherFactoryImpl() = default;
AffiliationFetcherFactoryImpl::~AffiliationFetcherFactoryImpl() = default;

std::unique_ptr<AffiliationFetcherInterface>
AffiliationFetcherFactoryImpl::CreateInstance(
    scoped_refptr<network::SharedURLLoaderFactory> url_loader_factory) {
  return HashAffiliationFetcher::IsFetchPossible()
             ? std::make_unique<HashAffiliationFetcher>(
                   std::move(url_loader_factory))
             : nullptr;
}

bool AffiliationFetcherFactoryImpl::CanCreateFetcher() const {
  return HashAffiliationFetcher::IsFetchPossible();
}

}  // namespace affiliations

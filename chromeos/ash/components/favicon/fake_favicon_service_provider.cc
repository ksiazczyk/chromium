// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake favicon service provider implementation
// summary: Implements the test fake that stores FaviconService instances per account ID and returns them via Find.
// ---

#include "chromeos/ash/components/favicon/fake_favicon_service_provider.h"

#include "base/check.h"

namespace ash {

FakeFaviconServiceProvider::FakeFaviconServiceProvider() = default;

FakeFaviconServiceProvider::~FakeFaviconServiceProvider() = default;

void FakeFaviconServiceProvider::SetFaviconServiceForAccount(
    const AccountId& account_id,
    favicon::FaviconService* favicon_service) {
  if (favicon_service) {
    CHECK(favicon_services_.try_emplace(account_id, favicon_service).second);
  } else {
    favicon_services_.erase(account_id);
  }
}

favicon::FaviconService* FakeFaviconServiceProvider::Find(
    const AccountId& account_id) {
  auto it = favicon_services_.find(account_id);
  return it == favicon_services_.end() ? nullptr : it->second;
}

}  // namespace ash

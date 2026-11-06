// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: All quota client types set
// summary: Defines the set of all quota client types, covering file system, IndexedDB, cache, service worker, and background fetch.
// ---

#include "storage/browser/quota/quota_client_type.h"

#include "base/no_destructor.h"

namespace storage {

const QuotaClientTypes& AllQuotaClientTypes() {
  static base::NoDestructor<QuotaClientTypes> all{{
      QuotaClientType::kFileSystem,
      QuotaClientType::kIndexedDatabase,
      QuotaClientType::kServiceWorkerCache,
      QuotaClientType::kServiceWorker,
      QuotaClientType::kBackgroundFetch,
  }};
  return *all;
}

}  // namespace storage

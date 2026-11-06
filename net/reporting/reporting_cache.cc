// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Reporting cache creation
// summary: Implements the ReportingCache factory that creates a ReportingCacheImpl for a given ReportingContext.
// ---

#include "net/reporting/reporting_cache.h"

#include "net/reporting/reporting_cache_impl.h"
#include "net/reporting/reporting_context.h"

namespace net {

// static
std::unique_ptr<ReportingCache> ReportingCache::Create(
    ReportingContext* context) {
  return std::make_unique<ReportingCacheImpl>(context);
}

ReportingCache::~ReportingCache() = default;

}  // namespace net

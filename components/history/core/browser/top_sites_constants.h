// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TopSites cache size constant
// summary: Defines the history namespace constant kTopSitesNumber, which sets how many top sites are stored in the cache.
// ---

#ifndef COMPONENTS_HISTORY_CORE_BROWSER_TOP_SITES_CONSTANTS_H_
#define COMPONENTS_HISTORY_CORE_BROWSER_TOP_SITES_CONSTANTS_H_

#include <stddef.h>

namespace history {
// How many top sites to store in the cache.
static constexpr size_t kTopSitesNumber = 10;
}  // namespace history

#endif  // COMPONENTS_HISTORY_CORE_BROWSER_TOP_SITES_CONSTANTS_H_

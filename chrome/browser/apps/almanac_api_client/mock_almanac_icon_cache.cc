// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Almanac icon cache implementation
// summary: Implements the constructor and destructor of MockAlmanacIconCache, a gmock test double for AlmanacIconCache.
// ---

#include "chrome/browser/apps/almanac_api_client/mock_almanac_icon_cache.h"

namespace apps {
MockAlmanacIconCache::MockAlmanacIconCache() = default;
MockAlmanacIconCache::~MockAlmanacIconCache() = default;
}  // namespace apps

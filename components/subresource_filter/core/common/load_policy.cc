// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Load policy helpers
// summary: Implements MoreRestrictiveLoadPolicy, which returns the stricter of two load policies for resource loads.
// ---

#include "components/subresource_filter/core/common/load_policy.h"

#include <algorithm>

namespace subresource_filter {

LoadPolicy MoreRestrictiveLoadPolicy(LoadPolicy a, LoadPolicy b) {
  return std::max(a, b);
}

}  // namespace subresource_filter

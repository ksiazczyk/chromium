// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Back-forward cache DisabledReason declaration
// summary: Declares the DisabledReason helper that constructs a Chrome-specific back-forward cache disabled reason from a reason ID and optional context string.
// ---

#ifndef COMPONENTS_BACK_FORWARD_CACHE_BACK_FORWARD_CACHE_DISABLE_H_
#define COMPONENTS_BACK_FORWARD_CACHE_BACK_FORWARD_CACHE_DISABLE_H_

#include "components/back_forward_cache/disabled_reason_id.h"
#include "content/public/browser/back_forward_cache.h"
#include "content/public/browser/global_routing_id.h"

namespace back_forward_cache {
// Constructs a chrome-specific DisabledReason
content::BackForwardCache::DisabledReason DisabledReason(
    DisabledReasonId reason_id,
    const std::string& context = "");
}  // namespace back_forward_cache

#endif  // COMPONENTS_BACK_FORWARD_CACHE_BACK_FORWARD_CACHE_DISABLE_H_

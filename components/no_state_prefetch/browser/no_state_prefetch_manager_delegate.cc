// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NoStatePrefetchManagerDelegate default implementation
// summary: Provides default NoStatePrefetchManagerDelegate behavior with an empty preconnect hook and network prediction treated as enabled.
// ---

#include "components/no_state_prefetch/browser/no_state_prefetch_manager_delegate.h"

namespace prerender {

NoStatePrefetchManagerDelegate::NoStatePrefetchManagerDelegate() = default;

void NoStatePrefetchManagerDelegate::MaybePreconnect(const GURL& url) {}

bool NoStatePrefetchManagerDelegate::IsNetworkPredictionPreferenceEnabled() {
  return true;
}

std::string NoStatePrefetchManagerDelegate::GetReasonForDisablingPrediction() {
  return std::string();
}

}  // namespace prerender

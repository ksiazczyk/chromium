// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Connect predictor factory
// summary: Creates a ConnectPredictor backed by the LRU cache implementation when the address sorter connect cache feature is enabled, otherwise returns null.
// ---

#include "net/dns/connect_predictor.h"

#include <memory>

#include "net/base/features.h"
#include "net/dns/connect_predictor_lru_cache.h"

namespace net {

// static
std::unique_ptr<ConnectPredictor> ConnectPredictor::Create() {
  if (base::FeatureList::IsEnabled(features::kAddressSorterConnectCache)) {
    return std::make_unique<ConnectPredictorLRUCache>();
  }
  return nullptr;
}

}  // namespace net

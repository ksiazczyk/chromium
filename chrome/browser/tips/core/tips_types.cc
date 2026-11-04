// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tips signal definition helpers
// summary: Implements factory helpers that build SignalDefinition structs for user action, histogram sum, and histogram enum signals.
// ---

#include "chrome/browser/tips/core/tips_types.h"

#include <utility>

namespace tips {

SignalDefinition UserAction(const std::string& name, int days) {
  return {name, SignalType::kUserAction, days, {}};
}

SignalDefinition HistogramSum(const std::string& name, int days) {
  return {name, SignalType::kHistogramSum, days, {}};
}

SignalDefinition HistogramEnum(const std::string& name,
                               int days,
                               std::vector<int32_t> values) {
  return {name, SignalType::kHistogramEnum, days, std::move(values)};
}

}  // namespace tips

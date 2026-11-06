// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MemoryHint implementation
// summary: Implements constructors and the destructor for MemoryHint, which pairs a hint proto with an optional expiry time for in-memory caches.
// ---

#include "components/optimization_guide/core/hints/memory_hint.h"

namespace optimization_guide {

MemoryHint::MemoryHint(const std::optional<base::Time>& expiry_time,
                       std::unique_ptr<proto::Hint> hint)
    : expiry_time_(expiry_time), hint_(std::move(hint)) {}

MemoryHint::MemoryHint(const base::Time expiry_time, proto::Hint&& hint)
    : expiry_time_(std::optional<base::Time>(expiry_time)),
      hint_(std::make_unique<proto::Hint>(hint)) {}

MemoryHint::~MemoryHint() = default;

}  // namespace optimization_guide

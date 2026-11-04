// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MemoryHistory implementation
// summary: Implements MemoryHistory, saving per-frame memory usage entries into a ring buffer for later inspection.
// ---

#include "cc/resources/memory_history.h"

#include <limits>

#include "base/memory/ptr_util.h"

namespace cc {

// static
std::unique_ptr<MemoryHistory> MemoryHistory::Create() {
  return base::WrapUnique(new MemoryHistory());
}

MemoryHistory::MemoryHistory() = default;

void MemoryHistory::SaveEntry(const MemoryHistory::Entry& entry) {
  ring_buffer_.SaveToBuffer(entry);
}

}  // namespace cc

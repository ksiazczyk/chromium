// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Freelist corruption crash handler
// summary: Implements FreelistCorruptionDetected, which records the slot size in minidumps and crashes immediately when freelist corruption is detected.
// ---

#include "partition_alloc/partition_freelist_entry.h"

#include "partition_alloc/debug_data_on_stack.h"
#include "partition_alloc/partition_alloc_base/immediate_crash.h"

namespace partition_alloc::internal {

void FreelistCorruptionDetected(size_t slot_size) {
  // Make it visible in minidumps.
  PA_DEBUG_DATA_ON_STACK("slotsize", slot_size);
  PA_IMMEDIATE_CRASH();
}

}  // namespace partition_alloc::internal

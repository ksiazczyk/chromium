// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OOM callback implementation
// summary: Stores and runs the registered PartitionAlloc OOM callback that is invoked during an out-of-memory crash.
// ---

#include "partition_alloc/oom_callback.h"

#include "partition_alloc/partition_alloc_check.h"

namespace partition_alloc {

namespace {
PartitionAllocOomCallback g_oom_callback;
}  // namespace

void SetPartitionAllocOomCallback(PartitionAllocOomCallback callback) {
  PA_DCHECK(!g_oom_callback);
  g_oom_callback = callback;
}

namespace internal {
void RunPartitionAllocOomCallback() {
  if (g_oom_callback) {
    g_oom_callback();
  }
}
}  // namespace internal

}  // namespace partition_alloc

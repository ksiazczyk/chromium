// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Double-free and corruption detection hook
// summary: Registers a callback invoked when PartitionAlloc detects a double free or corruption, forwarding to allocator support when backup ref pointer support is enabled.
// ---

#include "base/memory/safety_checks.h"

#if PA_BUILDFLAG(ENABLE_BACKUP_REF_PTR_SUPPORT)
#include "base/allocator/partition_alloc_support.h"
#endif  // PA_BUILDFLAG(ENABLE_BACKUP_REF_PTR_SUPPORT)

namespace base {

void SetDoubleFreeOrCorruptionDetectedFn(void (*fn)(uintptr_t)) {
#if PA_BUILDFLAG(ENABLE_BACKUP_REF_PTR_SUPPORT)
  base::allocator::SetDoubleFreeOrCorruptionDetectedFn(fn);
#endif  // PA_BUILDFLAG(ENABLE_BACKUP_REF_PTR_SUPPORT)
}

}  // namespace base

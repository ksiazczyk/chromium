// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PlatformThread SetName stub implementation
// summary: Defines an empty PlatformThread::SetName for the partition alloc base threading abstraction.
// ---

#include "partition_alloc/partition_alloc_base/threading/platform_thread.h"

namespace partition_alloc::internal::base {

// static
void PlatformThread::SetName(const std::string& name) {}

}  // namespace partition_alloc::internal::base

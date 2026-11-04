// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SharedMemoryMapper default instance
// summary: Implements SharedMemoryMapper::GetDefaultInstance, returning the platform shared memory mapper.
// ---

#include "base/memory/shared_memory_mapper.h"

#include "base/memory/platform_shared_memory_mapper.h"

namespace base {

// static
SharedMemoryMapper* SharedMemoryMapper::GetDefaultInstance() {
  static PlatformSharedMemoryMapper instance;
  return &instance;
}

}  // namespace base

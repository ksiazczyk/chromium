// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: buffer_handle_test_util.cc
// summary: Implements CreateValidLookingBufferHandle, which builds a shared memory-backed file descriptor for use in tests.
// ---

#include "media/mojo/mojom/buffer_handle_test_util.h"

#include "base/memory/unsafe_shared_memory_region.h"

namespace media {
base::ScopedFD CreateValidLookingBufferHandle(size_t size) {
  return base::UnsafeSharedMemoryRegion::TakeHandleForSerialization(
             base::UnsafeSharedMemoryRegion::Create(size))
      .PassPlatformHandle()
      .fd;
}
}  // namespace media

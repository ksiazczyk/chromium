// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit test for Buffer shared memory backing
// summary: Verifies that a Buffer created from a shared memory region reports the region's GUID as its backing GUID.
// ---

#include "gpu/command_buffer/common/buffer.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace gpu {

TEST(Buffer, SharedMemoryHandle) {
  const size_t kSize = 1024;
  base::UnsafeSharedMemoryRegion shared_memory_region =
      base::UnsafeSharedMemoryRegion::Create(kSize);
  base::WritableSharedMemoryMapping shared_memory_mapping =
      shared_memory_region.Map();
  auto shared_memory_guid = shared_memory_region.GetGUID();
  scoped_refptr<Buffer> buffer = MakeBufferFromSharedMemory(
      std::move(shared_memory_region), std::move(shared_memory_mapping));
  EXPECT_EQ(buffer->backing()->GetGUID(), shared_memory_guid);
}

}  // namespace gpu

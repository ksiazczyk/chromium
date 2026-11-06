// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared memory MappableBuffer unit test instantiation
// summary: Instantiates the shared MappableBufferTest suite for the shared memory-backed implementation.
// ---

#include "gpu/command_buffer/client/internal/mappable_buffer_shared_memory.h"

#include <memory>

#include "gpu/command_buffer/client/internal/mappable_buffer_test_template.h"

namespace gpu {
namespace {

INSTANTIATE_TYPED_TEST_SUITE_P(MappableBufferSharedMemory,
                               MappableBufferTest,
                               MappableBufferSharedMemory);

}  // namespace
}  // namespace gpu

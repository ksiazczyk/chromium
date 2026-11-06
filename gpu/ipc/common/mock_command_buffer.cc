// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock command buffer implementation
// summary: Implements the MockCommandBuffer test double that binds a Mojo CommandBuffer receiver for use in tests.
// ---

#include "gpu/ipc/common/mock_command_buffer.h"

namespace gpu {

MockCommandBuffer::MockCommandBuffer() = default;

MockCommandBuffer::~MockCommandBuffer() = default;

void MockCommandBuffer::Bind(
    mojo::PendingAssociatedReceiver<mojom::CommandBuffer> receiver) {
  receiver_.Bind(std::move(receiver));
}

}  // namespace gpu

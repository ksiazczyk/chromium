// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock texture owner implementation
// summary: Implements default gmock behavior for MockTextureOwner, returning success for UpdateTexImage and running buffer-available callbacks immediately.
// ---

#include "gpu/command_buffer/service/mock_texture_owner.h"

namespace gpu {

using testing::_;
using testing::Return;

MockTextureOwner::MockTextureOwner() {
  ON_CALL(*this, UpdateTexImage(_)).WillByDefault(Return(true));
  ON_CALL(*this, RunWhenBufferIsAvailable(_))
      .WillByDefault([](base::OnceClosure cb) { std::move(cb).Run(); });
}

MockTextureOwner::~MockTextureOwner() {}

}  // namespace gpu

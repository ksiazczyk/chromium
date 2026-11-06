// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock copy or move hook delegate implementation
// summary: Provides the constructor and destructor for the mock copy or move hook delegate used in file system tests.
// ---

#include "storage/browser/test/mock_copy_or_move_hook_delegate.h"

namespace storage {

MockCopyOrMoveHookDelegate::MockCopyOrMoveHookDelegate() = default;
MockCopyOrMoveHookDelegate::~MockCopyOrMoveHookDelegate() = default;

}  // namespace storage

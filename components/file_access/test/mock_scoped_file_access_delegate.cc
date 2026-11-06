// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockScopedFileAccessDelegate implementation
// summary: Implements the constructor and destructor of the MockScopedFileAccessDelegate test double used to stub scoped file access behavior in tests.
// ---

#include "components/file_access/test/mock_scoped_file_access_delegate.h"

namespace file_access {
MockScopedFileAccessDelegate::MockScopedFileAccessDelegate() = default;
MockScopedFileAccessDelegate::~MockScopedFileAccessDelegate() = default;
}  // namespace file_access

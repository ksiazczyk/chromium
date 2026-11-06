// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: No-Vary-Search mock file operations definitions
// summary: Defines constructors and destructors for the gmock mock file operations and writer classes used in No-Vary-Search cache storage tests.
// ---

#include "net/http/no_vary_search_cache_storage_mock_file_operations.h"

namespace net {

MockFileOperations::MockFileOperations() = default;
MockFileOperations::~MockFileOperations() = default;

MockWriter::MockWriter() = default;
MockWriter::~MockWriter() = default;

}  // namespace net

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Scoped blocking of test writes to special directories
// summary: Implements ScopedBlockTestsWritingToSpecialDirs, which installs a non-nested blocker that prevents tests from writing to special directories.
// ---

#include "base/test/scoped_block_tests_writing_to_special_dirs.h"

#include <ostream>
#include <utility>

#include "base/check.h"

namespace base {

ScopedBlockTestsWritingToSpecialDirs::ScopedBlockTestsWritingToSpecialDirs(
    std::vector<int> dirs_to_block,
    FileWriteBlockedForTestingFunctionPtr failure_callback) {
  CHECK(failure_callback) << "Can't use NULL failure callback";
  auto& special_dir_write_blocker = BlockTestsWritingToSpecialDirs::Get();
  CHECK(!special_dir_write_blocker.has_value())
      << "ScopedBlockTestsWritingToSpecialDirs can't be nested.";

  special_dir_write_blocker.emplace(std::move(dirs_to_block), failure_callback);
}

ScopedBlockTestsWritingToSpecialDirs::~ScopedBlockTestsWritingToSpecialDirs() {
  BlockTestsWritingToSpecialDirs::Get().reset();
}

}  // namespace base

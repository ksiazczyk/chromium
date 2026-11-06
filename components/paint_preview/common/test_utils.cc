// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Paint preview test utilities
// summary: Provides gtest stringification of RecordingPersistence values used by paint preview tests.
// ---

#include "components/paint_preview/common/test_utils.h"

#include <string_view>

namespace paint_preview {

std::string_view PersistenceToString(RecordingPersistence persistence) {
  switch (persistence) {
    case RecordingPersistence::kFileSystem:
      return "FileSystem";
    case RecordingPersistence::kMemoryBuffer:
      return "MemoryBuffer";
  }
}

}  // namespace paint_preview

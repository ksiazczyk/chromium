// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit tests for thread type conversions
// summary: Unit tests verifying that sync protocol thread types map to the expected contextual task ThreadType values.
// ---

#include "components/contextual_tasks/internal/conversions.h"

#include "base/test/gtest_util.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace contextual_tasks {

TEST(ContextualTasksConversionsTest, ToThreadType) {
  EXPECT_EQ(ThreadType::kAiMode,
            ToThreadType(sync_pb::AiThreadSpecifics::AI_MODE));
  EXPECT_EQ(ThreadType::kUnknown,
            ToThreadType(sync_pb::AiThreadSpecifics::UNKNOWN));
}

}  // namespace contextual_tasks

// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Blob data builder unit tests for future file items
// summary: Unit tests verifying that BlobDataItem and BlobDataBuilder create, recognize, and append future file items with the expected file IDs.
// ---

#include "storage/browser/blob/blob_data_builder.h"

#include <string>

#include "testing/gtest/include/gtest/gtest.h"

namespace storage {

TEST(BlobDataBuilderTest, TestFutureFiles) {
  const std::string kId = "id";
  const uint64_t kFileId = 13;

  auto item = BlobDataItem::CreateFutureFile(0, 10, kFileId);
  EXPECT_TRUE(item->IsFutureFileItem());
  EXPECT_EQ(kFileId, item->GetFutureFileID());

  BlobDataBuilder builder(kId);
  builder.AppendFutureFile(0, 10, kFileId);
  EXPECT_TRUE(builder.items()[0]->item()->IsFutureFileItem());
  EXPECT_EQ(kFileId, builder.items()[0]->item()->GetFutureFileID());
}

}  // namespace storage

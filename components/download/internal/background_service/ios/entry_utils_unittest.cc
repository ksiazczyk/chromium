// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit tests for iOS background download entry utils
// summary: Verifies that download entries are correctly mapped to per-client download metadata, including size, GUID and completion info, in the iOS background download service.
// ---

#include "components/download/internal/background_service/ios/entry_utils.h"

#include "components/download/internal/background_service/test/entry_utils.h"
#include "components/download/public/background_service/download_metadata.h"
#include "testing/gtest/include/gtest/gtest.h"

const base::FilePath::CharType kFilePath[] =
    FILE_PATH_LITERAL("downloaded_file.zip");

namespace download {
namespace {

TEST(EntryUtilsTest, MapEntriesToClients) {
  Entry entry1 = test::BuildBasicEntry();
  entry1.bytes_downloaded = 10u;
  Entry entry2 = test::BuildBasicEntry(Entry::State::COMPLETE);
  entry2.bytes_downloaded = 20u;
  entry2.target_file_path = base::FilePath(kFilePath);

  std::vector<Entry*> entries = {&entry1, &entry2};
  auto metadata_map =
      util::MapEntriesToMetadataForClients({DownloadClient::TEST}, entries);
  EXPECT_EQ(1u, metadata_map.size());
  EXPECT_EQ(2u, metadata_map[DownloadClient::TEST].size());
  const DownloadMetaData& metadata1 = metadata_map[DownloadClient::TEST][0];
  const DownloadMetaData& metadata2 = metadata_map[DownloadClient::TEST][1];
  EXPECT_EQ(entry1.guid, metadata1.guid);
  EXPECT_EQ(entry1.bytes_downloaded, metadata1.current_size);
  EXPECT_FALSE(metadata1.completion_info.has_value());

  EXPECT_EQ(entry2.guid, metadata2.guid);
  EXPECT_EQ(entry2.bytes_downloaded, metadata2.current_size);
  EXPECT_TRUE(metadata2.completion_info.has_value());
  EXPECT_EQ(entry2.bytes_downloaded,
            metadata2.completion_info.value().bytes_downloaded);
  EXPECT_EQ(entry2.target_file_path, metadata2.completion_info.value().path);
}

}  // namespace
}  // namespace download

// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bookmark encryption stage test constants and setup
// summary: Declares the array of all bookmark encryption stages and the helper that configures feature flags for a chosen stage in tests.
// ---

#ifndef COMPONENTS_BOOKMARKS_TEST_BOOKMARK_TEST_WITH_ENCRYPTION_STAGES_H_
#define COMPONENTS_BOOKMARKS_TEST_BOOKMARK_TEST_WITH_ENCRYPTION_STAGES_H_

#include <string>

#include "base/test/scoped_feature_list.h"
#include "components/bookmarks/common/bookmark_features.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace bookmarks::test {

inline constexpr std::array<BookmarkEncryptionStage, 4>
    kAllBookmarkEncryptionStages = {
        BookmarkEncryptionStage::kDisabled,
        BookmarkEncryptionStage::kWriteBothReadOnlyClear,
        BookmarkEncryptionStage::kWriteBothReadPreferEncrypted,
        BookmarkEncryptionStage::kWriteOnlyEncryptedReadPreferEncrypted};

void InitFeaturesForBookmarkTestEncryptionStage(
    base::test::ScopedFeatureList& features,
    BookmarkEncryptionStage stage);

}  // namespace bookmarks::test

#endif  // COMPONENTS_BOOKMARKS_TEST_BOOKMARK_TEST_WITH_ENCRYPTION_STAGES_H_

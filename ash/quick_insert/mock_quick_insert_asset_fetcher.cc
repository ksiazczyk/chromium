// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Quick Insert asset fetcher implementation
// summary: Implements a mock asset fetcher whose GIF and thumbnail fetch methods are no-ops for use in tests.
// relations:
//   - implements /ash/quick_insert/mock_quick_insert_asset_fetcher.h
//   - implements /ash/quick_insert/quick_insert_asset_fetcher.h
//   - depends_on /base/functional/callback.h
// ---

#include "ash/quick_insert/mock_quick_insert_asset_fetcher.h"

#include "ash/quick_insert/quick_insert_asset_fetcher.h"
#include "base/functional/callback.h"
#include "url/gurl.h"

namespace ash {

MockQuickInsertAssetFetcher::MockQuickInsertAssetFetcher() = default;

MockQuickInsertAssetFetcher::~MockQuickInsertAssetFetcher() = default;

std::unique_ptr<network::SimpleURLLoader>
MockQuickInsertAssetFetcher::FetchGifFromUrl(
    const GURL& url,
    size_t rank,
    QuickInsertGifFetchedCallback callback) {
  return nullptr;
}

std::unique_ptr<network::SimpleURLLoader>
MockQuickInsertAssetFetcher::FetchGifPreviewImageFromUrl(
    const GURL& url,
    size_t rank,
    QuickInsertImageFetchedCallback callback) {
  return nullptr;
}

void MockQuickInsertAssetFetcher::FetchFileThumbnail(
    const base::FilePath& path,
    const gfx::Size& size,
    FetchFileThumbnailCallback callback) {}

}  // namespace ash

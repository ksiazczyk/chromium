// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bookmark data type controller implementation
// summary: Implements the bookmarks sync data type controller, wiring delegates and the local data batch uploader.
// ---

#include "components/sync_bookmarks/bookmark_data_type_controller.h"

#include <utility>

namespace sync_bookmarks {

BookmarkDataTypeController::BookmarkDataTypeController(
    std::unique_ptr<syncer::DataTypeControllerDelegate>
        delegate_for_full_sync_mode,
    std::unique_ptr<syncer::DataTypeControllerDelegate>
        delegate_for_transport_mode,
    std::unique_ptr<syncer::DataTypeLocalDataBatchUploader> batch_uploader)
    : DataTypeController(syncer::BOOKMARKS,
                         std::move(delegate_for_full_sync_mode),
                         std::move(delegate_for_transport_mode),
                         std::move(batch_uploader)) {}

BookmarkDataTypeController::~BookmarkDataTypeController() = default;

}  // namespace sync_bookmarks

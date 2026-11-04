// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Batch upload dialog delegate implementation
// summary: Implements BatchUploadUIDelegate by validating the browser and forwarding batch upload dialog requests to the internal view creation.
// ---

#include "chrome/browser/ui/profiles/batch_upload_ui_delegate.h"

#include "base/functional/callback.h"

BatchUploadUIDelegate::BatchUploadUIDelegate() = default;

BatchUploadUIDelegate::~BatchUploadUIDelegate() = default;

void BatchUploadUIDelegate::ShowBatchUploadDialog(
    BrowserWindowInterface* browser,
    std::vector<syncer::LocalDataDescription> local_data_description_list,
    BatchUploadService::EntryPoint entry_point,
    BatchUploadSelectedDataTypeItemsCallback complete_callback) {
  CHECK(browser);
  ShowBatchUploadDialogInternal(*browser,
                                std::move(local_data_description_list),
                                entry_point, std::move(complete_callback));
}

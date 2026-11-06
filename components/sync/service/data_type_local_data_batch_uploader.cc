// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DataTypeLocalDataBatchUploader default implementation
// summary: Provides a default NOTREACHED implementation of TriggerLocalDataMigrationForItems for the local data batch uploader interface.
// ---

#include "components/sync/service/data_type_local_data_batch_uploader.h"

#include "base/notreached.h"

namespace syncer {

void DataTypeLocalDataBatchUploader::TriggerLocalDataMigrationForItems(
    std::vector<syncer::LocalDataItemModel::DataId> items) {
  NOTREACHED();
}
}  // namespace syncer

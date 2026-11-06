// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sync data type configuration declaration
// summary: Declares a struct bundling a sync change processor and data type store factory used to configure a specific sync data type.
// ---

#ifndef COMPONENTS_SAVED_TAB_GROUPS_INTERNAL_SYNC_DATA_TYPE_CONFIGURATION_H_
#define COMPONENTS_SAVED_TAB_GROUPS_INTERNAL_SYNC_DATA_TYPE_CONFIGURATION_H_

#include <memory>

#include "components/sync/model/data_type_store.h"

namespace syncer {
class DataTypeLocalChangeProcessor;
}  // namespace syncer

namespace tab_groups {

// Configuration for a specific sync data type.
struct SyncDataTypeConfiguration {
  SyncDataTypeConfiguration(
      std::unique_ptr<syncer::DataTypeLocalChangeProcessor> change_processor,
      syncer::OnceDataTypeStoreFactory data_type_store_factory);
  ~SyncDataTypeConfiguration();

  std::unique_ptr<syncer::DataTypeLocalChangeProcessor> change_processor;
  syncer::OnceDataTypeStoreFactory data_type_store_factory;
};

}  // namespace tab_groups

#endif  // COMPONENTS_SAVED_TAB_GROUPS_INTERNAL_SYNC_DATA_TYPE_CONFIGURATION_H_

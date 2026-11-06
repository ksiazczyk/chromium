// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sharing message data type controller header
// summary: Declares SharingMessageDataTypeController, which controls syncing of the SHARING_MESSAGE data type and overrides Stop to always clear sync metadata.
// ---

#ifndef COMPONENTS_SHARING_MESSAGE_SHARING_MESSAGE_DATA_TYPE_CONTROLLER_H_
#define COMPONENTS_SHARING_MESSAGE_SHARING_MESSAGE_DATA_TYPE_CONTROLLER_H_

#include <memory>

#include "components/sync/service/data_type_controller.h"

// Controls syncing of SHARING_MESSAGE.
class SharingMessageDataTypeController : public syncer::DataTypeController {
 public:
  // |delegate_for_full_sync_mode| and |delegate_for_transport_mode| must not be
  // null.
  SharingMessageDataTypeController(
      std::unique_ptr<syncer::DataTypeControllerDelegate>
          delegate_for_full_sync_mode,
      std::unique_ptr<syncer::DataTypeControllerDelegate>
          delegate_for_transport_mode);
  ~SharingMessageDataTypeController() override;
  SharingMessageDataTypeController(const SharingMessageDataTypeController&) =
      delete;
  SharingMessageDataTypeController& operator=(
      const SharingMessageDataTypeController&) = delete;

  // DataTypeController overrides.
  void Stop(syncer::SyncStopMetadataFate fate, StopCallback callback) override;
};

#endif  // COMPONENTS_SHARING_MESSAGE_SHARING_MESSAGE_DATA_TYPE_CONTROLLER_H_

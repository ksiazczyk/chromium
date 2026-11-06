// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sharing message data type controller implementation
// summary: Implements the sync data type controller for SHARING_MESSAGE, forcing sync metadata to be cleared on stop so sharing messages are not sent while sync is paused.
// ---

#include "components/sharing_message/sharing_message_data_type_controller.h"

#include <utility>

SharingMessageDataTypeController::SharingMessageDataTypeController(
    std::unique_ptr<syncer::DataTypeControllerDelegate>
        delegate_for_full_sync_mode,
    std::unique_ptr<syncer::DataTypeControllerDelegate>
        delegate_for_transport_mode)
    : syncer::DataTypeController(syncer::SHARING_MESSAGE,
                                 std::move(delegate_for_full_sync_mode),
                                 std::move(delegate_for_transport_mode)) {}

SharingMessageDataTypeController::~SharingMessageDataTypeController() =
    default;

void SharingMessageDataTypeController::Stop(syncer::SyncStopMetadataFate fate,
                                             StopCallback callback) {
  DCHECK(CalledOnValidThread());
  // Clear sync metadata regardless of incoming fate even when sync gets paused
  // (e.g. persistent auth error). This is needed because
  // SharingMessageBridgeImpl uses the processor's IsTrackingMetadata() bit to
  // determine whether sharing messages can be sent (they can't if sync is
  // paused).
  DataTypeController::Stop(syncer::SyncStopMetadataFate::CLEAR_METADATA,
                           std::move(callback));
}

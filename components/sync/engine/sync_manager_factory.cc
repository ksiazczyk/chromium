// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SyncManagerFactory implementation
// summary: Creates SyncManagerImpl instances, injecting a network connection tracker into each newly created sync manager.
// ---

#include "components/sync/engine/sync_manager_factory.h"

#include "components/sync/engine/sync_manager_impl.h"

namespace syncer {

SyncManagerFactory::SyncManagerFactory(
    network::NetworkConnectionTracker* network_connection_tracker)
    : network_connection_tracker_(network_connection_tracker) {}

SyncManagerFactory::~SyncManagerFactory() = default;

std::unique_ptr<SyncManager> SyncManagerFactory::CreateSyncManager(
    const std::string& name) {
  return std::make_unique<SyncManagerImpl>(name, network_connection_tracker_);
}

}  // namespace syncer

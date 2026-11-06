// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SyncedNetworkUpdater interface
// summary: Interface for applying add, update, and delete operations for synced Wi-Fi networks to the local Chrome OS networking stack.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_SYNC_WIFI_SYNCED_NETWORK_UPDATER_H_
#define CHROMEOS_ASH_COMPONENTS_SYNC_WIFI_SYNCED_NETWORK_UPDATER_H_

#include <string>

namespace sync_pb {
class WifiConfigurationSpecifics;
}

namespace ash::sync_wifi {

class NetworkIdentifier;

// Applies updates to synced networks to the local networking stack.
class SyncedNetworkUpdater {
 public:
  SyncedNetworkUpdater(const SyncedNetworkUpdater&) = delete;
  SyncedNetworkUpdater& operator=(const SyncedNetworkUpdater&) = delete;

  virtual ~SyncedNetworkUpdater() = default;

  virtual void AddOrUpdateNetwork(
      const sync_pb::WifiConfigurationSpecifics& specifics) = 0;
  virtual void RemoveNetwork(const NetworkIdentifier& id) = 0;
  virtual bool IsUpdateInProgress(const std::string& network_guid) = 0;

 protected:
  SyncedNetworkUpdater() = default;
};

}  // namespace ash::sync_wifi

#endif  // CHROMEOS_ASH_COMPONENTS_SYNC_WIFI_SYNCED_NETWORK_UPDATER_H_

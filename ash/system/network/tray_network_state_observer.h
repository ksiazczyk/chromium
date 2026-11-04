// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TrayNetworkStateObserver interface
// summary: Defines the observer interface used by the tray network state model to report active network, network list, device state, VPN provider and global policy changes.
// ---

#ifndef ASH_SYSTEM_NETWORK_TRAY_NETWORK_STATE_OBSERVER_H_
#define ASH_SYSTEM_NETWORK_TRAY_NETWORK_STATE_OBSERVER_H_

#include "base/observer_list_types.h"

namespace ash {

class TrayNetworkStateObserver : public base::CheckedObserver {
 public:
  // The active networks changed or a device enabled state changed.
  virtual void ActiveNetworkStateChanged() {}

  // The list of networks changed. The frequency of this event is limited.
  virtual void NetworkListChanged() {}

  // The list of devices changed or a device property changed.
  virtual void DeviceStateListChanged() {}

  // The list of VPN providers changed.
  virtual void VpnProvidersChanged() {}

  // The global policy object has changed.
  virtual void GlobalPolicyChanged() {}
};

}  // namespace ash

#endif  // ASH_SYSTEM_NETWORK_TRAY_NETWORK_STATE_OBSERVER_H_

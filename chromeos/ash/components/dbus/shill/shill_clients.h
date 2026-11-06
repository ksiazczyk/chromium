// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shill client initialization API
// summary: Declares functions to initialize real or fake Shill and modemmanager D-Bus clients and to shut them down.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_DBUS_SHILL_SHILL_CLIENTS_H_
#define CHROMEOS_ASH_COMPONENTS_DBUS_SHILL_SHILL_CLIENTS_H_

#include "base/component_export.h"

namespace dbus {
class Bus;
}

namespace ash::shill_clients {

// Initialize Shill and modemmanager related dbus clients.
COMPONENT_EXPORT(SHILL_CLIENT) void Initialize(dbus::Bus* system_bus);

// Initialize fake Shill and modemmanager related dbus clients.
COMPONENT_EXPORT(SHILL_CLIENT) void InitializeFakes();

// Shut down Shill and modemmanager related dbus clients.
COMPONENT_EXPORT(SHILL_CLIENT) void Shutdown();

}  // namespace ash::shill_clients

#endif  // CHROMEOS_ASH_COMPONENTS_DBUS_SHILL_SHILL_CLIENTS_H_

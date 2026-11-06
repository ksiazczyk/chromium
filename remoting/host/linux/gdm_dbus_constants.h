// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GDM D-Bus constants
// summary: Defines the D-Bus bus name and object path constants exported by GDM (org.gnome.DisplayManager).
// ---

#ifndef REMOTING_HOST_LINUX_GDM_DBUS_CONSTANTS_H_
#define REMOTING_HOST_LINUX_GDM_DBUS_CONSTANTS_H_

#include "remoting/host/linux/gvariant_ref.h"

namespace remoting {

// D-Bus bus name and object paths exported by GDM (org.gnome.DisplayManager).
inline constexpr char kGdmBusName[] = "org.gnome.DisplayManager";
inline constexpr gvariant::ObjectPathCStr kGdmManagerPath =
    "/org/gnome/DisplayManager/Manager";
inline constexpr gvariant::ObjectPathCStr kGdmDisplaysPath =
    "/org/gnome/DisplayManager/Displays";
inline constexpr gvariant::ObjectPathCStr kGdmRemoteDisplayFactoryPath =
    "/org/gnome/DisplayManager/RemoteDisplayFactory";

}  // namespace remoting

#endif  // REMOTING_HOST_LINUX_GDM_DBUS_CONSTANTS_H_

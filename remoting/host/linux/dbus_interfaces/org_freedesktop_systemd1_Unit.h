// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file was generated from org.freedesktop.systemd1.Unit.xml and
// manually edited to remove unneeded parts.

// ---docerion
// type: source
// title: systemd Unit D-Bus interface structs
// summary: Generated and manually trimmed C++ structs for the org.freedesktop.systemd1.Unit D-Bus interface, exposing the readable ActiveState property.
// ---

#ifndef REMOTING_HOST_LINUX_DBUS_INTERFACES_ORG_FREEDESKTOP_SYSTEMD1_UNIT_H_
#define REMOTING_HOST_LINUX_DBUS_INTERFACES_ORG_FREEDESKTOP_SYSTEMD1_UNIT_H_

#include "remoting/host/linux/gvariant_type.h"

namespace remoting::org_freedesktop_systemd1_Unit {

// property
struct ActiveState {
  static constexpr char kInterfaceName[] = "org.freedesktop.systemd1.Unit";
  static constexpr char kPropertyName[] = "ActiveState";
  static constexpr gvariant::Type kType{"s"};
  static constexpr bool kReadable = true;
  static constexpr bool kWritable = false;
};

}  // namespace remoting::org_freedesktop_systemd1_Unit

#endif  // REMOTING_HOST_LINUX_DBUS_INTERFACES_ORG_FREEDESKTOP_SYSTEMD1_UNIT_H_

// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DBus switch constant declarations
// summary: Declares exported command-line switch name constants used to configure Chrome OS DBus client behavior.
// ---

#ifndef CHROMEOS_DBUS_CONSTANTS_DBUS_SWITCHES_H_
#define CHROMEOS_DBUS_CONSTANTS_DBUS_SWITCHES_H_

#include "base/component_export.h"

namespace chromeos {
namespace switches {

COMPONENT_EXPORT(CHROMEOS_DBUS_CONSTANTS)
extern const char kAttestationServer[];
COMPONENT_EXPORT(CHROMEOS_DBUS_CONSTANTS)
extern const char kBiodFake[];
COMPONENT_EXPORT(CHROMEOS_DBUS_CONSTANTS)
extern const char kCrosDisksFake[];
COMPONENT_EXPORT(CHROMEOS_DBUS_CONSTANTS)
extern const char kDbusStub[];
COMPONENT_EXPORT(CHROMEOS_DBUS_CONSTANTS)
extern const char kFakeOobeConfiguration[];
COMPONENT_EXPORT(CHROMEOS_DBUS_CONSTANTS)
extern const char kShillStub[];
COMPONENT_EXPORT(CHROMEOS_DBUS_CONSTANTS)
extern const char kHermesFake[];
COMPONENT_EXPORT(CHROMEOS_DBUS_CONSTANTS)
extern const char kSmsTestMessages[];
COMPONENT_EXPORT(CHROMEOS_DBUS_CONSTANTS)
extern const char kSystemDevMode[];
COMPONENT_EXPORT(CHROMEOS_DBUS_CONSTANTS)
extern const char kRegisterMaxDarkSuspendDelay[];

}  // namespace switches
}  // namespace chromeos

#endif  // CHROMEOS_DBUS_CONSTANTS_DBUS_SWITCHES_H_

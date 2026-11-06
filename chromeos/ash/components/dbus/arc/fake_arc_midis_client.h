// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake ArcMidisClient header
// summary: Declares FakeArcMidisClient, a fake ArcMidisClient D-Bus client used in place of the real client in tests.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_DBUS_ARC_FAKE_ARC_MIDIS_CLIENT_H_
#define CHROMEOS_ASH_COMPONENTS_DBUS_ARC_FAKE_ARC_MIDIS_CLIENT_H_

#include "chromeos/ash/components/dbus/arc/arc_midis_client.h"

namespace ash {

// A fake implementation of ArcMidisClient.
class COMPONENT_EXPORT(ASH_DBUS_ARC) FakeArcMidisClient
    : public ArcMidisClient {
 public:
  FakeArcMidisClient() = default;

  FakeArcMidisClient(const FakeArcMidisClient&) = delete;
  FakeArcMidisClient& operator=(const FakeArcMidisClient&) = delete;

  ~FakeArcMidisClient() override = default;

  // chromeos::DBusClient override:
  void Init(dbus::Bus* bus) override;

  // ArcMidisClient override:
  void BootstrapMojoConnection(
      base::ScopedFD fd,
      chromeos::VoidDBusMethodCallback callback) override;
};

}  // namespace ash

#endif  // CHROMEOS_ASH_COMPONENTS_DBUS_ARC_FAKE_ARC_MIDIS_CLIENT_H_

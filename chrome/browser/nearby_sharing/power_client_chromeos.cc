// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeOS power client implementation
// summary: Implements PowerClientChromeos by observing the ChromeOS PowerManagerClient and forwarding suspend and resume events to the PowerClient base class.
// ---

#include "chrome/browser/nearby_sharing/power_client_chromeos.h"

PowerClientChromeos::PowerClientChromeos() {
  if (chromeos::PowerManagerClient::Get())
    chromeos::PowerManagerClient::Get()->AddObserver(this);
}

PowerClientChromeos::~PowerClientChromeos() {
  if (chromeos::PowerManagerClient::Get())
    chromeos::PowerManagerClient::Get()->RemoveObserver(this);
}

void PowerClientChromeos::SuspendImminent(
    power_manager::SuspendImminent::Reason reason) {
  SetSuspended(true);
}

void PowerClientChromeos::SuspendDone(base::TimeDelta sleep_duration) {
  SetSuspended(false);
}

// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shutdown reason string conversion
// summary: Maps ShutdownReason enum values to human-readable strings such as power button and tray shut down button for logging and metrics.
// relations:
//   - implements /ash/shutdown_reason.h
//   - depends_on /base/notreached.h
// ---

#include "ash/shutdown_reason.h"

#include <ostream>

#include "base/notreached.h"

namespace ash {

const char* ShutdownReasonToString(ShutdownReason reason) {
  switch (reason) {
    case ShutdownReason::POWER_BUTTON:
      return "power button";
    case ShutdownReason::LOGIN_SHUT_DOWN_BUTTON:
      return "login shut down button";
    case ShutdownReason::TRAY_SHUT_DOWN_BUTTON:
      return "tray shut down button";
    case ShutdownReason::ARC_POWER_BUTTON:
      return "arc power button";
    case ShutdownReason::DEBUG_ACCELERATOR:
      return "debug accelerator";
  }
  NOTREACHED() << "Invalid reason " << static_cast<int>(reason);
}

}  // namespace ash

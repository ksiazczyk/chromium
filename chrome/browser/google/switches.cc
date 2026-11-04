// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Google Update simulation command-line switches
// summary: Defines command-line switches that simulate HRESULT and Google Update error codes during update checks, for testing purposes.
// ---

#include "chrome/browser/google/switches.h"

namespace switches {

// Simulates a specific HRESULT error code returned by the update check.
// If the switch value is not specified (as hex) then it defaults to E_FAIL.
const char kSimulateUpdateHresult[] = "simulate-update-hresult";

// Simulates a GoogleUpdateErrorCode error by the update check.
// Must be supplied with |kSimulateUpdateHresult| switch.
const char kSimulateUpdateErrorCode[] = "simulate-update-error-code";

}  // namespace switches

// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TelemetryService implementation
// summary: Implements the TelemetryService class, defining its constructor and a destructor that invalidates weak pointers.
// ---

#include "chrome/browser/safe_browsing/telemetry/telemetry_service.h"

namespace safe_browsing {

TelemetryService::TelemetryService() = default;

TelemetryService::~TelemetryService() {
  weak_factory_.InvalidateWeakPtrs();
}

}  // namespace safe_browsing

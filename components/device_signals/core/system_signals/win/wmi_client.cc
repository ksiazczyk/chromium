// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WMI hotfixes response definitions
// summary: Defines constructors and destructor for the WmiHotfixesResponse struct used by the WMI client.
// ---

#include "components/device_signals/core/system_signals/win/wmi_client.h"

namespace device_signals {

WmiHotfixesResponse::WmiHotfixesResponse() = default;

WmiHotfixesResponse::WmiHotfixesResponse(const WmiHotfixesResponse& other) =
    default;

WmiHotfixesResponse::~WmiHotfixesResponse() = default;

}  // namespace device_signals

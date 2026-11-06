// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WSC antivirus products response definitions
// summary: Defines constructors and destructor for the WscAvProductsResponse struct used by the Windows Security Center client.
// ---

#include "components/device_signals/core/system_signals/win/wsc_client.h"

namespace device_signals {

WscAvProductsResponse::WscAvProductsResponse() = default;
WscAvProductsResponse::~WscAvProductsResponse() = default;

WscAvProductsResponse::WscAvProductsResponse(
    const WscAvProductsResponse& other) = default;

}  // namespace device_signals

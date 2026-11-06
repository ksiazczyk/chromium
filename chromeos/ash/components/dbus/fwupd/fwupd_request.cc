// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FwupdRequest implementation
// summary: Implements constructors for the FwupdRequest struct that carries request id and kind values received from fwupd.
// ---

#include "chromeos/ash/components/dbus/fwupd/fwupd_request.h"

namespace ash {

FwupdRequest::FwupdRequest() = default;

FwupdRequest::FwupdRequest(uint32_t id, uint32_t kind) : id(id), kind(kind) {}

FwupdRequest::FwupdRequest(const FwupdRequest& other) = default;
FwupdRequest::~FwupdRequest() = default;

}  // namespace ash

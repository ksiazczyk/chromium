// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FIDO assertion info implementation
// summary: Defines the default constructors, copy operations, and equality comparison for the FidoAssertionInfo value class used in Quick Start account transfer.
// ---

#include "chrome/browser/ash/login/oobe_quick_start/connectivity/fido_assertion_info.h"

#include <algorithm>

namespace ash::quick_start {

FidoAssertionInfo::FidoAssertionInfo() = default;

FidoAssertionInfo::~FidoAssertionInfo() = default;

FidoAssertionInfo::FidoAssertionInfo(const FidoAssertionInfo& other) = default;

FidoAssertionInfo& FidoAssertionInfo::operator=(
    const FidoAssertionInfo& other) = default;

bool FidoAssertionInfo::operator==(const FidoAssertionInfo& rhs) const =
    default;

}  // namespace ash::quick_start

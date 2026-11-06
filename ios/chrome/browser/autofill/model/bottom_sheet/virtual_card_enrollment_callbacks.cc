// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Virtual card enrollment callbacks implementation
// summary: Implements the virtual card enrollment callbacks, running the accept or decline closure and resetting the opposite callback.
// ---

#include "ios/chrome/browser/autofill/model/bottom_sheet/virtual_card_enrollment_callbacks.h"

namespace autofill {

VirtualCardEnrollmentCallbacks::VirtualCardEnrollmentCallbacks() {}
VirtualCardEnrollmentCallbacks::VirtualCardEnrollmentCallbacks(
    base::OnceClosure accept_callback,
    base::OnceClosure decline_callback)
    : accept_callback_(std::move(accept_callback)),
      decline_callback_(std::move(decline_callback)) {}
VirtualCardEnrollmentCallbacks::~VirtualCardEnrollmentCallbacks() {}
VirtualCardEnrollmentCallbacks::VirtualCardEnrollmentCallbacks(
    VirtualCardEnrollmentCallbacks&& other) = default;

void VirtualCardEnrollmentCallbacks::OnAccepted() {
  std::move(accept_callback_).Run();
  decline_callback_.Reset();
}

void VirtualCardEnrollmentCallbacks::OnDeclined() {
  std::move(decline_callback_).Run();
  accept_callback_.Reset();
}

}  // namespace autofill

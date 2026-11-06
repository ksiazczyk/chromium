// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SecurePayload implementation
// summary: Implements the default constructor, copy constructor, assignment operator and destructor for the SecurePayload class in the payments::facilitated namespace.
// ---

#include "components/facilitated_payments/core/browser/model/secure_payload.h"

namespace payments::facilitated {

SecurePayload::SecurePayload() = default;
SecurePayload::SecurePayload(const SecurePayload& other) = default;
SecurePayload& SecurePayload::operator=(const SecurePayload& other) = default;
SecurePayload::~SecurePayload() = default;

}  // namespace payments::facilitated

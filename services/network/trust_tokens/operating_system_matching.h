// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Trust Tokens operating system matching header
// summary: Declares IsCurrentOperatingSystem, a helper that lets Trust Tokens logic compare an issuer-provided OS value against the current operating system.
// ---

#ifndef SERVICES_NETWORK_TRUST_TOKENS_OPERATING_SYSTEM_MATCHING_H_
#define SERVICES_NETWORK_TRUST_TOKENS_OPERATING_SYSTEM_MATCHING_H_

#include "services/network/public/mojom/trust_tokens.mojom.h"

namespace network {

// Returns whether the given Os value corresponds to the operating system on
// which this code is built.
//
// This information allows Trust Tokens logic to decide whether it should try to
// execute certain operations locally, by comparing the current operating system
// to an issuer-provided collection of operating systems on which to attempt
// executing operations locally.
bool IsCurrentOperatingSystem(mojom::TrustTokenKeyCommitmentResult::Os os);

}  // namespace network

#endif  // SERVICES_NETWORK_TRUST_TOKENS_OPERATING_SYSTEM_MATCHING_H_

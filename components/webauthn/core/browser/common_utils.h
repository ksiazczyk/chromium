// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebAuthn common utilities declarations
// summary: Declares the base64url encoding helper shared by WebAuthn core browser code.
// ---

#ifndef COMPONENTS_WEBAUTHN_CORE_BROWSER_COMMON_UTILS_H_
#define COMPONENTS_WEBAUTHN_CORE_BROWSER_COMMON_UTILS_H_

#include <string>

#include "base/containers/span.h"

namespace webauthn {

std::string Base64UrlEncodeOmitPadding(
    const base::span<const uint8_t> challenge);

}  // namespace webauthn

#endif  // COMPONENTS_WEBAUTHN_CORE_BROWSER_COMMON_UTILS_H_

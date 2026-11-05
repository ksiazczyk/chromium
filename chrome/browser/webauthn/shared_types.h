// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebAuthn shared types header
// summary: Defines the PasswordCredentialPair type alias shared by WebAuthn browser code.
// ---

#ifndef CHROME_BROWSER_WEBAUTHN_SHARED_TYPES_H_
#define CHROME_BROWSER_WEBAUTHN_SHARED_TYPES_H_

#include <string>

using PasswordCredentialPair = std::pair<std::u16string, std::u16string>;

#endif  // CHROME_BROWSER_WEBAUTHN_SHARED_TYPES_H_

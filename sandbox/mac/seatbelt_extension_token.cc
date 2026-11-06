// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SeatbeltExtensionToken class implementation
// summary: Implements the move-only SeatbeltExtensionToken value type, including a factory that creates fake tokens for testing.
// ---

#include "sandbox/mac/seatbelt_extension_token.h"

namespace sandbox {

SeatbeltExtensionToken::SeatbeltExtensionToken() {}

SeatbeltExtensionToken::SeatbeltExtensionToken(SeatbeltExtensionToken&& other) =
    default;

SeatbeltExtensionToken::~SeatbeltExtensionToken() {}

SeatbeltExtensionToken& SeatbeltExtensionToken::operator=(
    SeatbeltExtensionToken&&) = default;

// static
SeatbeltExtensionToken SeatbeltExtensionToken::CreateForTesting(
    const std::string& fake_token) {
  return SeatbeltExtensionToken(fake_token);
}

SeatbeltExtensionToken::SeatbeltExtensionToken(const std::string& token)
    : token_(token) {}

}  // namespace sandbox

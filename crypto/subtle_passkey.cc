// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SubtlePassKey implementation
// summary: Implements the SubtlePassKey constructor, destructor and ForTesting factory used to hand out the capability token in tests.
// ---

#include "crypto/subtle_passkey.h"

namespace crypto {

SubtlePassKey::SubtlePassKey() = default;
SubtlePassKey::~SubtlePassKey() = default;

// static
SubtlePassKey SubtlePassKey::ForTesting() {
  return SubtlePassKey{};
}

}  // namespace crypto

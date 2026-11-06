// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TokenGenerator implementation
// summary: Implements TokenGenerator, which creates unguessable 128-bit tokens from a cryptographically strong random source.
// ---

#include "chrome/credential_provider/gaiacp/token_generator.h"

#include "base/unguessable_token.h"

namespace credential_provider {

std::string TokenGenerator::GenerateToken() {
  return base::UnguessableToken::Create().ToString();
}

// static
TokenGenerator* TokenGenerator::Get() {
  return *GetInstanceStorage();
}

// static
TokenGenerator** TokenGenerator::GetInstanceStorage() {
  static TokenGenerator instance;
  static TokenGenerator* instance_storage = &instance;
  return &instance_storage;
}

TokenGenerator::TokenGenerator() = default;

TokenGenerator::~TokenGenerator() = default;

}  // namespace credential_provider

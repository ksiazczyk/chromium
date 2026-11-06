// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Origin crash key debug support
// summary: Implements ScopedOriginCrashKey, which stores an origin's debug string in a crash key.
// ---

#include "url/origin_debug.h"

#include "url/origin.h"

namespace url::debug {

ScopedOriginCrashKey::ScopedOriginCrashKey(
    base::debug::CrashKeyString* crash_key,
    const url::Origin* value)
    : scoped_string_value_(
          crash_key,
          value ? value->GetDebugString(/*include_nonce=*/false) : "nullptr") {}

ScopedOriginCrashKey::~ScopedOriginCrashKey() = default;

}  // namespace url::debug

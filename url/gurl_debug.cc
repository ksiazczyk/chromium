// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GURL debug crash key implementation
// summary: Implements ScopedUrlCrashKey, which records a GURL's possibly invalid spec or an empty-URL placeholder into a crash key for debugging.
// ---

#include "url/gurl_debug.h"

#include "url/gurl.h"

namespace url::debug {

ScopedUrlCrashKey::ScopedUrlCrashKey(base::debug::CrashKeyString* crash_key,
                                     const GURL& url)
    : scoped_string_value_(
          crash_key,
          url.is_empty() ? "<empty url>" : url.possibly_invalid_spec()) {}

ScopedUrlCrashKey::~ScopedUrlCrashKey() = default;

}  // namespace url::debug

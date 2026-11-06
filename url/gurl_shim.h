// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GURL Rust FFI shim header
// summary: Declares the FFI shim that lets Rust code read a GURL's possibly invalid spec as a Rust string.
// ---

#ifndef URL_GURL_SHIM_H_
#define URL_GURL_SHIM_H_

#include "third_party/rust/cxx/v1/cxx.h"
#include "url/gurl.h"

namespace url {

// Shim for FFI to call GURL::PossiblyInvalidSpec() and get a Rust `str`.
rust::Str GURLPossiblyInvalidSpec(const GURL& gurl);

}  // namespace url

#endif  // URL_GURL_SHIM_H_

// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Builtin TestRootCerts implementation
// summary: Implements the TestRootCerts platform hooks as no-ops for the built-in certificate verifier, accepting any added test root.
// ---

#include "net/cert/test_root_certs.h"

namespace net {

bool TestRootCerts::AddImpl(X509Certificate* certificate) {
  return true;
}

void TestRootCerts::ClearImpl() {}

TestRootCerts::~TestRootCerts() = default;

void TestRootCerts::Init() {}

}  // namespace net

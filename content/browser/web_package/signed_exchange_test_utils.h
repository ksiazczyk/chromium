// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Signed exchange test SPKI hash constants
// summary: Header defining PEM SPKI hash constants for ECDSA P-256 and P-384 certificates used by signed exchange tests.
// ---

#ifndef CONTENT_BROWSER_WEB_PACKAGE_SIGNED_EXCHANGE_TEST_UTILS_H_
#define CONTENT_BROWSER_WEB_PACKAGE_SIGNED_EXCHANGE_TEST_UTILS_H_

namespace content {

constexpr char kPEMECDSAP256SPKIHash[] =
    "ytA3kTmbf1oNhuri+Ci7ppf/o9FLUtfI7kurrlxPc7k=";
constexpr char kPEMECDSAP384SPKIHash[] =
    "bUIRKGHh5tM0DVUKslLnqEwVq5bpC/axBAtexVMjD68=";

}  // namespace content

#endif  // CONTENT_BROWSER_WEB_PACKAGE_SIGNED_EXCHANGE_TEST_UTILS_H_

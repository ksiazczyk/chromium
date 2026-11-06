// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CRX verifier format selection
// summary: Returns the CRX3 verifier format variants used for Webstore, policy, external and test extension installs, with a test override for publisher key verification.
// ---

#include "extensions/common/verifier_formats.h"

#include "components/crx_file/crx_verifier.h"

namespace extensions {

namespace {

// When disabled, `GetWebstoreVerifierFormat` returns `VerifierFormat::CRX3` to
// skip verification of publisher keys in the CRX. Can be overridden in tests.
bool g_enable_publisher_key_verification = true;

}  // namespace

crx_file::VerifierFormat GetWebstoreVerifierFormat(
    bool test_publisher_enabled) {
  return g_enable_publisher_key_verification
             ? test_publisher_enabled
                   ? crx_file::VerifierFormat::CRX3_WITH_TEST_PUBLISHER_PROOF
                   : crx_file::VerifierFormat::CRX3_WITH_PUBLISHER_PROOF
             : crx_file::VerifierFormat::CRX3;
}

crx_file::VerifierFormat GetPolicyVerifierFormat() {
  return crx_file::VerifierFormat::CRX3;
}

crx_file::VerifierFormat GetExternalVerifierFormat() {
  return crx_file::VerifierFormat::CRX3;
}

crx_file::VerifierFormat GetTestVerifierFormat() {
  return crx_file::VerifierFormat::CRX3;
}

base::AutoReset<bool> DisablePublisherKeyVerificationForTests() {
  return {&g_enable_publisher_key_verification, false};
}

}  // namespace extensions

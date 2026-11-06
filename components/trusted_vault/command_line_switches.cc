// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Trusted vault service URL from command line
// summary: Implements extraction of the trusted vault service URL from the command line, falling back to the default Google securitydomain endpoint.
// ---

#include "components/trusted_vault/command_line_switches.h"

#include "base/command_line.h"
#include "url/gurl.h"

namespace trusted_vault {

namespace {

constexpr char kDefaultTrustedVaultServiceURL[] =
    "https://securitydomain-pa.googleapis.com/v1/";

}  // namespace

GURL ExtractTrustedVaultServiceURLFromCommandLine() {
  std::string string_url =
      base::CommandLine::ForCurrentProcess()->GetSwitchValueASCII(
          kTrustedVaultServiceURLSwitch);
  if (string_url.empty()) {
    // Command line switch is not specified or is not a valid ASCII string.
    return GURL(kDefaultTrustedVaultServiceURL);
  }
  return GURL(string_url);
}

}  // namespace trusted_vault

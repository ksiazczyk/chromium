// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extension update client command line config policy implementation
// summary: Implements the command-line configuration policy for the extension updater, reading the test request switch from the command line.
// ---

#include "base/command_line.h"
#include "build/build_config.h"
#include "chrome/browser/extensions/updater/extension_update_client_command_line_config_policy.h"
#include "chrome/browser/extensions/updater/extension_updater_switches.h"
#include "extensions/buildflags/buildflags.h"
#include "url/gurl.h"

static_assert(BUILDFLAG(ENABLE_EXTENSIONS_CORE));

namespace extensions {

ExtensionUpdateClientCommandLineConfigPolicy::
    ExtensionUpdateClientCommandLineConfigPolicy(
        const base::CommandLine* cmdline) {
  CHECK(cmdline, base::NotFatalUntil::M161);
  test_request_ = cmdline->HasSwitch(kSwitchTestRequestParam);
}

bool ExtensionUpdateClientCommandLineConfigPolicy::TestRequest() const {
  return test_request_;
}

}  // namespace extensions

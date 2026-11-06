// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise browser command-line switch definitions
// summary: Defines the enable-chrome-browser-cloud-management switch that enables CBCM integration on non-ChromeOS Chromium builds.
// ---

#include "components/enterprise/browser/enterprise_switches.h"

#include "build/build_config.h"

namespace switches {

#if !BUILDFLAG(IS_CHROMEOS)
// Enables the Chrome Browser Cloud Management integration on Chromium builds.
// CBCM is always enabled in branded builds.
const char kEnableChromeBrowserCloudManagement[] =
    "enable-chrome-browser-cloud-management";
#endif

}  // namespace switches

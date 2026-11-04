// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Demo mode app URL constants
// summary: Defines the host, base address, and index path constants used to address the demo mode app's untrusted WebUI.
// ---

#include "ash/webui/demo_mode_app_ui/url_constants.h"

namespace ash {

const char kChromeUntrustedUIDemoModeAppHost[] = "demo-mode-app";
const char kChromeUntrustedUIDemoModeAppURL[] =
    "chrome-untrusted://demo-mode-app/";
const char kChromeUntrustedUIDemoModeAppIndexURL[] =
    "chrome-untrusted://demo-mode-app/index.html";

}  // namespace ash

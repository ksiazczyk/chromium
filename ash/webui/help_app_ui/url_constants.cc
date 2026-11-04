// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Help app WebUI URL constants
// summary: Defines host name and address constants used to register and route the help app's trusted and untrusted WebUI interfaces.
// ---

#include "ash/webui/help_app_ui/url_constants.h"

namespace ash {

const char kChromeUIHelpAppHost[] = "help-app";
const char kChromeUIHelpAppKidsMagazineHost[] = "help-app-kids-magazine";
const char kChromeUIHelpAppURL[] = "chrome://help-app/";
const char kChromeUIHelpAppUntrustedURL[] = "chrome-untrusted://help-app/";
const char kChromeUIHelpAppKidsMagazineUntrustedURL[] =
    "chrome-untrusted://help-app-kids-magazine/";

}  // namespace ash

// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shortcut customization WebUI URL constants
// summary: Defines string constants for the shortcut customization WebUI, including the app host name, its chrome scheme address, and a learn-more support page link.
// ---

#include "ash/webui/shortcut_customization_ui/url_constants.h"

namespace ash {

const char kChromeUIShortcutCustomizationAppHost[] = "shortcut-customization";
const char kChromeUIShortcutCustomizationAppURL[] =
    "chrome://shortcut-customization";
const char kShortcutCustomizationLearnMoreURL[] =
    "https://support.google.com/chromebook?p=chromeos-shortcut-customization";
}  // namespace ash
// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OS Settings identifier union
// summary: Defines the OsSettingsIdentifier union that uniquely identifies a settings item as a section, subpage, or setting via the settings mojom types.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_ASH_SETTINGS_OS_SETTINGS_IDENTIFIER_H_
#define CHROME_BROWSER_UI_WEBUI_ASH_SETTINGS_OS_SETTINGS_IDENTIFIER_H_

#include "ash/webui/settings/public/constants/routes.mojom.h"
#include "ash/webui/settings/public/constants/setting.mojom.h"

namespace ash::settings {

// Uniquely identifies a settings item (section, subpage, or setting).
union OsSettingsIdentifier {
  chromeos::settings::mojom::Section section;
  chromeos::settings::mojom::Subpage subpage;
  chromeos::settings::mojom::Setting setting;
};

}  // namespace ash::settings

#endif  // CHROME_BROWSER_UI_WEBUI_ASH_SETTINGS_OS_SETTINGS_IDENTIFIER_H_

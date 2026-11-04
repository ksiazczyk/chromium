// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: OsSettingsSection unit tests
// summary: Tests GetDefaultModifiedUrl behavior for sections, subpages, and settings, including adding settingId to URLs with and without existing query parameters.
// ---

#include "chrome/browser/ui/webui/ash/settings/pages/os_settings_section.h"

#include "ash/webui/settings/public/constants/setting.mojom.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace ash::settings {

namespace mojom {
using ::chromeos::settings::mojom::Section;
using ::chromeos::settings::mojom::Setting;
using ::chromeos::settings::mojom::Subpage;
}  // namespace mojom

TEST(OsSettingsSectionTest, Section) {
  // Sections should not incur modification.
  EXPECT_EQ("internet", OsSettingsSection::GetDefaultModifiedUrl(
                            /*type=*/mojom::SearchResultType::kSection,
                            /*id=*/{.section = mojom::Section::kNetwork},
                            /*url_to_modify=*/"internet"));
}

TEST(OsSettingsSectionTest, Subpage) {
  // Subpages should not incur modification.
  EXPECT_EQ("networks?type=WiFi",
            OsSettingsSection::GetDefaultModifiedUrl(
                /*type=*/mojom::SearchResultType::kSubpage,
                /*id=*/{.subpage = mojom::Subpage::kWifiNetworks},
                /*url_to_modify=*/"networks?type=WiFi"));
}

TEST(OsSettingsSectionTest, Setting) {
  // Settings should have settingId added
  EXPECT_EQ("networks?settingId=4",
            OsSettingsSection::GetDefaultModifiedUrl(
                /*type=*/mojom::SearchResultType::kSetting,
                /*id=*/{.setting = mojom::Setting::kWifiOnOff},
                /*url_to_modify=*/"networks"));
}

TEST(OsSettingsSectionTest, SettingExistingQuery) {
  // Settings with existing query parameters should have settingId added.
  EXPECT_EQ("networks?type=WiFi&settingId=4",
            OsSettingsSection::GetDefaultModifiedUrl(
                /*type=*/mojom::SearchResultType::kSetting,
                /*id=*/{.setting = mojom::Setting::kWifiOnOff},
                /*url_to_modify=*/"networks?type=WiFi"));
}

}  // namespace ash::settings

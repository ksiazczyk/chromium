// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Settings telemetry handler implementation
// summary: Implements the WebUI handler that records Settings critical user journey telemetry events for navigation category clicks and search queries.
// ---

#include "chrome/browser/ui/webui/settings/settings_telemetry_handler.h"

#include "base/check_op.h"
#include "base/functional/bind.h"
#include "chrome/browser/ui/webui/settings/settings_element_ids.h"
#include "chrome/browser/ui/webui/settings/settings_utils.h"
#include "content/public/browser/web_ui.h"

namespace settings {

SettingsTelemetryHandler::SettingsTelemetryHandler() = default;
SettingsTelemetryHandler::~SettingsTelemetryHandler() = default;

void SettingsTelemetryHandler::RegisterMessages() {
  web_ui()->RegisterMessageCallback(
      "recordSettingsNavCategoryClicked",
      base::BindRepeating(&SettingsTelemetryHandler::HandleNavCategoryClicked,
                          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "recordSettingsSearchQueryEntered",
      base::BindRepeating(&SettingsTelemetryHandler::HandleSearchQueryEntered,
                          base::Unretained(this)));
}

void SettingsTelemetryHandler::HandleNavCategoryClicked(
    const base::ListValue& args) {
  CHECK_EQ(0U, args.size());
  settings_utils::MaybeNotifySettingsElementActivated(
      web_ui(), settings::kSettingsNavCategoryClickedId);
}

void SettingsTelemetryHandler::HandleSearchQueryEntered(
    const base::ListValue& args) {
  CHECK_EQ(0U, args.size());
  settings_utils::MaybeNotifySettingsElementActivated(
      web_ui(), settings::kSettingsSearchQueryEnteredId);
}

}  // namespace settings

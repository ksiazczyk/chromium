// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Locale switch screen WebUI handler implementation
// summary: Implements the WebUI handler for the locale switch screen, triggering a content reload when the UI locale changes.
// ---

#include "chrome/browser/ui/webui/ash/login/locale_switch_screen_handler.h"

#include <string>

#include "base/trace_event/trace_event.h"
#include "base/values.h"
#include "chrome/browser/ash/login/screens/locale_switch_screen.h"
#include "chrome/browser/ui/ash/login/login_display_host.h"
#include "chrome/browser/ui/webui/ash/login/core_oobe_handler.h"
#include "chrome/browser/ui/webui/ash/login/oobe_ui.h"

namespace ash {

LocaleSwitchScreenHandler::LocaleSwitchScreenHandler()
    : BaseScreenHandler(kScreenId) {}

LocaleSwitchScreenHandler::~LocaleSwitchScreenHandler() = default;

void LocaleSwitchScreenHandler::UpdateStrings() {
  TRACE_EVENT0("login", "LocaleSwitchScreenHandler::UpdateStrings");
  GetOobeUI()->GetCoreOobe()->ReloadContent();
}

base::WeakPtr<LocaleSwitchView> LocaleSwitchScreenHandler::AsWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

void LocaleSwitchScreenHandler::DeclareLocalizedValues(
    ::login::LocalizedValuesBuilder* builder) {}

}  // namespace ash

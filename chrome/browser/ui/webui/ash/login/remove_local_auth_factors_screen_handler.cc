// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remove local auth factors screen handler implementation
// summary: Implements the WebUI handler for the remove local auth factors screen, providing localized strings, screen display, and the success step.
// ---

#include "chrome/browser/ui/webui/ash/login/remove_local_auth_factors_screen_handler.h"

#include <string>
#include <utility>

#include "ash/login/resources/grit/ash_login_strings.h"
#include "base/values.h"
#include "chrome/browser/ui/webui/ash/login/base_screen_handler.h"
#include "components/login/localized_values_builder.h"

namespace ash {

RemoveLocalAuthFactorsScreenHandler::RemoveLocalAuthFactorsScreenHandler()
    : BaseScreenHandler(kScreenId) {}

RemoveLocalAuthFactorsScreenHandler::~RemoveLocalAuthFactorsScreenHandler() =
    default;

void RemoveLocalAuthFactorsScreenHandler::DeclareLocalizedValues(
    ::login::LocalizedValuesBuilder* builder) {
  builder->Add("factorsRemovedDoneButton", IDS_LOGIN_GENERIC_DONE_BUTTON);
  builder->Add("factorsRemovedTitle", IDS_LOGIN_FACTORS_REMOVED_TITLE);
  builder->Add("factorsRemovedSubtitle", IDS_LOGIN_FACTORS_REMOVED_SUBTITLE);
}

void RemoveLocalAuthFactorsScreenHandler::Show(const std::string& email) {
  base::DictValue data;
  data.Set("email", email);

  ShowInWebUI(std::move(data));
}

void RemoveLocalAuthFactorsScreenHandler::
    ShowRemoveLocalAuthFactorsSuccessStep() {
  CallExternalAPI("showRemoveLocalAuthFactorsSuccessStep");
}

base::WeakPtr<RemoveLocalAuthFactorsScreenView>
RemoveLocalAuthFactorsScreenHandler::AsWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace ash

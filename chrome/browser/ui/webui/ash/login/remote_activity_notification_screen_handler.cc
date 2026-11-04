// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote activity notification screen WebUI handler implementation
// summary: Implements the WebUI handler for the remote activity notification OOBE screen, providing its title, description, and button strings.
// ---

#include "chrome/browser/ui/webui/ash/login/remote_activity_notification_screen_handler.h"

#include "ash/login/resources/grit/ash_login_strings.h"
#include "chrome/browser/ui/webui/ash/login/base_screen_handler.h"
#include "components/login/localized_values_builder.h"

namespace ash {

RemoteActivityNotificationScreenHandler::
    RemoteActivityNotificationScreenHandler()
    : BaseScreenHandler(kScreenId) {}

RemoteActivityNotificationScreenHandler::
    ~RemoteActivityNotificationScreenHandler() = default;

void RemoteActivityNotificationScreenHandler::DeclareLocalizedValues(
    ::login::LocalizedValuesBuilder* builder) {
  builder->Add("localStateNotificationTitle",
               IDS_REMOTE_ACTIVITY_NOTIFICATION_TITLE);
  builder->Add("localStateNotificationDescription",
               IDS_REMOTE_ACTIVITY_NOTIFICATION_DESCRIPTION);
  builder->Add("localStateCancelButtonLabel",
               IDS_REMOTE_ACTIVITY_NOTIFICATION_BUTTON_LABEL);
}

void RemoteActivityNotificationScreenHandler::Show() {
  ShowInWebUI();
}

base::WeakPtr<RemoteActivityNotificationView>
RemoteActivityNotificationScreenHandler::AsWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace ash

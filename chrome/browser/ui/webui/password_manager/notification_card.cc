// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Password notification card base implementation
// summary: Implements default behavior for the password notification card base class, such as severity, dismissibility, and action button defaults.
// ---

#include "chrome/browser/ui/webui/password_manager/notification_card.h"

namespace password_manager {

PasswordNotificationCardBase::PasswordNotificationCardBase() = default;

PasswordNotificationCardBase::~PasswordNotificationCardBase() = default;

NotificationSeverity PasswordNotificationCardBase::GetNotificationSeverity()
    const {
  return NotificationSeverity::kPromo;
}

bool PasswordNotificationCardBase::IsDismissible() const {
  return true;
}

std::u16string PasswordNotificationCardBase::GetActionButtonText() const {
  return std::u16string();
}

std::string PasswordNotificationCardBase::GetActionButtonAvatarUrl() const {
  return std::string();
}

}  // namespace password_manager

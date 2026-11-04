// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CalendarController implementation
// summary: Implements the CalendarController that registers profile prefs, maps calendar clients to user accounts, and tracks the active user session.
// relations:
//   - implements /ash/calendar/calendar_controller.h
//   - depends_on /ash/constants/ash_pref_names.h
//   - depends_on /ash/public/cpp/session/session_controller.h
// ---

#include "ash/calendar/calendar_controller.h"

#include "ash/constants/ash_pref_names.h"
#include "ash/public/cpp/session/session_controller.h"
#include "base/check.h"
#include "components/prefs/pref_registry_simple.h"
#include "components/prefs/pref_service.h"

namespace ash {

CalendarController::CalendarController() {
  SessionController::Get()->AddObserver(this);
}

CalendarController::~CalendarController() {
  SessionController::Get()->RemoveObserver(this);
}

// static
void CalendarController::RegisterProfilePrefs(PrefRegistrySimple* registry) {
  registry->RegisterBooleanPref(ash::prefs::kCalendarIntegrationEnabled,
                                /*default_value=*/true);
}

void CalendarController::RegisterClientForUser(const AccountId& account_id,
                                               CalendarClient* client) {
  clients_by_account_id_[account_id] = client;
}

CalendarClient* CalendarController::GetClient() {
  auto client_by_id = clients_by_account_id_.find(active_user_account_id_);
  if (client_by_id == clients_by_account_id_.end())
    return nullptr;
  return client_by_id->second;
}

void CalendarController::OnActiveUserSessionChanged(
    const AccountId& account_id) {
  active_user_account_id_ = account_id;
}

void CalendarController::SetActiveUserAccountIdForTesting(
    const AccountId& account_id) {
  active_user_account_id_ = account_id;
}

}  // namespace ash

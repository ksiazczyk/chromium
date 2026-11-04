// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Reauth stats header
// summary: Declares functions for recording reauthentication reasons in local state prefs and sending them as login metrics.
// ---

#ifndef CHROME_BROWSER_ASH_LOGIN_REAUTH_STATS_H_
#define CHROME_BROWSER_ASH_LOGIN_REAUTH_STATS_H_

#include "ash/public/cpp/reauth_reason.h"

class AccountId;
class PrefService;

namespace ash {

void RecordReauthReason(PrefService& local_state,
                        const AccountId& account_id,
                        ReauthReason reason);

void SendReauthReason(PrefService& local_state,
                      const AccountId& account_id,
                      bool password_changed);

}  // namespace ash

#endif  // CHROME_BROWSER_ASH_LOGIN_REAUTH_STATS_H_

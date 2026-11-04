// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows password manager user authentication interface
// summary: Declares Windows helpers that re-authenticate the OS user with a prompt and check whether screen-lock authentication is possible.
// ---

#ifndef CHROME_BROWSER_PASSWORD_MANAGER_PASSWORD_MANAGER_UTIL_WIN_H_
#define CHROME_BROWSER_PASSWORD_MANAGER_PASSWORD_MANAGER_UTIL_WIN_H_

#include "ui/gfx/native_ui_types.h"

class PrefService;

namespace password_manager_util_win {

// Attempts to (re-)authenticate the user of the OS account. Returns true if
// the user was successfully authenticated, or if authentication was not
// possible. Populates the user facing prompt with `password_prompt` message.
bool AuthenticateUser(gfx::NativeWindow window,
                      const std::u16string& password_prompt,
                      PrefService* local_state);

// Returns true if we can authenticate with screen lock, false otherwise. If we
// can not retrieve a username for the device, we will treat that as being
// unable to authenticate with device unlock.
bool CanAuthenticateWithScreenLock(PrefService* local_state);

}  // namespace password_manager_util_win

#endif  // CHROME_BROWSER_PASSWORD_MANAGER_PASSWORD_MANAGER_UTIL_WIN_H_

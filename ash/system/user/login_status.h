// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Login status sign-out string helper header
// summary: Declares GetLocalizedSignOutStringForStatus, which returns a localized sign-out string for a given login status with optional multiline formatting.
// ---

#ifndef ASH_SYSTEM_USER_LOGIN_STATUS_H_
#define ASH_SYSTEM_USER_LOGIN_STATUS_H_

#include <string>

#include "ash/login_status.h"

namespace ash {
namespace user {

std::u16string GetLocalizedSignOutStringForStatus(LoginStatus status,
                                                  bool multiline);

}  // namespace user
}  // namespace ash

#endif  // ASH_SYSTEM_USER_LOGIN_STATUS_H_

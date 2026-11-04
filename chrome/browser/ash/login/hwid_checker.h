// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HWID checker header
// summary: Declares functions that check whether a given hardware ID (HWID) or the current machine's HWID is correct.
// ---

#ifndef CHROME_BROWSER_ASH_LOGIN_HWID_CHECKER_H_
#define CHROME_BROWSER_ASH_LOGIN_HWID_CHECKER_H_

#include <string_view>

namespace ash {

// Checks if given HWID correct.
bool IsHWIDCorrect(std::string_view hwid);

// Checks if current machine has correct HWID.
bool IsMachineHWIDCorrect();

}  // namespace ash

#endif  // CHROME_BROWSER_ASH_LOGIN_HWID_CHECKER_H_

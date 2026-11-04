// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Calculator app utils header
// summary: Declares GetInstalledCalculatorAppId in the ash::calculator_app namespace, which resolves the installed calculator app ID for a profile.
// ---

#ifndef CHROME_BROWSER_ASH_SYSTEM_WEB_APPS_APPS_CALCULATOR_APP_CALCULATOR_APP_UTILS_H_
#define CHROME_BROWSER_ASH_SYSTEM_WEB_APPS_APPS_CALCULATOR_APP_CALCULATOR_APP_UTILS_H_

#include <string>

class Profile;

namespace ash {
namespace calculator_app {

std::string GetInstalledCalculatorAppId(Profile* profile);

}  // namespace calculator_app
}  // namespace ash

#endif  // CHROME_BROWSER_ASH_SYSTEM_WEB_APPS_APPS_CALCULATOR_APP_CALCULATOR_APP_UTILS_H_

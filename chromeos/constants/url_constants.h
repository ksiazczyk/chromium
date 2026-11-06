// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeOS URL constants
// summary: Declares chromeos string constants for the cros-apps install URI scheme, the app Mall base URL, and the ChromeOS Flex frozen update notification URL.
// ---

#ifndef CHROMEOS_CONSTANTS_URL_CONSTANTS_H_
#define CHROMEOS_CONSTANTS_URL_CONSTANTS_H_

#include <string_view>

namespace chromeos {

// The URI scheme for triggering app installs from Almanac.
inline constexpr std::string_view kAppInstallUriScheme = "cros-apps";

// The base URL for the Mall app.
inline constexpr std::string_view kAppMallBaseUrl =
    "https://discover.apps.chrome/";

// The URL for Frozen Update notification
inline constexpr std::string_view kFrozenUpdateNotificationURL =
    "http://support.google.com/chromeosflex?p=about_chromeos_flex_updates";

}  // namespace chromeos

#endif  // CHROMEOS_CONSTANTS_URL_CONSTANTS_H_

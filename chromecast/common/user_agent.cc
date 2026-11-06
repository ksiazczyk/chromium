// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast user agent string construction
// summary: Implements GetUserAgent and GetChromeKeyString, combining the Chromium user agent with the CrKey token and a device-specific suffix.
// ---

#include "chromecast/common/user_agent.h"

#include <string>
#include "base/strings/strcat.h"
#include "components/cast/common/constants.h"

namespace chromecast {

std::string GetChromeKeyString() {
  std::string chrome_key = base::StrCat({"CrKey/", kFrozenCrKeyValue});
  return chrome_key;
}
std::string GetUserAgent() {
  std::string chromium_user_agent = GetChromiumUserAgent();
  return base::StrCat({chromium_user_agent, " ", GetChromeKeyString(), " ",
                       GetDeviceUserAgentSuffix()});
}

}  // namespace chromecast

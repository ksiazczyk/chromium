// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Site isolation trial opt-out flag constants
// summary: Declares the internal name and choice string for the site-isolation-trial-opt-out flag used by about_flags.
// ---

#ifndef CHROME_BROWSER_SITE_ISOLATION_ABOUT_FLAGS_H_
#define CHROME_BROWSER_SITE_ISOLATION_ABOUT_FLAGS_H_

#include <string>

#include "base/strings/strcat.h"

namespace about_flags {

inline constexpr char kSiteIsolationTrialOptOutInternalName[] =
    "site-isolation-trial-opt-out";

inline std::string SiteIsolationTrialOptOutChoiceEnabled() {
  return base::StrCat({kSiteIsolationTrialOptOutInternalName, "@1"});
}

}  // namespace about_flags

#endif  // CHROME_BROWSER_SITE_ISOLATION_ABOUT_FLAGS_H_

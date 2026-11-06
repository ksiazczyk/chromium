// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows RLZ tracker access points
// summary: Defines the Windows-specific RLZ access points for the omnibox, home page and app list.
// ---

#include "components/rlz/rlz_tracker.h"

namespace rlz {

// static
rlz_lib::AccessPoint RLZTracker::ChromeOmnibox() {
  return rlz_lib::CHROME_OMNIBOX;
}

// static
rlz_lib::AccessPoint RLZTracker::ChromeHomePage() {
  return rlz_lib::CHROME_HOME_PAGE;
}

// static
rlz_lib::AccessPoint RLZTracker::ChromeAppList() {
  return rlz_lib::CHROME_APP_LIST;
}

}  // namespace rlz

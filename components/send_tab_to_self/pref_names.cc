// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Preference name constant for Send Tab to Self
// summary: Defines the preference name that stores the URL of the most recently received tab on iOS.
// ---

#include "components/send_tab_to_self/pref_names.h"

namespace send_tab_to_self {
namespace prefs {

const char kIOSSendTabToSelfLastReceivedTabURLPref[] =
    "ios.send_tab_to_self.last_received_tab_url";

}  // namespace prefs
}  // namespace send_tab_to_self

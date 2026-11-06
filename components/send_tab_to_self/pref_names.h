// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Preference name declarations for Send Tab to Self
// summary: Declares the preference name constant for the URL of the last tab received on iOS from the user's other devices.
// ---

#ifndef COMPONENTS_SEND_TAB_TO_SELF_PREF_NAMES_H_
#define COMPONENTS_SEND_TAB_TO_SELF_PREF_NAMES_H_

namespace send_tab_to_self {
namespace prefs {

// Stores the url of the most recent tab received on iOS from one of the user's
// other devices.
extern const char kIOSSendTabToSelfLastReceivedTabURLPref[];

}  // namespace prefs
}  // namespace send_tab_to_self

#endif  // COMPONENTS_SEND_TAB_TO_SELF_PREF_NAMES_H_

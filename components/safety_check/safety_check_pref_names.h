// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safety check preference name constant
// summary: Defines the preference name that stores whether the Safety Check Home module is enabled.
// ---

#ifndef COMPONENTS_SAFETY_CHECK_SAFETY_CHECK_PREF_NAMES_H_
#define COMPONENTS_SAFETY_CHECK_SAFETY_CHECK_PREF_NAMES_H_

namespace safety_check::prefs {

// The pref that stores if the Safety Check Home Module is enabled.
inline constexpr char kSafetyCheckHomeModuleEnabled[] =
    "home.module.safety_check.enabled";

}  // namespace safety_check::prefs

#endif  // COMPONENTS_SAFETY_CHECK_SAFETY_CHECK_PREF_NAMES_H_

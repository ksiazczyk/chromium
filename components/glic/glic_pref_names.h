// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Glic preference names header
// summary: C++ header declaring the glic.completed_fre preference name and the FreStatus enum that tracks first-run experience status.
// ---

#ifndef COMPONENTS_GLIC_GLIC_PREF_NAMES_H_
#define COMPONENTS_GLIC_GLIC_PREF_NAMES_H_

namespace glic::prefs {

// Values for the glic.completed_fre pref.
enum class FreStatus {
  kMinValue = 0,

  kNotStarted = kMinValue,
  kCompleted = 1,
  kIncomplete = 2,

  kMaxValue = kIncomplete
};

// Integer pref that determines the FRE status for the user profile. Values are
// from the FreStatus enum.
inline constexpr char kGlicCompletedFre[] = "glic.completed_fre";

}  // namespace glic::prefs

#endif  // COMPONENTS_GLIC_GLIC_PREF_NAMES_H_

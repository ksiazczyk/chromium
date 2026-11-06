// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Early prefs constants
// summary: Declares constants for the early prefs file name, histogram name and JSON schema keys shared by the reader and writer.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_EARLY_PREFS_EARLY_PREFS_CONSTANTS_H_
#define CHROMEOS_ASH_COMPONENTS_EARLY_PREFS_EARLY_PREFS_CONSTANTS_H_

namespace ash::early_prefs {

constexpr char kEarlyPrefsFileName[] = ".early_prefs";
constexpr char kEarlyPrefsHistogramName[] = "AshEarlyPrefs";

constexpr char kSchemaKey[] = "schema_version";
constexpr char kDataKey[] = "data";

constexpr char kPrefIsManagedKey[] = "managed";
constexpr char kPrefIsRecommendedKey[] = "recommended";
constexpr char kPrefValueKey[] = "value";

}  // namespace ash::early_prefs

#endif  // CHROMEOS_ASH_COMPONENTS_EARLY_PREFS_EARLY_PREFS_CONSTANTS_H_

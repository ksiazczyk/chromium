// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Birch test helper declarations
// summary: Declares test helpers for accessing the birch chip bar and disabling data type preferences, used by Birch tests.
// ---

#ifndef CHROME_BROWSER_UI_ASH_BIRCH_BIRCH_TEST_UTIL_H_
#define CHROME_BROWSER_UI_ASH_BIRCH_BIRCH_TEST_UTIL_H_

#include <string_view>
#include <vector>

namespace ash {
class BirchChipButtonBase;

// Ensures the item remover is initialized, otherwise data fetches won't
// complete.
void EnsureItemRemoverInitialized();

// Returns the button from the birch chip bar. Asserts there is only one button.
BirchChipButtonBase* GetBirchChipButton();

// Returns the number of chip buttons on birch bar.
size_t GetBirchChipsNum();

// Disables all data type prefs except the given exceptions.
void DisableAllDataTypePrefsExcept(std::vector<std::string_view> exceptions);

}  // namespace ash

#endif  // CHROME_BROWSER_UI_ASH_BIRCH_BIRCH_TEST_UTIL_H_

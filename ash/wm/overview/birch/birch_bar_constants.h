// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Birch suggestion type constants
// summary: Defines the BirchSuggestionType enum covering suggestion kinds such as weather, calendar, Drive, Chrome tabs, media, and Coral.
// ---

#ifndef ASH_WM_OVERVIEW_BIRCH_BIRCH_BAR_CONSTANTS_H_
#define ASH_WM_OVERVIEW_BIRCH_BIRCH_BAR_CONSTANTS_H_

namespace ash {

// The type of birch suggestions.
enum class BirchSuggestionType {
  kWeather,
  kCalendar,
  kDrive,
  kChromeTab,
  kMedia,
  kExplore,
  kUndefined,
  kCoral,
};

}  // namespace ash

#endif  // ASH_WM_OVERVIEW_BIRCH_BIRCH_BAR_CONSTANTS_H_

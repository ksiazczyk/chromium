// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab state enums
// summary: Defines simple enums for the active, open, and pinned states of a tab.
// ---

#ifndef CHROME_BROWSER_UI_TABS_TAB_TYPES_H_
#define CHROME_BROWSER_UI_TABS_TAB_TYPES_H_

// Potential Active states for a tab.
enum class TabActive {
  kActive,
  kInactive,
};

// Potential Open states for a tab.
enum class TabOpen {
  kOpen,
  kClosed,
};

// Potential Pinned states for a tab.
enum class TabPinned {
  kPinned,
  kUnpinned,
};

#endif  // CHROME_BROWSER_UI_TABS_TAB_TYPES_H_

// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabChangeType enum
// summary: Defines the TabChangeType enum describing which parts of tab state changed, such as loading, attention, or resource usage.
// ---

#ifndef CHROME_BROWSER_UI_TABS_TAB_CHANGE_TYPE_H_
#define CHROME_BROWSER_UI_TABS_TAB_CHANGE_TYPE_H_

// Enumeration of possible changes to tab state used by the UI.
enum class TabChangeType {
  // Everything changed.
  kAll,

  // Only the loading state changed.
  kLoadingOnly,

  // Only the attention state changed.
  kAttentionOnly,

  // Only the resource usage changed.
  kResourceUsageOnly,
};

#endif  // CHROME_BROWSER_UI_TABS_TAB_CHANGE_TYPE_H_

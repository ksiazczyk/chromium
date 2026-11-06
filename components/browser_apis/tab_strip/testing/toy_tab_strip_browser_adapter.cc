// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Toy tab strip browser adapter implementation
// summary: Implements the browser adapter that delegates tab creation to the toy tab strip.
// ---

#include "components/browser_apis/tab_strip/testing/toy_tab_strip_browser_adapter.h"

namespace tabs_api::testing {

ToyTabStripBrowserAdapter::ToyTabStripBrowserAdapter(ToyTabStrip* tab_strip)
    : tab_strip_(tab_strip) {}

tabs::TabHandle ToyTabStripBrowserAdapter::AddTabAt(
    const GURL& url,
    std::optional<int> index,
    std::optional<tab_groups::TabGroupId> group,
    bool pinned) {
  return tab_strip_->AddTabAt(url, index);
}

}  // namespace tabs_api::testing

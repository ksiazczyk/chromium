// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake tab matcher implementation
// summary: Implements a fake TabMatcher that matches URLs by a configurable substring and returns a set list of open tabs for tests.
// ---

#include <string>

#include "components/omnibox/browser/fake_tab_matcher.h"

FakeTabMatcher::FakeTabMatcher() = default;
FakeTabMatcher::~FakeTabMatcher() = default;

void FakeTabMatcher::AddOpenTab(TabMatcher::TabWrapper open_tab) {
  open_tabs_.push_back(open_tab);
}

bool FakeTabMatcher::IsTabOpenWithURL(const GURL& url,
                                      const AutocompleteInput* input) const {
  return !substring_to_match_.empty() &&
         url.spec().find(substring_to_match_) != std::string::npos;
}

std::vector<TabMatcher::TabWrapper> FakeTabMatcher::GetOpenTabs(
    const AutocompleteInput* input,
    bool exclude_active_tab) const {
  return open_tabs_;
}

// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabMatcherImpl class declaration
// summary: Declares TabMatcherImpl, a TabMatcher that reports whether a URL is open in a tab for a given profile.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOCOMPLETE_MODEL_TAB_MATCHER_IMPL_H_
#define IOS_CHROME_BROWSER_AUTOCOMPLETE_MODEL_TAB_MATCHER_IMPL_H_

#import "base/memory/raw_ptr.h"
#import "components/omnibox/browser/tab_matcher.h"

class ProfileIOS;

class TabMatcherImpl : public TabMatcher {
 public:
  explicit TabMatcherImpl(ProfileIOS* profile);

  bool IsTabOpenWithURL(const GURL& gurl,
                        const AutocompleteInput* input) const override;

 private:
  raw_ptr<ProfileIOS> profile_ = nullptr;
};

#endif  // IOS_CHROME_BROWSER_AUTOCOMPLETE_MODEL_TAB_MATCHER_IMPL_H_

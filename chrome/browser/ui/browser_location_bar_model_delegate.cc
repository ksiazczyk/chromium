// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser location bar model delegate implementation
// summary: Implements BrowserLocationBarModelDelegate, returning the active web contents from a browser's tab strip for the location bar model.
// ---

#include "chrome/browser/ui/browser_location_bar_model_delegate.h"

#include "base/check_deref.h"
#include "chrome/browser/ui/tabs/tab_strip_model.h"

BrowserLocationBarModelDelegate::BrowserLocationBarModelDelegate(
    TabStripModel* tab_strip_model)
    : tab_strip_model_(CHECK_DEREF(tab_strip_model)) {}

BrowserLocationBarModelDelegate::~BrowserLocationBarModelDelegate() = default;

content::WebContents* BrowserLocationBarModelDelegate::GetActiveWebContents()
    const {
  return tab_strip_model_->GetActiveWebContents();
}

// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extensions container implementation
// summary: Implements the ExtensionsContainer user data lookup for browser windows and a default GetActiveWebContents that returns null.
// ---

#include "chrome/browser/ui/extensions/extensions_container.h"

#include "chrome/browser/ui/browser_window/public/browser_window_interface.h"

DEFINE_USER_DATA(ExtensionsContainer);

// static
ExtensionsContainer* ExtensionsContainer::From(
    BrowserWindowInterface& browser) {
  return Get(browser.GetUnownedUserDataHost());
}

content::WebContents* ExtensionsContainer::GetActiveWebContents() const {
  return nullptr;
}

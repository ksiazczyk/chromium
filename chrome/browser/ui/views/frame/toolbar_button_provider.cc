// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ToolbarButtonProvider lookup implementation
// summary: Implements ToolbarButtonProvider::From, retrieving the provider instance from a browser window's unowned user data host.
// ---

#include "chrome/browser/ui/views/frame/toolbar_button_provider.h"

#include "chrome/browser/ui/browser_window/public/browser_window_interface.h"

DEFINE_USER_DATA(ToolbarButtonProvider);

// static
ToolbarButtonProvider* ToolbarButtonProvider::From(
    BrowserWindowInterface* browser) {
  return browser ? Get(browser->GetUnownedUserDataHost()) : nullptr;
}

// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabMenuModelDelegate implementation
// summary: Implements TabMenuModelDelegate, storing the delegate as unowned user data on the browser window and providing lookup from a browser window interface.
// ---

#include "chrome/browser/ui/tabs/tab_menu_model_delegate.h"

#include "chrome/browser/ui/browser_window/public/browser_window_interface.h"

DEFINE_USER_DATA(TabMenuModelDelegate);

TabMenuModelDelegate::TabMenuModelDelegate(ui::UnownedUserDataHost& host)
    : scoped_unowned_user_data_(host, *this) {}

TabMenuModelDelegate::~TabMenuModelDelegate() = default;

// static
TabMenuModelDelegate* TabMenuModelDelegate::From(
    BrowserWindowInterface* browser) {
  return Get(browser->GetUnownedUserDataHost());
}

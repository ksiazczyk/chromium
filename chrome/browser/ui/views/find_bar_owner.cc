// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Find bar owner implementation
// summary: Implements FindBarOwner as unowned user data and provides lookup of the owner from a browser window interface.
// ---

#include "chrome/browser/ui/views/find_bar_owner.h"

#include "chrome/browser/ui/browser_window/public/browser_window_interface.h"

DEFINE_USER_DATA(FindBarOwner);

FindBarOwner::FindBarOwner(ui::UnownedUserDataHost& host)
    : scoped_unowned_user_data_(host, *this) {}

FindBarOwner::~FindBarOwner() = default;

// static
FindBarOwner* FindBarOwner::From(BrowserWindowInterface* browser) {
  return Get(browser->GetUnownedUserDataHost());
}

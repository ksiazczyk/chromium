// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab dialogs implementation
// summary: Implements TabDialogs by attaching the instance to a tab's unowned user data and providing lookup from a tab or WebContents.
// ---

#include "chrome/browser/ui/tab_dialogs.h"

#include "components/tabs/public/tab_interface.h"
#include "content/public/browser/web_contents.h"

DEFINE_USER_DATA(TabDialogs);

TabDialogs::TabDialogs(tabs::TabInterface& tab)
    : scoped_unowned_user_data_(tab.GetUnownedUserDataHost(), *this) {}

TabDialogs::~TabDialogs() = default;

// static
TabDialogs* TabDialogs::From(tabs::TabInterface* tab) {
  return tab ? Get(tab->GetUnownedUserDataHost()) : nullptr;
}

// static
TabDialogs* TabDialogs::FromWebContents(content::WebContents* contents) {
  DCHECK(contents);
  return From(tabs::TabInterface::MaybeGetFromContents(contents));
}

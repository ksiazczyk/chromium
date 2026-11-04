// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App shortcut item implementation
// summary: Defines the default constructors and destructor for the AppShortcutItem struct that describes app shortcuts published by Android's ShortcutManager.
// ---

#include "chrome/browser/apps/app_service/app_shortcut_item.h"

namespace apps {

AppShortcutItem::AppShortcutItem() = default;
AppShortcutItem::AppShortcutItem(const AppShortcutItem& item) = default;
AppShortcutItem::~AppShortcutItem() = default;

}  // namespace apps

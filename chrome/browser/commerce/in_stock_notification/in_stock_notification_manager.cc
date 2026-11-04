// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: In stock notification manager implementation
// summary: Implements the commerce InStockNotificationManager, attaching it to a tab's unowned user data host and defining its destructor.
// ---

#include "chrome/browser/commerce/in_stock_notification/in_stock_notification_manager.h"

#include "components/tabs/public/tab_interface.h"

namespace commerce {

DEFINE_USER_DATA(InStockNotificationManager);

InStockNotificationManager::InStockNotificationManager(tabs::TabInterface* tab)
    : scoped_unowned_user_data_(tab->GetUnownedUserDataHost(), *this) {}

InStockNotificationManager::~InStockNotificationManager() = default;

}  // namespace commerce

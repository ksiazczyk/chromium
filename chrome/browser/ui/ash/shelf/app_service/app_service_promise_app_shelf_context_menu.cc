// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Promise app shelf context menu implementation
// summary: Implements the shelf context menu for promise apps, building a menu model that only offers the pin option.
// ---

#include "chrome/browser/ui/ash/shelf/app_service/app_service_promise_app_shelf_context_menu.h"

#include <memory>
#include <utility>

#include "ash/public/cpp/shelf_item.h"
#include "base/functional/callback.h"
#include "chrome/browser/ui/ash/shelf/chrome_shelf_controller.h"

AppServicePromiseAppShelfContextMenu::AppServicePromiseAppShelfContextMenu(
    ChromeShelfController* controller,
    const ash::ShelfItem* item,
    int64_t display_id)
    : ShelfContextMenu(controller, item, display_id) {}

AppServicePromiseAppShelfContextMenu::~AppServicePromiseAppShelfContextMenu() =
    default;

void AppServicePromiseAppShelfContextMenu::GetMenuModel(
    GetMenuModelCallback callback) {
  auto menu_model = std::make_unique<ui::SimpleMenuModel>(this);
  AddPinMenu(menu_model.get());
  std::move(callback).Run(std::move(menu_model));
}

// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App list keyboard controller interface
// summary: Declares the shared keyboard traversal logic used by AppListBubbleAppsPage and AppsContainerView to move focus among recents, toasts, and the apps grid.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /base/memory/raw_ptr.h
//   - references /ash/app_list/views/app_list_bubble_apps_page.h
// ---

#ifndef ASH_APP_LIST_VIEWS_APP_LIST_KEYBOARD_CONTROLLER_H_
#define ASH_APP_LIST_VIEWS_APP_LIST_KEYBOARD_CONTROLLER_H_

#include "ash/ash_export.h"
#include "base/memory/raw_ptr.h"

namespace ash {

class AppListViewProvider;

// Common code that implements keyboard traversal logic in
// `AppListBubbleAppsPage` and `AppsContainerView`.
class ASH_EXPORT AppListKeyboardController {
 public:
  explicit AppListKeyboardController(AppListViewProvider* view_provider);
  AppListKeyboardController(const AppListKeyboardController&) = delete;
  AppListKeyboardController& operator=(const AppListKeyboardController&) =
      delete;
  ~AppListKeyboardController() = default;

  // Moves focus down/up and out (usually to the apps grid / continue tasks).
  // `column` is the column of the items that was focused in the recent apps
  // list.
  void MoveFocusDownFromRecents(int column);
  void MoveFocusUpFromRecents();

  // Attempts to move focus down/up and out (usually to the apps grid / recent
  // apps).
  // `column` is the column of the item that was focused before moving
  // focus on this toast container.
  bool MoveFocusDownFromToast(int column);
  bool MoveFocusUpFromToast(int column);

  // Attempts to move focus up and out (usually to the recent apps list).
  // `column` is the column of the item that was focused in the grid.
  bool MoveFocusUpFromAppsGrid(int column);

 private:
  // Helper functions to move the focus to RecentAppsView/AppsGridView.
  bool HandleMovingFocusToAppsGrid(int column);
  bool HandleMovingFocusToRecents(int column);

  const raw_ptr<AppListViewProvider> view_provider_;
};

}  // namespace ash

#endif  // ASH_APP_LIST_VIEWS_APP_LIST_KEYBOARD_CONTROLLER_H_

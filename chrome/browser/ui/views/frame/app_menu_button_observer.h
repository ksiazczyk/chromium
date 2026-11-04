// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Observer interface for app menu button events
// summary: Defines the AppMenuButtonObserver interface with callbacks that fire when the app menu is shown and when it is closed.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_FRAME_APP_MENU_BUTTON_OBSERVER_H_
#define CHROME_BROWSER_UI_VIEWS_FRAME_APP_MENU_BUTTON_OBSERVER_H_

class AppMenuButtonObserver {
 public:
  // Called after AppMenu::RunMenu().
  virtual void AppMenuShown() {}

  // Called during AppMenu::OnMenuClosed().
  virtual void AppMenuClosed() {}

 protected:
  virtual ~AppMenuButtonObserver() = default;
};

#endif  // CHROME_BROWSER_UI_VIEWS_FRAME_APP_MENU_BUTTON_OBSERVER_H_

// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App context menu delegate interface
// summary: Declares the AppContextMenuDelegate interface used to execute the launch command from an app list context menu.
// ---

#ifndef CHROME_BROWSER_ASH_APP_LIST_APP_CONTEXT_MENU_DELEGATE_H_
#define CHROME_BROWSER_ASH_APP_LIST_APP_CONTEXT_MENU_DELEGATE_H_

namespace app_list {

class AppContextMenuDelegate {
 public:
  // Invoked to execute "Launch" command.
  virtual void ExecuteLaunchCommand(int event_flags) = 0;

 protected:
  virtual ~AppContextMenuDelegate() = default;
};

}  // namespace app_list

#endif  // CHROME_BROWSER_ASH_APP_LIST_APP_CONTEXT_MENU_DELEGATE_H_

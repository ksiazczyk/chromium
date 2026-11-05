// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Multi-user context menu interface
// summary: Declares the factory for the multi-user context menu and the command that moves a window to another user's desktop.
// ---

#ifndef CHROME_BROWSER_UI_ASH_MULTI_USER_MULTI_USER_CONTEXT_MENU_H_
#define CHROME_BROWSER_UI_ASH_MULTI_USER_MULTI_USER_CONTEXT_MENU_H_

#include <memory>

namespace aura {
class Window;
}

namespace ui {
class MenuModel;
}

// The multi user context menu factory.
std::unique_ptr<ui::MenuModel> CreateMultiUserContextMenu(aura::Window* window);

// Executes move of a |window| to another profile.
// |command_id| defines a user whose desktop is being visited.
void ExecuteVisitDesktopCommand(int command_id, aura::Window* window);

#endif  // CHROME_BROWSER_UI_ASH_MULTI_USER_MULTI_USER_CONTEXT_MENU_H_

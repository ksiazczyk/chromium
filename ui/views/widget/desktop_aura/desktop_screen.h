// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Desktop screen factory interface
// summary: Declares CreateDesktopScreen, which builds the display::Screen representing the environment hosting a WindowTreeHost.
// ---

#ifndef UI_VIEWS_WIDGET_DESKTOP_AURA_DESKTOP_SCREEN_H_
#define UI_VIEWS_WIDGET_DESKTOP_AURA_DESKTOP_SCREEN_H_

#include <memory>

#include "ui/views/views_export.h"

namespace display {
class Screen;
}

namespace views {

// Creates a Screen that represents the screen of the environment that hosts
// a WindowTreeHost.
VIEWS_EXPORT std::unique_ptr<display::Screen> CreateDesktopScreen();

}  // namespace views

#endif  // UI_VIEWS_WIDGET_DESKTOP_AURA_DESKTOP_SCREEN_H_
